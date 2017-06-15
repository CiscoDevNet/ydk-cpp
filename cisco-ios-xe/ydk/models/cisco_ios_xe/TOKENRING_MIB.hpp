#ifndef _TOKENRING_MIB_
#define _TOKENRING_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "ydk_ietf/ietf_yang_smiv2.hpp"

namespace ydk {
namespace TOKENRING_MIB {

class Dot5Chipsettitms380Identity : public ietf_yang_smiv2::ObjectIdentityIdentity, virtual Identity
{
    public:
        Dot5Chipsettitms380Identity();
        ~Dot5Chipsettitms380Identity();


}; // Dot5Chipsettitms380Identity

class Dot5Chipsettitms380C16Identity : public ietf_yang_smiv2::ObjectIdentityIdentity, virtual Identity
{
    public:
        Dot5Chipsettitms380C16Identity();
        ~Dot5Chipsettitms380C16Identity();


}; // Dot5Chipsettitms380C16Identity

class Dot5Chipsetibm16Identity : public ietf_yang_smiv2::ObjectIdentityIdentity, virtual Identity
{
    public:
        Dot5Chipsetibm16Identity();
        ~Dot5Chipsetibm16Identity();


}; // Dot5Chipsetibm16Identity

class Dot5TestinsertfuncIdentity : public ietf_yang_smiv2::ObjectIdentityIdentity, virtual Identity
{
    public:
        Dot5TestinsertfuncIdentity();
        ~Dot5TestinsertfuncIdentity();


}; // Dot5TestinsertfuncIdentity

class Dot5TestfullduplexloopbackIdentity : public ietf_yang_smiv2::ObjectIdentityIdentity, virtual Identity
{
    public:
        Dot5TestfullduplexloopbackIdentity();
        ~Dot5TestfullduplexloopbackIdentity();


}; // Dot5TestfullduplexloopbackIdentity

class TokenringMib : public Entity
{
    public:
        TokenringMib();
        ~TokenringMib();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Dot5Table; //type: TokenringMib::Dot5Table
        class Dot5Statstable; //type: TokenringMib::Dot5Statstable
        class Dot5Timertable; //type: TokenringMib::Dot5Timertable

        std::shared_ptr<TOKENRING_MIB::TokenringMib::Dot5Statstable> dot5statstable_;
        std::shared_ptr<TOKENRING_MIB::TokenringMib::Dot5Table> dot5table_;
        std::shared_ptr<TOKENRING_MIB::TokenringMib::Dot5Timertable> dot5timertable_;
        
}; // TokenringMib


class TokenringMib::Dot5Table : public Entity
{
    public:
        Dot5Table();
        ~Dot5Table();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Dot5Entry; //type: TokenringMib::Dot5Table::Dot5Entry

        std::vector<std::shared_ptr<TOKENRING_MIB::TokenringMib::Dot5Table::Dot5Entry> > dot5entry_;
        
}; // TokenringMib::Dot5Table


class TokenringMib::Dot5Table::Dot5Entry : public Entity
{
    public:
        Dot5Entry();
        ~Dot5Entry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dot5ifindex; //type: int32
        YLeaf dot5commands; //type: Dot5CommandsEnum
        YLeaf dot5ringstatus; //type: int32
        YLeaf dot5ringstate; //type: Dot5RingstateEnum
        YLeaf dot5ringopenstatus; //type: Dot5RingopenstatusEnum
        YLeaf dot5ringspeed; //type: Dot5RingspeedEnum
        YLeaf dot5upstream; //type: string
        YLeaf dot5actmonparticipate; //type: Dot5ActmonparticipateEnum
        YLeaf dot5functional; //type: string
        YLeaf dot5lastbeaconsent; //type: uint32
        class Dot5CommandsEnum;
        class Dot5RingstateEnum;
        class Dot5RingopenstatusEnum;
        class Dot5RingspeedEnum;
        class Dot5ActmonparticipateEnum;

}; // TokenringMib::Dot5Table::Dot5Entry


class TokenringMib::Dot5Statstable : public Entity
{
    public:
        Dot5Statstable();
        ~Dot5Statstable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Dot5Statsentry; //type: TokenringMib::Dot5Statstable::Dot5Statsentry

