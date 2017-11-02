#ifndef _DIAL_CONTROL_MIB_
#define _DIAL_CONTROL_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace DIAL_CONTROL_MIB {

class DIALCONTROLMIB : public ydk::Entity
{
    public:
        DIALCONTROLMIB();
        ~DIALCONTROLMIB();

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

        class Dialctlconfiguration; //type: DIALCONTROLMIB::Dialctlconfiguration
        class Callhistory; //type: DIALCONTROLMIB::Callhistory
        class Dialctlpeercfgtable; //type: DIALCONTROLMIB::Dialctlpeercfgtable
        class Callactivetable; //type: DIALCONTROLMIB::Callactivetable
        class Callhistorytable; //type: DIALCONTROLMIB::Callhistorytable

        std::shared_ptr<cisco_ios_xe::DIAL_CONTROL_MIB::DIALCONTROLMIB::Dialctlconfiguration> dialctlconfiguration;
        std::shared_ptr<cisco_ios_xe::DIAL_CONTROL_MIB::DIALCONTROLMIB::Callhistory> callhistory;
        std::shared_ptr<cisco_ios_xe::DIAL_CONTROL_MIB::DIALCONTROLMIB::Dialctlpeercfgtable> dialctlpeercfgtable;
        std::shared_ptr<cisco_ios_xe::DIAL_CONTROL_MIB::DIALCONTROLMIB::Callactivetable> callactivetable;
        std::shared_ptr<cisco_ios_xe::DIAL_CONTROL_MIB::DIALCONTROLMIB::Callhistorytable> callhistorytable;
        
}; // DIALCONTROLMIB


class DIALCONTROLMIB::Dialctlconfiguration : public ydk::Entity
{
    public:
        Dialctlconfiguration();
        ~Dialctlconfiguration();

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

        ydk::YLeaf dialctlacceptmode; //type: Dialctlacceptmode
        ydk::YLeaf dialctltrapenable; //type: Dialctltrapenable
        class Dialctlacceptmode;
        class Dialctltrapenable;

}; // DIALCONTROLMIB::Dialctlconfiguration


class DIALCONTROLMIB::Callhistory : public ydk::Entity
{
    public:
        Callhistory();
        ~Callhistory();

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

        ydk::YLeaf callhistorytablemaxlength; //type: int32
        ydk::YLeaf callhistoryretaintimer; //type: int32

}; // DIALCONTROLMIB::Callhistory


class DIALCONTROLMIB::Dialctlpeercfgtable : public ydk::Entity
{
    public:
        Dialctlpeercfgtable();
        ~Dialctlpeercfgtable();

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

        class Dialctlpeercfgentry; //type: DIALCONTROLMIB::Dialctlpeercfgtable::Dialctlpeercfgentry

        std::vector<std::shared_ptr<cisco_ios_xe::DIAL_CONTROL_MIB::DIALCONTROLMIB::Dialctlpeercfgtable::Dialctlpeercfgentry> > dialctlpeercfgentry;
        
}; // DIALCONTROLMIB::Dialctlpeercfgtable


class DIALCONTROLMIB::Dialctlpeercfgtable::Dialctlpeercfgentry : public ydk::Entity
{
    public:
        Dialctlpeercfgentry();
        ~Dialctlpeercfgentry();

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

        ydk::YLeaf dialctlpeercfgid; //type: int32
        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf dialctlpeercfgiftype; //type: IANAifType
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
        ydk::YLeaf dialctlpeercfgstatus; //type: RowStatus
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

}; // DIALCONTROLMIB::Dialctlpeercfgtable::Dialctlpeercfgentry


class DIALCONTROLMIB::Callactivetable : public ydk::Entity
{
    public:
        Callactivetable();
        ~Callactivetable();

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

        class Callactiveentry; //type: DIALCONTROLMIB::Callactivetable::Callactiveentry

        std::vector<std::shared_ptr<cisco_ios_xe::DIAL_CONTROL_MIB::DIALCONTROLMIB::Callactivetable::Callactiveentry> > callactiveentry;
        
}; // DIALCONTROLMIB::Callactivetable


class DIALCONTROLMIB::Callactivetable::Callactiveentry : public ydk::Entity
{
    public:
        Callactiveentry();
        ~Callactiveentry();

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

}; // DIALCONTROLMIB::Callactivetable::Callactiveentry


class DIALCONTROLMIB::Callhistorytable : public ydk::Entity
{
    public:
        Callhistorytable();
        ~Callhistorytable();

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

        class Callhistoryentry; //type: DIALCONTROLMIB::Callhistorytable::Callhistoryentry

        std::vector<std::shared_ptr<cisco_ios_xe::DIAL_CONTROL_MIB::DIALCONTROLMIB::Callhistorytable::Callhistoryentry> > callhistoryentry;
        
}; // DIALCONTROLMIB::Callhistorytable


class DIALCONTROLMIB::Callhistorytable::Callhistoryentry : public ydk::Entity
{
    public:
        Callhistoryentry();
        ~Callhistoryentry();

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

        //type: uint32 (refers to cisco_ios_xe::DIAL_CONTROL_MIB::DIALCONTROLMIB::Callactivetable::Callactiveentry::callactivesetuptime)
        ydk::YLeaf callactivesetuptime;
        //type: int32 (refers to cisco_ios_xe::DIAL_CONTROL_MIB::DIALCONTROLMIB::Callactivetable::Callactiveentry::callactiveindex)
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

}; // DIALCONTROLMIB::Callhistorytable::Callhistoryentry

class DIALCONTROLMIB::Dialctlconfiguration::Dialctlacceptmode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf acceptNone;
        static const ydk::Enum::YLeaf acceptAll;
        static const ydk::Enum::YLeaf acceptKnown;

};

class DIALCONTROLMIB::Dialctlconfiguration::Dialctltrapenable : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class DIALCONTROLMIB::Dialctlpeercfgtable::Dialctlpeercfgentry::Dialctlpeercfginfotype : public ydk::Enum
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

class DIALCONTROLMIB::Dialctlpeercfgtable::Dialctlpeercfgentry::Dialctlpeercfgpermission : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf originate;
        static const ydk::Enum::YLeaf answer;
        static const ydk::Enum::YLeaf both;
        static const ydk::Enum::YLeaf callback;
        static const ydk::Enum::YLeaf none;

};

class DIALCONTROLMIB::Dialctlpeercfgtable::Dialctlpeercfgentry::Dialctlpeercfgtrapenable : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class DIALCONTROLMIB::Callactivetable::Callactiveentry::Callactivecallstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf connecting;
        static const ydk::Enum::YLeaf connected;
        static const ydk::Enum::YLeaf active;

};

class DIALCONTROLMIB::Callactivetable::Callactiveentry::Callactivecallorigin : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf originate;
        static const ydk::Enum::YLeaf answer;
        static const ydk::Enum::YLeaf callback;

};

class DIALCONTROLMIB::Callactivetable::Callactiveentry::Callactiveinfotype : public ydk::Enum
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

class DIALCONTROLMIB::Callhistorytable::Callhistoryentry::Callhistorycallorigin : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf originate;
        static const ydk::Enum::YLeaf answer;
        static const ydk::Enum::YLeaf callback;

};

class DIALCONTROLMIB::Callhistorytable::Callhistoryentry::Callhistoryinfotype : public ydk::Enum
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

