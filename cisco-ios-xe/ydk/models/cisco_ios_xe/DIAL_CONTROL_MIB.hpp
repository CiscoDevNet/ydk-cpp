#ifndef _DIAL_CONTROL_MIB_
#define _DIAL_CONTROL_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace DIAL_CONTROL_MIB {

class DialControlMib : public ydk::Entity
{
    public:
        DialControlMib();
        ~DialControlMib();

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

        class Dialctlconfiguration; //type: DialControlMib::Dialctlconfiguration
        class Callhistory; //type: DialControlMib::Callhistory
        class Dialctlpeercfgtable; //type: DialControlMib::Dialctlpeercfgtable
        class Callactivetable; //type: DialControlMib::Callactivetable
        class Callhistorytable; //type: DialControlMib::Callhistorytable

        std::shared_ptr<DIAL_CONTROL_MIB::DialControlMib::Callactivetable> callactivetable;
        std::shared_ptr<DIAL_CONTROL_MIB::DialControlMib::Callhistory> callhistory;
        std::shared_ptr<DIAL_CONTROL_MIB::DialControlMib::Callhistorytable> callhistorytable;
        std::shared_ptr<DIAL_CONTROL_MIB::DialControlMib::Dialctlconfiguration> dialctlconfiguration;
        std::shared_ptr<DIAL_CONTROL_MIB::DialControlMib::Dialctlpeercfgtable> dialctlpeercfgtable;
        
}; // DialControlMib


class DialControlMib::Dialctlconfiguration : public ydk::Entity
{
    public:
        Dialctlconfiguration();
        ~Dialctlconfiguration();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dialctlacceptmode; //type: Dialctlacceptmode
        ydk::YLeaf dialctltrapenable; //type: Dialctltrapenable
        class Dialctlacceptmode;
        class Dialctltrapenable;

}; // DialControlMib::Dialctlconfiguration


class DialControlMib::Callhistory : public ydk::Entity
{
    public:
        Callhistory();
        ~Callhistory();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf callhistorytablemaxlength; //type: int32
        ydk::YLeaf callhistoryretaintimer; //type: int32

}; // DialControlMib::Callhistory


class DialControlMib::Dialctlpeercfgtable : public ydk::Entity
{
    public:
        Dialctlpeercfgtable();
        ~Dialctlpeercfgtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dialctlpeercfgentry; //type: DialControlMib::Dialctlpeercfgtable::Dialctlpeercfgentry

        std::vector<std::shared_ptr<DIAL_CONTROL_MIB::DialControlMib::Dialctlpeercfgtable::Dialctlpeercfgentry> > dialctlpeercfgentry;
        
}; // DialControlMib::Dialctlpeercfgtable


class DialControlMib::Dialctlpeercfgtable::Dialctlpeercfgentry : public ydk::Entity
{
    public:
        Dialctlpeercfgentry();
        ~Dialctlpeercfgentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dialctlpeercfgid; //type: int32
        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf dialctlpeercfgiftype; //type: Ianaiftype
        ydk::YLeaf dialctlpeercfglowerif; //type: int32
        ydk::YLeaf dialctlpeercfgoriginateaddress; //type: string
        ydk::YLeaf dialctlpeercfgansweraddress; //type: string
        ydk::YLeaf dialctlpeercfgsubaddress; //type: string
        ydk::YLeaf dialctlpeercfgclosedusergroup; //type: string
        ydk::YLeaf dialctlpeercfgspeed; //type: int32
        ydk::YLeaf dialctlpeercfginfotype; //type: Dialctlpeercfginfotype
        ydk::YLeaf dialctlpeercfgpermission; //type: Dialctlpeercfgpermission
        ydk::YLeaf dialctlpeercfginactivitytimer; //type: int32
        ydk::YLeaf dialctlpeercfgminduration; //type: int32
        ydk::YLeaf dialctlpeercfgmaxduration; //type: int32
        ydk::YLeaf dialctlpeercfgcarrierdelay; //type: int32
        ydk::YLeaf dialctlpeercfgcallretries; //type: int32
        ydk::YLeaf dialctlpeercfgretrydelay; //type: int32
        ydk::YLeaf dialctlpeercfgfailuredelay; //type: int32
        ydk::YLeaf dialctlpeercfgtrapenable; //type: Dialctlpeercfgtrapenable
        ydk::YLeaf dialctlpeercfgstatus; //type: Rowstatus
        ydk::YLeaf dialctlpeerstatsconnecttime; //type: uint32
        ydk::YLeaf dialctlpeerstatschargedunits; //type: uint32
        ydk::YLeaf dialctlpeerstatssuccesscalls; //type: uint32
        ydk::YLeaf dialctlpeerstatsfailcalls; //type: uint32
        ydk::YLeaf dialctlpeerstatsacceptcalls; //type: uint32
        ydk::YLeaf dialctlpeerstatsrefusecalls; //type: uint32
        ydk::YLeaf dialctlpeerstatslastdisconnectcause; //type: binary
        ydk::YLeaf dialctlpeerstatslastdisconnecttext; //type: string
        ydk::YLeaf dialctlpeerstatslastsetuptime; //type: uint32
        class Dialctlpeercfginfotype;
        class Dialctlpeercfgpermission;
        class Dialctlpeercfgtrapenable;

}; // DialControlMib::Dialctlpeercfgtable::Dialctlpeercfgentry


