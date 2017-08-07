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

class Dot5Testinsertfunc : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Dot5Testinsertfunc();
        ~Dot5Testinsertfunc();


}; // Dot5Testinsertfunc

class Dot5Testfullduplexloopback : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Dot5Testfullduplexloopback();
        ~Dot5Testfullduplexloopback();


}; // Dot5Testfullduplexloopback

class Dot5Chipsettitms380 : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Dot5Chipsettitms380();
        ~Dot5Chipsettitms380();


}; // Dot5Chipsettitms380

class Dot5Chipsettitms380C16 : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Dot5Chipsettitms380C16();
        ~Dot5Chipsettitms380C16();


}; // Dot5Chipsettitms380C16

class Dot5Chipsetibm16 : public ietf::ietf_yang_smiv2::ObjectIdentity, virtual ydk::Identity
{
    public:
        Dot5Chipsetibm16();
        ~Dot5Chipsetibm16();


}; // Dot5Chipsetibm16

class TokenringMib : public ydk::Entity
{
    public:
        TokenringMib();
        ~TokenringMib();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        class Dot5Table; //type: TokenringMib::Dot5Table
        class Dot5Statstable; //type: TokenringMib::Dot5Statstable
        class Dot5Timertable; //type: TokenringMib::Dot5Timertable

        std::shared_ptr<TOKENRING_MIB::TokenringMib::Dot5Statstable> dot5statstable;
        std::shared_ptr<TOKENRING_MIB::TokenringMib::Dot5Table> dot5table;
        std::shared_ptr<TOKENRING_MIB::TokenringMib::Dot5Timertable> dot5timertable;
        
}; // TokenringMib


class TokenringMib::Dot5Table : public ydk::Entity
{
    public:
        Dot5Table();
        ~Dot5Table();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dot5Entry; //type: TokenringMib::Dot5Table::Dot5Entry

        std::vector<std::shared_ptr<TOKENRING_MIB::TokenringMib::Dot5Table::Dot5Entry> > dot5entry;
        
}; // TokenringMib::Dot5Table


class TokenringMib::Dot5Table::Dot5Entry : public ydk::Entity
{
    public:
        Dot5Entry();
        ~Dot5Entry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dot5ifindex; //type: int32
        ydk::YLeaf dot5commands; //type: Dot5Commands
        ydk::YLeaf dot5ringstatus; //type: int32
        ydk::YLeaf dot5ringstate; //type: Dot5Ringstate
        ydk::YLeaf dot5ringopenstatus; //type: Dot5Ringopenstatus
        ydk::YLeaf dot5ringspeed; //type: Dot5Ringspeed
        ydk::YLeaf dot5upstream; //type: string
        ydk::YLeaf dot5actmonparticipate; //type: Dot5Actmonparticipate
        ydk::YLeaf dot5functional; //type: string
        ydk::YLeaf dot5lastbeaconsent; //type: uint32
        class Dot5Commands;
        class Dot5Ringstate;
        class Dot5Ringopenstatus;
        class Dot5Ringspeed;
        class Dot5Actmonparticipate;

}; // TokenringMib::Dot5Table::Dot5Entry


class TokenringMib::Dot5Statstable : public ydk::Entity
{
    public:
        Dot5Statstable();
        ~Dot5Statstable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dot5Statsentry; //type: TokenringMib::Dot5Statstable::Dot5Statsentry

        std::vector<std::shared_ptr<TOKENRING_MIB::TokenringMib::Dot5Statstable::Dot5Statsentry> > dot5statsentry;
        
}; // TokenringMib::Dot5Statstable


class TokenringMib::Dot5Statstable::Dot5Statsentry : public ydk::Entity
{
    public:
        Dot5Statsentry();
        ~Dot5Statsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

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

}; // TokenringMib::Dot5Statstable::Dot5Statsentry


class TokenringMib::Dot5Timertable : public ydk::Entity
{
    public:
        Dot5Timertable();
        ~Dot5Timertable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dot5Timerentry; //type: TokenringMib::Dot5Timertable::Dot5Timerentry

        std::vector<std::shared_ptr<TOKENRING_MIB::TokenringMib::Dot5Timertable::Dot5Timerentry> > dot5timerentry;
        
}; // TokenringMib::Dot5Timertable


class TokenringMib::Dot5Timertable::Dot5Timerentry : public ydk::Entity
{
    public:
        Dot5Timerentry();
        ~Dot5Timerentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

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

}; // TokenringMib::Dot5Timertable::Dot5Timerentry

class TokenringMib::Dot5Table::Dot5Entry::Dot5Commands : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf noop;
        static const ydk::Enum::YLeaf open;
        static const ydk::Enum::YLeaf reset;
        static const ydk::Enum::YLeaf close;

};

class TokenringMib::Dot5Table::Dot5Entry::Dot5Ringstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf opened;
        static const ydk::Enum::YLeaf closed;
        static const ydk::Enum::YLeaf opening;
        static const ydk::Enum::YLeaf closing;
        static const ydk::Enum::YLeaf openFailure;
        static const ydk::Enum::YLeaf ringFailure;

};

class TokenringMib::Dot5Table::Dot5Entry::Dot5Ringopenstatus : public ydk::Enum
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

};

class TokenringMib::Dot5Table::Dot5Entry::Dot5Ringspeed : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf oneMegabit;
        static const ydk::Enum::YLeaf fourMegabit;
        static const ydk::Enum::YLeaf sixteenMegabit;

};

class TokenringMib::Dot5Table::Dot5Entry::Dot5Actmonparticipate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf true_;
        static const ydk::Enum::YLeaf false_;

};


}
}

#endif /* _TOKENRING_MIB_ */

