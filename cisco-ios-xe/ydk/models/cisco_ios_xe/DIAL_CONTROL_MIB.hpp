#ifndef _DIAL_CONTROL_MIB_
#define _DIAL_CONTROL_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace DIAL_CONTROL_MIB {

class DialControlMib : public Entity
{
    public:
        DialControlMib();
        ~DialControlMib();

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

        class Dialctlconfiguration; //type: DialControlMib::Dialctlconfiguration
        class Callhistory; //type: DialControlMib::Callhistory
        class Dialctlpeercfgtable; //type: DialControlMib::Dialctlpeercfgtable
        class Callactivetable; //type: DialControlMib::Callactivetable
        class Callhistorytable; //type: DialControlMib::Callhistorytable

        std::shared_ptr<DIAL_CONTROL_MIB::DialControlMib::Callactivetable> callactivetable_;
        std::shared_ptr<DIAL_CONTROL_MIB::DialControlMib::Callhistory> callhistory_;
        std::shared_ptr<DIAL_CONTROL_MIB::DialControlMib::Callhistorytable> callhistorytable_;
        std::shared_ptr<DIAL_CONTROL_MIB::DialControlMib::Dialctlconfiguration> dialctlconfiguration_;
        std::shared_ptr<DIAL_CONTROL_MIB::DialControlMib::Dialctlpeercfgtable> dialctlpeercfgtable_;
        
}; // DialControlMib


class DialControlMib::Dialctlconfiguration : public Entity
{
    public:
        Dialctlconfiguration();
        ~Dialctlconfiguration();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dialctlacceptmode; //type: DialctlacceptmodeEnum
        YLeaf dialctltrapenable; //type: DialctltrapenableEnum
        class DialctlacceptmodeEnum;
        class DialctltrapenableEnum;

}; // DialControlMib::Dialctlconfiguration


class DialControlMib::Callhistory : public Entity
{
    public:
        Callhistory();
        ~Callhistory();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf callhistorytablemaxlength; //type: int32
        YLeaf callhistoryretaintimer; //type: int32

}; // DialControlMib::Callhistory


class DialControlMib::Dialctlpeercfgtable : public Entity
{
    public:
        Dialctlpeercfgtable();
        ~Dialctlpeercfgtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Dialctlpeercfgentry; //type: DialControlMib::Dialctlpeercfgtable::Dialctlpeercfgentry

        std::vector<std::shared_ptr<DIAL_CONTROL_MIB::DialControlMib::Dialctlpeercfgtable::Dialctlpeercfgentry> > dialctlpeercfgentry_;
        
}; // DialControlMib::Dialctlpeercfgtable


class DialControlMib::Dialctlpeercfgtable::Dialctlpeercfgentry : public Entity
{
    public:
        Dialctlpeercfgentry();
        ~Dialctlpeercfgentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dialctlpeercfgid; //type: int32
        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf dialctlpeercfgiftype; //type: IanaiftypeEnum
        YLeaf dialctlpeercfglowerif; //type: int32
        YLeaf dialctlpeercfgoriginateaddress; //type: string
        YLeaf dialctlpeercfgansweraddress; //type: string
        YLeaf dialctlpeercfgsubaddress; //type: string
        YLeaf dialctlpeercfgclosedusergroup; //type: string
        YLeaf dialctlpeercfgspeed; //type: int32
        YLeaf dialctlpeercfginfotype; //type: DialctlpeercfginfotypeEnum
        YLeaf dialctlpeercfgpermission; //type: DialctlpeercfgpermissionEnum
        YLeaf dialctlpeercfginactivitytimer; //type: int32
        YLeaf dialctlpeercfgminduration; //type: int32
        YLeaf dialctlpeercfgmaxduration; //type: int32
        YLeaf dialctlpeercfgcarrierdelay; //type: int32
        YLeaf dialctlpeercfgcallretries; //type: int32
        YLeaf dialctlpeercfgretrydelay; //type: int32
        YLeaf dialctlpeercfgfailuredelay; //type: int32
        YLeaf dialctlpeercfgtrapenable; //type: DialctlpeercfgtrapenableEnum
        YLeaf dialctlpeercfgstatus; //type: RowstatusEnum
        YLeaf dialctlpeerstatsconnecttime; //type: uint32
        YLeaf dialctlpeerstatschargedunits; //type: uint32
        YLeaf dialctlpeerstatssuccesscalls; //type: uint32
        YLeaf dialctlpeerstatsfailcalls; //type: uint32
        YLeaf dialctlpeerstatsacceptcalls; //type: uint32
        YLeaf dialctlpeerstatsrefusecalls; //type: uint32
        YLeaf dialctlpeerstatslastdisconnectcause; //type: binary
        YLeaf dialctlpeerstatslastdisconnecttext; //type: string
        YLeaf dialctlpeerstatslastsetuptime; //type: uint32
        class DialctlpeercfginfotypeEnum;
        class DialctlpeercfgpermissionEnum;
        class DialctlpeercfgtrapenableEnum;

}; // DialControlMib::Dialctlpeercfgtable::Dialctlpeercfgentry