class DialControlMib::Callactivetable : public ydk::Entity
{
    public:
        Callactivetable();
        ~Callactivetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Callactiveentry; //type: DialControlMib::Callactivetable::Callactiveentry

        std::vector<std::shared_ptr<DIAL_CONTROL_MIB::DialControlMib::Callactivetable::Callactiveentry> > callactiveentry;
        
}; // DialControlMib::Callactivetable


class DialControlMib::Callactivetable::Callactiveentry : public ydk::Entity
{
    public:
        Callactiveentry();
        ~Callactiveentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf callactivesetuptime; //type: uint32
        ydk::YLeaf callactiveindex; //type: int32
        ydk::YLeaf callactivepeeraddress; //type: string
        ydk::YLeaf callactivepeersubaddress; //type: string
        ydk::YLeaf callactivepeerid; //type: int32
        ydk::YLeaf callactivepeerifindex; //type: int32
        ydk::YLeaf callactivelogicalifindex; //type: int32
        ydk::YLeaf callactiveconnecttime; //type: uint32
        ydk::YLeaf callactivecallstate; //type: Callactivecallstate
        ydk::YLeaf callactivecallorigin; //type: Callactivecallorigin
        ydk::YLeaf callactivechargedunits; //type: uint32
        ydk::YLeaf callactiveinfotype; //type: Callactiveinfotype
        ydk::YLeaf callactivetransmitpackets; //type: uint32
        ydk::YLeaf callactivetransmitbytes; //type: uint32
        ydk::YLeaf callactivereceivepackets; //type: uint32
        ydk::YLeaf callactivereceivebytes; //type: uint32
        class Callactivecallstate;
        class Callactivecallorigin;
        class Callactiveinfotype;

}; // DialControlMib::Callactivetable::Callactiveentry


class DialControlMib::Callhistorytable : public ydk::Entity
{
    public:
        Callhistorytable();
        ~Callhistorytable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Callhistoryentry; //type: DialControlMib::Callhistorytable::Callhistoryentry

        std::vector<std::shared_ptr<DIAL_CONTROL_MIB::DialControlMib::Callhistorytable::Callhistoryentry> > callhistoryentry;
        
}; // DialControlMib::Callhistorytable


