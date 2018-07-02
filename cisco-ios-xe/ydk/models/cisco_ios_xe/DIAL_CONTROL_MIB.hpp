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

        class DialCtlConfiguration; //type: DIALCONTROLMIB::DialCtlConfiguration
        class CallHistory; //type: DIALCONTROLMIB::CallHistory
        class DialCtlPeerCfgTable; //type: DIALCONTROLMIB::DialCtlPeerCfgTable
        class CallActiveTable; //type: DIALCONTROLMIB::CallActiveTable
        class CallHistoryTable; //type: DIALCONTROLMIB::CallHistoryTable

        std::shared_ptr<cisco_ios_xe::DIAL_CONTROL_MIB::DIALCONTROLMIB::DialCtlConfiguration> dialctlconfiguration;
        std::shared_ptr<cisco_ios_xe::DIAL_CONTROL_MIB::DIALCONTROLMIB::CallHistory> callhistory;
        std::shared_ptr<cisco_ios_xe::DIAL_CONTROL_MIB::DIALCONTROLMIB::DialCtlPeerCfgTable> dialctlpeercfgtable;
        std::shared_ptr<cisco_ios_xe::DIAL_CONTROL_MIB::DIALCONTROLMIB::CallActiveTable> callactivetable;
        std::shared_ptr<cisco_ios_xe::DIAL_CONTROL_MIB::DIALCONTROLMIB::CallHistoryTable> callhistorytable;
        
}; // DIALCONTROLMIB


class DIALCONTROLMIB::DialCtlConfiguration : public ydk::Entity
{
    public:
        DialCtlConfiguration();
        ~DialCtlConfiguration();

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

        ydk::YLeaf dialctlacceptmode; //type: DialCtlAcceptMode
        ydk::YLeaf dialctltrapenable; //type: DialCtlTrapEnable
        class DialCtlAcceptMode;
        class DialCtlTrapEnable;

}; // DIALCONTROLMIB::DialCtlConfiguration


class DIALCONTROLMIB::CallHistory : public ydk::Entity
{
    public:
        CallHistory();
        ~CallHistory();

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

}; // DIALCONTROLMIB::CallHistory


class DIALCONTROLMIB::DialCtlPeerCfgTable : public ydk::Entity
{
    public:
        DialCtlPeerCfgTable();
        ~DialCtlPeerCfgTable();

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

        class DialCtlPeerCfgEntry; //type: DIALCONTROLMIB::DialCtlPeerCfgTable::DialCtlPeerCfgEntry

        ydk::YList dialctlpeercfgentry;
        
}; // DIALCONTROLMIB::DialCtlPeerCfgTable


class DIALCONTROLMIB::DialCtlPeerCfgTable::DialCtlPeerCfgEntry : public ydk::Entity
{
    public:
        DialCtlPeerCfgEntry();
        ~DialCtlPeerCfgEntry();

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
        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf dialctlpeercfgiftype; //type: IANAifType
        ydk::YLeaf dialctlpeercfglowerif; //type: int32
        ydk::YLeaf dialctlpeercfgoriginateaddress; //type: string
        ydk::YLeaf dialctlpeercfgansweraddress; //type: string
        ydk::YLeaf dialctlpeercfgsubaddress; //type: string
        ydk::YLeaf dialctlpeercfgclosedusergroup; //type: string
        ydk::YLeaf dialctlpeercfgspeed; //type: int32
        ydk::YLeaf dialctlpeercfginfotype; //type: DialCtlPeerCfgInfoType
        ydk::YLeaf dialctlpeercfgpermission; //type: DialCtlPeerCfgPermission
        ydk::YLeaf dialctlpeercfginactivitytimer; //type: int32
        ydk::YLeaf dialctlpeercfgminduration; //type: int32
        ydk::YLeaf dialctlpeercfgmaxduration; //type: int32
        ydk::YLeaf dialctlpeercfgcarrierdelay; //type: int32
        ydk::YLeaf dialctlpeercfgcallretries; //type: int32
        ydk::YLeaf dialctlpeercfgretrydelay; //type: int32
        ydk::YLeaf dialctlpeercfgfailuredelay; //type: int32
        ydk::YLeaf dialctlpeercfgtrapenable; //type: DialCtlPeerCfgTrapEnable
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
        class DialCtlPeerCfgInfoType;
        class DialCtlPeerCfgPermission;
        class DialCtlPeerCfgTrapEnable;

}; // DIALCONTROLMIB::DialCtlPeerCfgTable::DialCtlPeerCfgEntry


class DIALCONTROLMIB::CallActiveTable : public ydk::Entity
{
    public:
        CallActiveTable();
        ~CallActiveTable();

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

        class CallActiveEntry; //type: DIALCONTROLMIB::CallActiveTable::CallActiveEntry

