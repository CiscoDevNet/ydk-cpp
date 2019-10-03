#ifndef _TOKENRING_MIB_
#define _TOKENRING_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "ydk_ietf/ietf_yang_smiv2.hpp"

namespace cisco_ios_xe {
namespace TOKENRING_MIB {

class Dot5ChipSetTItms380 : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Dot5ChipSetTItms380();
        ~Dot5ChipSetTItms380();


}; // Dot5ChipSetTItms380

class Dot5ChipSetTItms380c16 : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Dot5ChipSetTItms380c16();
        ~Dot5ChipSetTItms380c16();


}; // Dot5ChipSetTItms380c16

class Dot5ChipSetIBM16 : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Dot5ChipSetIBM16();
        ~Dot5ChipSetIBM16();


}; // Dot5ChipSetIBM16

class Dot5TestInsertFunc : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Dot5TestInsertFunc();
        ~Dot5TestInsertFunc();


}; // Dot5TestInsertFunc

class Dot5TestFullDuplexLoopBack : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Dot5TestFullDuplexLoopBack();
        ~Dot5TestFullDuplexLoopBack();


}; // Dot5TestFullDuplexLoopBack

class TOKENRINGMIB : public ydk::Entity
{
    public:
        TOKENRINGMIB();
        ~TOKENRINGMIB();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class Dot5Table; //type: TOKENRINGMIB::Dot5Table
        class Dot5StatsTable; //type: TOKENRINGMIB::Dot5StatsTable
        class Dot5TimerTable; //type: TOKENRINGMIB::Dot5TimerTable

        std::shared_ptr<cisco_ios_xe::TOKENRING_MIB::TOKENRINGMIB::Dot5Table> dot5table;
        std::shared_ptr<cisco_ios_xe::TOKENRING_MIB::TOKENRINGMIB::Dot5StatsTable> dot5statstable;
        std::shared_ptr<cisco_ios_xe::TOKENRING_MIB::TOKENRINGMIB::Dot5TimerTable> dot5timertable;
        
}; // TOKENRINGMIB


class TOKENRINGMIB::Dot5Table : public ydk::Entity
{
    public:
        Dot5Table();
        ~Dot5Table();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Dot5Entry; //type: TOKENRINGMIB::Dot5Table::Dot5Entry

        ydk::YList dot5entry;
        
}; // TOKENRINGMIB::Dot5Table


class TOKENRINGMIB::Dot5Table::Dot5Entry : public ydk::Entity
{
    public:
        Dot5Entry();
        ~Dot5Entry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf dot5ifindex; //type: int32
        ydk::YLeaf dot5commands; //type: Dot5Commands
        ydk::YLeaf dot5ringstatus; //type: int32
        ydk::YLeaf dot5ringstate; //type: Dot5RingState
        ydk::YLeaf dot5ringopenstatus; //type: Dot5RingOpenStatus
        ydk::YLeaf dot5ringspeed; //type: Dot5RingSpeed
        ydk::YLeaf dot5upstream; //type: string
        ydk::YLeaf dot5actmonparticipate; //type: Dot5ActMonParticipate
        ydk::YLeaf dot5functional; //type: string
        ydk::YLeaf dot5lastbeaconsent; //type: uint32
        class Dot5Commands;
        class Dot5RingState;
        class Dot5RingOpenStatus;
        class Dot5RingSpeed;
        class Dot5ActMonParticipate;

}; // TOKENRINGMIB::Dot5Table::Dot5Entry


class TOKENRINGMIB::Dot5StatsTable : public ydk::Entity
{
    public:
        Dot5StatsTable();
        ~Dot5StatsTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Dot5StatsEntry; //type: TOKENRINGMIB::Dot5StatsTable::Dot5StatsEntry

        ydk::YList dot5statsentry;
        
}; // TOKENRINGMIB::Dot5StatsTable


class TOKENRINGMIB::Dot5StatsTable::Dot5StatsEntry : public ydk::Entity
{
    public:
        Dot5StatsEntry();
        ~Dot5StatsEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf dot5statsifindex; //type: int32
        ydk::YLeaf dot5statslineerrors; //type: uint32
        ydk::YLeaf dot5statsbursterrors; //type: uint32
        ydk::YLeaf dot5statsacerrors; //type: uint32
        ydk::YLeaf dot5statsaborttranserrors; //type: uint32
        ydk::YLeaf dot5statsinternalerrors; //type: uint32
        ydk::YLeaf dot5statslostframeerrors; //type: uint32
        ydk::YLeaf dot5statsreceivecongestions; //type: uint32
        ydk::YLeaf dot5statsframecopiederrors; //type: uint32
        ydk::YLeaf dot5statstokenerrors; //type: uint32
        ydk::YLeaf dot5statssofterrors; //type: uint32
        ydk::YLeaf dot5statsharderrors; //type: uint32
        ydk::YLeaf dot5statssignalloss; //type: uint32
        ydk::YLeaf dot5statstransmitbeacons; //type: uint32
        ydk::YLeaf dot5statsrecoverys; //type: uint32
        ydk::YLeaf dot5statslobewires; //type: uint32
        ydk::YLeaf dot5statsremoves; //type: uint32
        ydk::YLeaf dot5statssingles; //type: uint32
        ydk::YLeaf dot5statsfreqerrors; //type: uint32

}; // TOKENRINGMIB::Dot5StatsTable::Dot5StatsEntry