class DialControlMib::Callhistorytable::Callhistoryentry : public ydk::Entity
{
    public:
        Callhistoryentry();
        ~Callhistoryentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint32 (refers to DIAL_CONTROL_MIB::DialControlMib::Callactivetable::Callactiveentry::callactivesetuptime)
        ydk::YLeaf callactivesetuptime;
        //type: int32 (refers to DIAL_CONTROL_MIB::DialControlMib::Callactivetable::Callactiveentry::callactiveindex)
        ydk::YLeaf callactiveindex;
        ydk::YLeaf callhistorypeeraddress; //type: string
        ydk::YLeaf callhistorypeersubaddress; //type: string
        ydk::YLeaf callhistorypeerid; //type: int32
        ydk::YLeaf callhistorypeerifindex; //type: int32
        ydk::YLeaf callhistorylogicalifindex; //type: int32
        ydk::YLeaf callhistorydisconnectcause; //type: binary
        ydk::YLeaf callhistorydisconnecttext; //type: string
        ydk::YLeaf callhistoryconnecttime; //type: uint32
        ydk::YLeaf callhistorydisconnecttime; //type: uint32
        ydk::YLeaf callhistorycallorigin; //type: Callhistorycallorigin
        ydk::YLeaf callhistorychargedunits; //type: uint32
        ydk::YLeaf callhistoryinfotype; //type: Callhistoryinfotype
        ydk::YLeaf callhistorytransmitpackets; //type: uint32
        ydk::YLeaf callhistorytransmitbytes; //type: uint32
        ydk::YLeaf callhistoryreceivepackets; //type: uint32
        ydk::YLeaf callhistoryreceivebytes; //type: uint32
        class Callhistorycallorigin;
        class Callhistoryinfotype;

}; // DialControlMib::Callhistorytable::Callhistoryentry

class DialControlMib::Dialctlconfiguration::Dialctlacceptmode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf acceptNone;
        static const ydk::Enum::YLeaf acceptAll;
        static const ydk::Enum::YLeaf acceptKnown;

};

class DialControlMib::Dialctlconfiguration::Dialctltrapenable : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class DialControlMib::Dialctlpeercfgtable::Dialctlpeercfgentry::Dialctlpeercfginfotype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf speech;
        static const ydk::Enum::YLeaf unrestrictedDigital;
        static const ydk::Enum::YLeaf unrestrictedDigital56;
        static const ydk::Enum::YLeaf restrictedDigital;
        static const ydk::Enum::YLeaf audio31;
        static const ydk::Enum::YLeaf audio7;
        static const ydk::Enum::YLeaf video;
        static const ydk::Enum::YLeaf packetSwitched;
        static const ydk::Enum::YLeaf fax;

};

class DialControlMib::Dialctlpeercfgtable::Dialctlpeercfgentry::Dialctlpeercfgpermission : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf originate;
        static const ydk::Enum::YLeaf answer;
        static const ydk::Enum::YLeaf both;
        static const ydk::Enum::YLeaf callback;
        static const ydk::Enum::YLeaf none;

};

class DialControlMib::Dialctlpeercfgtable::Dialctlpeercfgentry::Dialctlpeercfgtrapenable : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class DialControlMib::Callactivetable::Callactiveentry::Callactivecallstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf connecting;
        static const ydk::Enum::YLeaf connected;
        static const ydk::Enum::YLeaf active;

};

class DialControlMib::Callactivetable::Callactiveentry::Callactivecallorigin : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf originate;
        static const ydk::Enum::YLeaf answer;
        static const ydk::Enum::YLeaf callback;

};

class DialControlMib::Callactivetable::Callactiveentry::Callactiveinfotype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf speech;
        static const ydk::Enum::YLeaf unrestrictedDigital;
        static const ydk::Enum::YLeaf unrestrictedDigital56;
        static const ydk::Enum::YLeaf restrictedDigital;
        static const ydk::Enum::YLeaf audio31;
        static const ydk::Enum::YLeaf audio7;
        static const ydk::Enum::YLeaf video;
        static const ydk::Enum::YLeaf packetSwitched;
        static const ydk::Enum::YLeaf fax;

};

class DialControlMib::Callhistorytable::Callhistoryentry::Callhistorycallorigin : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf originate;
        static const ydk::Enum::YLeaf answer;
        static const ydk::Enum::YLeaf callback;

};

class DialControlMib::Callhistorytable::Callhistoryentry::Callhistoryinfotype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf speech;
        static const ydk::Enum::YLeaf unrestrictedDigital;
        static const ydk::Enum::YLeaf unrestrictedDigital56;
        static const ydk::Enum::YLeaf restrictedDigital;
        static const ydk::Enum::YLeaf audio31;
        static const ydk::Enum::YLeaf audio7;
        static const ydk::Enum::YLeaf video;
        static const ydk::Enum::YLeaf packetSwitched;
        static const ydk::Enum::YLeaf fax;

};


}
}

#endif /* _DIAL_CONTROL_MIB_ */