        ydk::YList callactiveentry;
        
}; // DIALCONTROLMIB::CallActiveTable


class DIALCONTROLMIB::CallActiveTable::CallActiveEntry : public ydk::Entity
{
    public:
        CallActiveEntry();
        ~CallActiveEntry();

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
        ydk::YLeaf callactivecallstate; //type: CallActiveCallState
        ydk::YLeaf callactivecallorigin; //type: CallActiveCallOrigin
        ydk::YLeaf callactivechargedunits; //type: uint32
        ydk::YLeaf callactiveinfotype; //type: CallActiveInfoType
        ydk::YLeaf callactivetransmitpackets; //type: uint32
        ydk::YLeaf callactivetransmitbytes; //type: uint32
        ydk::YLeaf callactivereceivepackets; //type: uint32
        ydk::YLeaf callactivereceivebytes; //type: uint32
        class CallActiveCallState;
        class CallActiveCallOrigin;
        class CallActiveInfoType;

}; // DIALCONTROLMIB::CallActiveTable::CallActiveEntry


class DIALCONTROLMIB::CallHistoryTable : public ydk::Entity
{
    public:
        CallHistoryTable();
        ~CallHistoryTable();

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

        class CallHistoryEntry; //type: DIALCONTROLMIB::CallHistoryTable::CallHistoryEntry

        ydk::YList callhistoryentry;
        
}; // DIALCONTROLMIB::CallHistoryTable


class DIALCONTROLMIB::CallHistoryTable::CallHistoryEntry : public ydk::Entity
{
    public:
        CallHistoryEntry();
        ~CallHistoryEntry();

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

        //type: uint32 (refers to cisco_ios_xe::DIAL_CONTROL_MIB::DIALCONTROLMIB::CallActiveTable::CallActiveEntry::callactivesetuptime)
        ydk::YLeaf callactivesetuptime;
        //type: int32 (refers to cisco_ios_xe::DIAL_CONTROL_MIB::DIALCONTROLMIB::CallActiveTable::CallActiveEntry::callactiveindex)
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
        ydk::YLeaf callhistorycallorigin; //type: CallHistoryCallOrigin
        ydk::YLeaf callhistorychargedunits; //type: uint32
        ydk::YLeaf callhistoryinfotype; //type: CallHistoryInfoType
        ydk::YLeaf callhistorytransmitpackets; //type: uint32
        ydk::YLeaf callhistorytransmitbytes; //type: uint32
        ydk::YLeaf callhistoryreceivepackets; //type: uint32
        ydk::YLeaf callhistoryreceivebytes; //type: uint32
        class CallHistoryCallOrigin;
        class CallHistoryInfoType;

}; // DIALCONTROLMIB::CallHistoryTable::CallHistoryEntry

class DIALCONTROLMIB::DialCtlConfiguration::DialCtlAcceptMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf acceptNone;
        static const ydk::Enum::YLeaf acceptAll;
        static const ydk::Enum::YLeaf acceptKnown;

};

class DIALCONTROLMIB::DialCtlConfiguration::DialCtlTrapEnable : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class DIALCONTROLMIB::DialCtlPeerCfgTable::DialCtlPeerCfgEntry::DialCtlPeerCfgInfoType : public ydk::Enum
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

class DIALCONTROLMIB::DialCtlPeerCfgTable::DialCtlPeerCfgEntry::DialCtlPeerCfgPermission : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf originate;
        static const ydk::Enum::YLeaf answer;
        static const ydk::Enum::YLeaf both;
        static const ydk::Enum::YLeaf callback;
        static const ydk::Enum::YLeaf none;

};

class DIALCONTROLMIB::DialCtlPeerCfgTable::DialCtlPeerCfgEntry::DialCtlPeerCfgTrapEnable : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class DIALCONTROLMIB::CallActiveTable::CallActiveEntry::CallActiveCallState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf connecting;
        static const ydk::Enum::YLeaf connected;
        static const ydk::Enum::YLeaf active;

};

class DIALCONTROLMIB::CallActiveTable::CallActiveEntry::CallActiveCallOrigin : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf originate;
        static const ydk::Enum::YLeaf answer;
        static const ydk::Enum::YLeaf callback;

};

class DIALCONTROLMIB::CallActiveTable::CallActiveEntry::CallActiveInfoType : public ydk::Enum
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

class DIALCONTROLMIB::CallHistoryTable::CallHistoryEntry::CallHistoryCallOrigin : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf originate;
        static const ydk::Enum::YLeaf answer;
        static const ydk::Enum::YLeaf callback;

};

class DIALCONTROLMIB::CallHistoryTable::CallHistoryEntry::CallHistoryInfoType : public ydk::Enum
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