class TOKENRINGMIB::Dot5TimerTable : public ydk::Entity
{
    public:
        Dot5TimerTable();
        ~Dot5TimerTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Dot5TimerEntry; //type: TOKENRINGMIB::Dot5TimerTable::Dot5TimerEntry

        ydk::YList dot5timerentry;
        
}; // TOKENRINGMIB::Dot5TimerTable


class TOKENRINGMIB::Dot5TimerTable::Dot5TimerEntry : public ydk::Entity
{
    public:
        Dot5TimerEntry();
        ~Dot5TimerEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf dot5timerifindex; //type: int32
        ydk::YLeaf dot5timerreturnrepeat; //type: int32
        ydk::YLeaf dot5timerholding; //type: int32
        ydk::YLeaf dot5timerqueuepdu; //type: int32
        ydk::YLeaf dot5timervalidtransmit; //type: int32
        ydk::YLeaf dot5timernotoken; //type: int32
        ydk::YLeaf dot5timeractivemon; //type: int32
        ydk::YLeaf dot5timerstandbymon; //type: int32
        ydk::YLeaf dot5timererrorreport; //type: int32
        ydk::YLeaf dot5timerbeacontransmit; //type: int32
        ydk::YLeaf dot5timerbeaconreceive; //type: int32

}; // TOKENRINGMIB::Dot5TimerTable::Dot5TimerEntry

class TOKENRINGMIB::Dot5Table::Dot5Entry::Dot5Commands : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf noop;
        static const ydk::Enum::YLeaf open;
        static const ydk::Enum::YLeaf reset;
        static const ydk::Enum::YLeaf close;

        static int get_enum_value(const std::string & name) {
            if (name == "noop") return 1;
            if (name == "open") return 2;
            if (name == "reset") return 3;
            if (name == "close") return 4;
            return -1;
        }
};

class TOKENRINGMIB::Dot5Table::Dot5Entry::Dot5RingState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf opened;
        static const ydk::Enum::YLeaf closed;
        static const ydk::Enum::YLeaf opening;
        static const ydk::Enum::YLeaf closing;
        static const ydk::Enum::YLeaf openFailure;
        static const ydk::Enum::YLeaf ringFailure;

        static int get_enum_value(const std::string & name) {
            if (name == "opened") return 1;
            if (name == "closed") return 2;
            if (name == "opening") return 3;
            if (name == "closing") return 4;
            if (name == "openFailure") return 5;
            if (name == "ringFailure") return 6;
            return -1;
        }
};

class TOKENRINGMIB::Dot5Table::Dot5Entry::Dot5RingOpenStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf noOpen;
        static const ydk::Enum::YLeaf badParam;
        static const ydk::Enum::YLeaf lobeFailed;
        static const ydk::Enum::YLeaf signalLoss;
        static const ydk::Enum::YLeaf insertionTimeout;
        static const ydk::Enum::YLeaf ringFailed;
        static const ydk::Enum::YLeaf beaconing;
        static const ydk::Enum::YLeaf duplicateMAC;
        static const ydk::Enum::YLeaf requestFailed;
        static const ydk::Enum::YLeaf removeReceived;
        static const ydk::Enum::YLeaf open;

        static int get_enum_value(const std::string & name) {
            if (name == "noOpen") return 1;
            if (name == "badParam") return 2;
            if (name == "lobeFailed") return 3;
            if (name == "signalLoss") return 4;
            if (name == "insertionTimeout") return 5;
            if (name == "ringFailed") return 6;
            if (name == "beaconing") return 7;
            if (name == "duplicateMAC") return 8;
            if (name == "requestFailed") return 9;
            if (name == "removeReceived") return 10;
            if (name == "open") return 11;
            return -1;
        }
};

class TOKENRINGMIB::Dot5Table::Dot5Entry::Dot5RingSpeed : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf oneMegabit;
        static const ydk::Enum::YLeaf fourMegabit;
        static const ydk::Enum::YLeaf sixteenMegabit;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 1;
            if (name == "oneMegabit") return 2;
            if (name == "fourMegabit") return 3;
            if (name == "sixteenMegabit") return 4;
            return -1;
        }
};

class TOKENRINGMIB::Dot5Table::Dot5Entry::Dot5ActMonParticipate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf true_;
        static const ydk::Enum::YLeaf false_;

        static int get_enum_value(const std::string & name) {
            if (name == "true") return 1;
            if (name == "false") return 2;
            return -1;
        }
};


}
}

#endif /* _TOKENRING_MIB_ */