        std::vector<std::shared_ptr<TOKENRING_MIB::TokenringMib::Dot5Statstable::Dot5Statsentry> > dot5statsentry_;
        
}; // TokenringMib::Dot5Statstable


class TokenringMib::Dot5Statstable::Dot5Statsentry : public Entity
{
    public:
        Dot5Statsentry();
        ~Dot5Statsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dot5statsifindex; //type: int32
        YLeaf dot5statslineerrors; //type: uint32
        YLeaf dot5statsbursterrors; //type: uint32
        YLeaf dot5statsacerrors; //type: uint32
        YLeaf dot5statsaborttranserrors; //type: uint32
        YLeaf dot5statsinternalerrors; //type: uint32
        YLeaf dot5statslostframeerrors; //type: uint32
        YLeaf dot5statsreceivecongestions; //type: uint32
        YLeaf dot5statsframecopiederrors; //type: uint32
        YLeaf dot5statstokenerrors; //type: uint32
        YLeaf dot5statssofterrors; //type: uint32
        YLeaf dot5statsharderrors; //type: uint32
        YLeaf dot5statssignalloss; //type: uint32
        YLeaf dot5statstransmitbeacons; //type: uint32
        YLeaf dot5statsrecoverys; //type: uint32
        YLeaf dot5statslobewires; //type: uint32
        YLeaf dot5statsremoves; //type: uint32
        YLeaf dot5statssingles; //type: uint32
        YLeaf dot5statsfreqerrors; //type: uint32

}; // TokenringMib::Dot5Statstable::Dot5Statsentry


class TokenringMib::Dot5Timertable : public Entity
{
    public:
        Dot5Timertable();
        ~Dot5Timertable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Dot5Timerentry; //type: TokenringMib::Dot5Timertable::Dot5Timerentry

        std::vector<std::shared_ptr<TOKENRING_MIB::TokenringMib::Dot5Timertable::Dot5Timerentry> > dot5timerentry_;
        
}; // TokenringMib::Dot5Timertable


class TokenringMib::Dot5Timertable::Dot5Timerentry : public Entity
{
    public:
        Dot5Timerentry();
        ~Dot5Timerentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dot5timerifindex; //type: int32
        YLeaf dot5timerreturnrepeat; //type: int32
        YLeaf dot5timerholding; //type: int32
        YLeaf dot5timerqueuepdu; //type: int32
        YLeaf dot5timervalidtransmit; //type: int32
        YLeaf dot5timernotoken; //type: int32
        YLeaf dot5timeractivemon; //type: int32
        YLeaf dot5timerstandbymon; //type: int32
        YLeaf dot5timererrorreport; //type: int32
        YLeaf dot5timerbeacontransmit; //type: int32
        YLeaf dot5timerbeaconreceive; //type: int32

}; // TokenringMib::Dot5Timertable::Dot5Timerentry

class TokenringMib::Dot5Table::Dot5Entry::Dot5CommandsEnum : public Enum
{
    public:
        static const Enum::YLeaf noop;
        static const Enum::YLeaf open;
        static const Enum::YLeaf reset;
        static const Enum::YLeaf close;

};

class TokenringMib::Dot5Table::Dot5Entry::Dot5RingstateEnum : public Enum
{
    public:
        static const Enum::YLeaf opened;
        static const Enum::YLeaf closed;
        static const Enum::YLeaf opening;
        static const Enum::YLeaf closing;
        static const Enum::YLeaf openFailure;
        static const Enum::YLeaf ringFailure;

};

class TokenringMib::Dot5Table::Dot5Entry::Dot5RingopenstatusEnum : public Enum
{
    public:
        static const Enum::YLeaf noOpen;
        static const Enum::YLeaf badParam;
        static const Enum::YLeaf lobeFailed;
        static const Enum::YLeaf signalLoss;
        static const Enum::YLeaf insertionTimeout;
        static const Enum::YLeaf ringFailed;
        static const Enum::YLeaf beaconing;
        static const Enum::YLeaf duplicateMAC;
        static const Enum::YLeaf requestFailed;
        static const Enum::YLeaf removeReceived;
        static const Enum::YLeaf open;

};

class TokenringMib::Dot5Table::Dot5Entry::Dot5RingspeedEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf oneMegabit;
        static const Enum::YLeaf fourMegabit;
        static const Enum::YLeaf sixteenMegabit;

};

class TokenringMib::Dot5Table::Dot5Entry::Dot5ActmonparticipateEnum : public Enum
{
    public:
        static const Enum::YLeaf true_;
        static const Enum::YLeaf false_;

};


}
}

#endif /* _TOKENRING_MIB_ */