class DialControlMib::Callactivetable : public Entity
{
    public:
        Callactivetable();
        ~Callactivetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Callactiveentry; //type: DialControlMib::Callactivetable::Callactiveentry

        std::vector<std::shared_ptr<DIAL_CONTROL_MIB::DialControlMib::Callactivetable::Callactiveentry> > callactiveentry_;
        
}; // DialControlMib::Callactivetable


class DialControlMib::Callactivetable::Callactiveentry : public Entity
{
    public:
        Callactiveentry();
        ~Callactiveentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf callactivesetuptime; //type: uint32
        YLeaf callactiveindex; //type: int32
        YLeaf callactivepeeraddress; //type: string
        YLeaf callactivepeersubaddress; //type: string
        YLeaf callactivepeerid; //type: int32
        YLeaf callactivepeerifindex; //type: int32
        YLeaf callactivelogicalifindex; //type: int32
        YLeaf callactiveconnecttime; //type: uint32
        YLeaf callactivecallstate; //type: CallactivecallstateEnum
        YLeaf callactivecallorigin; //type: CallactivecalloriginEnum
        YLeaf callactivechargedunits; //type: uint32
        YLeaf callactiveinfotype; //type: CallactiveinfotypeEnum
        YLeaf callactivetransmitpackets; //type: uint32
        YLeaf callactivetransmitbytes; //type: uint32
        YLeaf callactivereceivepackets; //type: uint32
        YLeaf callactivereceivebytes; //type: uint32
        class CallactivecallstateEnum;
        class CallactivecalloriginEnum;
        class CallactiveinfotypeEnum;

}; // DialControlMib::Callactivetable::Callactiveentry


class DialControlMib::Callhistorytable : public Entity
{
    public:
        Callhistorytable();
        ~Callhistorytable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Callhistoryentry; //type: DialControlMib::Callhistorytable::Callhistoryentry

        std::vector<std::shared_ptr<DIAL_CONTROL_MIB::DialControlMib::Callhistorytable::Callhistoryentry> > callhistoryentry_;
        
}; // DialControlMib::Callhistorytable


class DialControlMib::Callhistorytable::Callhistoryentry : public Entity
{
    public:
        Callhistoryentry();
        ~Callhistoryentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: uint32 (refers to DIAL_CONTROL_MIB::DialControlMib::Callactivetable::Callactiveentry::callactivesetuptime)
        YLeaf callactivesetuptime;
        //type: int32 (refers to DIAL_CONTROL_MIB::DialControlMib::Callactivetable::Callactiveentry::callactiveindex)
        YLeaf callactiveindex;
        YLeaf callhistorypeeraddress; //type: string
        YLeaf callhistorypeersubaddress; //type: string
        YLeaf callhistorypeerid; //type: int32
        YLeaf callhistorypeerifindex; //type: int32
        YLeaf callhistorylogicalifindex; //type: int32
        YLeaf callhistorydisconnectcause; //type: binary
        YLeaf callhistorydisconnecttext; //type: string
        YLeaf callhistoryconnecttime; //type: uint32
        YLeaf callhistorydisconnecttime; //type: uint32
        YLeaf callhistorycallorigin; //type: CallhistorycalloriginEnum
        YLeaf callhistorychargedunits; //type: uint32
        YLeaf callhistoryinfotype; //type: CallhistoryinfotypeEnum
        YLeaf callhistorytransmitpackets; //type: uint32
        YLeaf callhistorytransmitbytes; //type: uint32
        YLeaf callhistoryreceivepackets; //type: uint32
        YLeaf callhistoryreceivebytes; //type: uint32
        class CallhistorycalloriginEnum;
        class CallhistoryinfotypeEnum;

}; // DialControlMib::Callhistorytable::Callhistoryentry

