struct Init {
    proposalId: Int as uint32;
    votingEndingAt: Int as uint32;
}

struct ProposalState {
    yesCount: Int as uint32;
    noCount: Int as uint32;
}

message Vote {
    value: Bool;
}

contract Proposal {
    proposalId: Int as uint32;
    votingEndingAt: Int as uint32;
    yesCount: Int as uint32 = 0;
    noCount: Int as uint32 = 0;
    voters: Dictionary<Address, Bool> = Dictionary.empty(); // ВАЖНО: Dictionary, не HashMap!
    totalVotes: Int as uint32 = 0;

    init(init: Init) {
        self.proposalId = init.proposalId;
        self.votingEndingAt = init.votingEndingAt;
    }

    receive() {}
    receive(msg: Vote) {
        if (now() > self.votingEndingAt) {
            revert(100);
        }

        if (self.totalVotes >= 100) {
            revert(101);
        }

        if (self.voters.get(msg.sender).isSome()) {
            revert(102);
        }

        if (msg.value) {
            self.yesCount += 1;
        } else {
            self.noCount += 1;
        }

        self.voters.set(msg.sender, true);

        self.totalVotes += 1;

        send(msg.sender, msg.valueRemaining());
    }

    get fun proposalState(): ProposalState {
        return ProposalState{
            yesCount: self.yesCount,
            noCount: self.noCount
        };
    }
}