class DialControlMib::Dialctlconfiguration::DialctlacceptmodeEnum : public Enum
{
    public:
        static const Enum::YLeaf acceptNone;
        static const Enum::YLeaf acceptAll;
        static const Enum::YLeaf acceptKnown;

};

class DialControlMib::Dialctlconfiguration::DialctltrapenableEnum : public Enum
{
    public:
        static const Enum::YLeaf enabled;
        static const Enum::YLeaf disabled;

};

class DialControlMib::Dialctlpeercfgtable::Dialctlpeercfgentry::DialctlpeercfginfotypeEnum : public Enum
{
    public:
        static const Enum::YLeaf other;
        static const Enum::YLeaf speech;
        static const Enum::YLeaf unrestrictedDigital;
        static const Enum::YLeaf unrestrictedDigital56;
        static const Enum::YLeaf restrictedDigital;
        static const Enum::YLeaf audio31;
        static const Enum::YLeaf audio7;
        static const Enum::YLeaf video;
        static const Enum::YLeaf packetSwitched;
        static const Enum::YLeaf fax;

};

class DialControlMib::Dialctlpeercfgtable::Dialctlpeercfgentry::DialctlpeercfgpermissionEnum : public Enum
{
    public:
        static const Enum::YLeaf originate;
        static const Enum::YLeaf answer;
        static const Enum::YLeaf both;
        static const Enum::YLeaf callback;
        static const Enum::YLeaf none;

};

class DialControlMib::Dialctlpeercfgtable::Dialctlpeercfgentry::DialctlpeercfgtrapenableEnum : public Enum
{
    public:
        static const Enum::YLeaf enabled;
        static const Enum::YLeaf disabled;

};

class DialControlMib::Callactivetable::Callactiveentry::CallactivecallstateEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf connecting;
        static const Enum::YLeaf connected;
        static const Enum::YLeaf active;

};

class DialControlMib::Callactivetable::Callactiveentry::CallactivecalloriginEnum : public Enum
{
    public:
        static const Enum::YLeaf originate;
        static const Enum::YLeaf answer;
        static const Enum::YLeaf callback;

};

class DialControlMib::Callactivetable::Callactiveentry::CallactiveinfotypeEnum : public Enum
{
    public:
        static const Enum::YLeaf other;
        static const Enum::YLeaf speech;
        static const Enum::YLeaf unrestrictedDigital;
        static const Enum::YLeaf unrestrictedDigital56;
        static const Enum::YLeaf restrictedDigital;
        static const Enum::YLeaf audio31;
        static const Enum::YLeaf audio7;
        static const Enum::YLeaf video;
        static const Enum::YLeaf packetSwitched;
        static const Enum::YLeaf fax;

};

class DialControlMib::Callhistorytable::Callhistoryentry::CallhistorycalloriginEnum : public Enum
{
    public:
        static const Enum::YLeaf originate;
        static const Enum::YLeaf answer;
        static const Enum::YLeaf callback;

};

class DialControlMib::Callhistorytable::Callhistoryentry::CallhistoryinfotypeEnum : public Enum
{
    public:
        static const Enum::YLeaf other;
        static const Enum::YLeaf speech;
        static const Enum::YLeaf unrestrictedDigital;
        static const Enum::YLeaf unrestrictedDigital56;
        static const Enum::YLeaf restrictedDigital;
        static const Enum::YLeaf audio31;
        static const Enum::YLeaf audio7;
        static const Enum::YLeaf video;
        static const Enum::YLeaf packetSwitched;
        static const Enum::YLeaf fax;

};


}
}

#endif /* _DIAL_CONTROL_MIB_ */

