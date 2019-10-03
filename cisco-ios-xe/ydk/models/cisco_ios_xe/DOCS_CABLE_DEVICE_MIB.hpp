#ifndef _DOCS_CABLE_DEVICE_MIB_
#define _DOCS_CABLE_DEVICE_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace DOCS_CABLE_DEVICE_MIB {

class DOCSCABLEDEVICEMIB : public ydk::Entity
{
    public:
        DOCSCABLEDEVICEMIB();
        ~DOCSCABLEDEVICEMIB();

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

        class DocsDevBase; //type: DOCSCABLEDEVICEMIB::DocsDevBase
        class DocsDevSoftware; //type: DOCSCABLEDEVICEMIB::DocsDevSoftware
        class DocsDevServer; //type: DOCSCABLEDEVICEMIB::DocsDevServer
        class DocsDevEvent; //type: DOCSCABLEDEVICEMIB::DocsDevEvent
        class DocsDevFilter; //type: DOCSCABLEDEVICEMIB::DocsDevFilter
        class DocsDevCpe; //type: DOCSCABLEDEVICEMIB::DocsDevCpe
        class DocsDevNmAccessTable; //type: DOCSCABLEDEVICEMIB::DocsDevNmAccessTable
        class DocsDevEvControlTable; //type: DOCSCABLEDEVICEMIB::DocsDevEvControlTable
        class DocsDevEventTable; //type: DOCSCABLEDEVICEMIB::DocsDevEventTable
        class DocsDevFilterLLCTable; //type: DOCSCABLEDEVICEMIB::DocsDevFilterLLCTable
        class DocsDevFilterIpTable; //type: DOCSCABLEDEVICEMIB::DocsDevFilterIpTable
        class DocsDevFilterPolicyTable; //type: DOCSCABLEDEVICEMIB::DocsDevFilterPolicyTable
        class DocsDevFilterTosTable; //type: DOCSCABLEDEVICEMIB::DocsDevFilterTosTable
        class DocsDevCpeTable; //type: DOCSCABLEDEVICEMIB::DocsDevCpeTable
        class DocsDevCpeInetTable; //type: DOCSCABLEDEVICEMIB::DocsDevCpeInetTable

        std::shared_ptr<cisco_ios_xe::DOCS_CABLE_DEVICE_MIB::DOCSCABLEDEVICEMIB::DocsDevBase> docsdevbase;
        std::shared_ptr<cisco_ios_xe::DOCS_CABLE_DEVICE_MIB::DOCSCABLEDEVICEMIB::DocsDevSoftware> docsdevsoftware;
        std::shared_ptr<cisco_ios_xe::DOCS_CABLE_DEVICE_MIB::DOCSCABLEDEVICEMIB::DocsDevServer> docsdevserver;
        std::shared_ptr<cisco_ios_xe::DOCS_CABLE_DEVICE_MIB::DOCSCABLEDEVICEMIB::DocsDevEvent> docsdevevent;
        std::shared_ptr<cisco_ios_xe::DOCS_CABLE_DEVICE_MIB::DOCSCABLEDEVICEMIB::DocsDevFilter> docsdevfilter;
        std::shared_ptr<cisco_ios_xe::DOCS_CABLE_DEVICE_MIB::DOCSCABLEDEVICEMIB::DocsDevCpe> docsdevcpe;
        std::shared_ptr<cisco_ios_xe::DOCS_CABLE_DEVICE_MIB::DOCSCABLEDEVICEMIB::DocsDevNmAccessTable> docsdevnmaccesstable;
        std::shared_ptr<cisco_ios_xe::DOCS_CABLE_DEVICE_MIB::DOCSCABLEDEVICEMIB::DocsDevEvControlTable> docsdevevcontroltable;
        std::shared_ptr<cisco_ios_xe::DOCS_CABLE_DEVICE_MIB::DOCSCABLEDEVICEMIB::DocsDevEventTable> docsdeveventtable;
        std::shared_ptr<cisco_ios_xe::DOCS_CABLE_DEVICE_MIB::DOCSCABLEDEVICEMIB::DocsDevFilterLLCTable> docsdevfilterllctable;
        std::shared_ptr<cisco_ios_xe::DOCS_CABLE_DEVICE_MIB::DOCSCABLEDEVICEMIB::DocsDevFilterIpTable> docsdevfilteriptable;
        std::shared_ptr<cisco_ios_xe::DOCS_CABLE_DEVICE_MIB::DOCSCABLEDEVICEMIB::DocsDevFilterPolicyTable> docsdevfilterpolicytable;
        std::shared_ptr<cisco_ios_xe::DOCS_CABLE_DEVICE_MIB::DOCSCABLEDEVICEMIB::DocsDevFilterTosTable> docsdevfiltertostable;
        std::shared_ptr<cisco_ios_xe::DOCS_CABLE_DEVICE_MIB::DOCSCABLEDEVICEMIB::DocsDevCpeTable> docsdevcpetable;
        std::shared_ptr<cisco_ios_xe::DOCS_CABLE_DEVICE_MIB::DOCSCABLEDEVICEMIB::DocsDevCpeInetTable> docsdevcpeinettable;
        
}; // DOCSCABLEDEVICEMIB


class DOCSCABLEDEVICEMIB::DocsDevBase : public ydk::Entity
{
    public:
        DocsDevBase();
        ~DocsDevBase();

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

        ydk::YLeaf docsdevrole; //type: DocsDevRole
        ydk::YLeaf docsdevdatetime; //type: string
        ydk::YLeaf docsdevresetnow; //type: boolean
        ydk::YLeaf docsdevserialnumber; //type: string
        ydk::YLeaf docsdevstpcontrol; //type: DocsDevSTPControl
        ydk::YLeaf docsdevigmpmodecontrol; //type: DocsDevIgmpModeControl
        ydk::YLeaf docsdevmaxcpe; //type: uint32
        class DocsDevRole;
        class DocsDevSTPControl;
        class DocsDevIgmpModeControl;

}; // DOCSCABLEDEVICEMIB::DocsDevBase


class DOCSCABLEDEVICEMIB::DocsDevSoftware : public ydk::Entity
{
    public:
        DocsDevSoftware();
        ~DocsDevSoftware();

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

        ydk::YLeaf docsdevswserver; //type: string
        ydk::YLeaf docsdevswfilename; //type: string
        ydk::YLeaf docsdevswadminstatus; //type: DocsDevSwAdminStatus
        ydk::YLeaf docsdevswoperstatus; //type: DocsDevSwOperStatus
        ydk::YLeaf docsdevswcurrentvers; //type: string
        ydk::YLeaf docsdevswserveraddresstype; //type: InetAddressType
        ydk::YLeaf docsdevswserveraddress; //type: binary
        ydk::YLeaf docsdevswservertransportprotocol; //type: DocsDevSwServerTransportProtocol
        class DocsDevSwAdminStatus;
        class DocsDevSwOperStatus;
        class DocsDevSwServerTransportProtocol;

}; // DOCSCABLEDEVICEMIB::DocsDevSoftware


class DOCSCABLEDEVICEMIB::DocsDevServer : public ydk::Entity
{
    public:
        DocsDevServer();
        ~DocsDevServer();

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

        ydk::YLeaf docsdevserverbootstate; //type: DocsDevServerBootState
        ydk::YLeaf docsdevserverdhcp; //type: string
        ydk::YLeaf docsdevservertime; //type: string
        ydk::YLeaf docsdevservertftp; //type: string
        ydk::YLeaf docsdevserverconfigfile; //type: string
        ydk::YLeaf docsdevserverdhcpaddresstype; //type: InetAddressType
        ydk::YLeaf docsdevserverdhcpaddress; //type: binary
        ydk::YLeaf docsdevservertimeaddresstype; //type: InetAddressType
        ydk::YLeaf docsdevservertimeaddress; //type: binary
        ydk::YLeaf docsdevserverconfigtftpaddresstype; //type: InetAddressType
        ydk::YLeaf docsdevserverconfigtftpaddress; //type: binary
        class DocsDevServerBootState;

}; // DOCSCABLEDEVICEMIB::DocsDevServer


class DOCSCABLEDEVICEMIB::DocsDevEvent : public ydk::Entity
{
    public:
        DocsDevEvent();
        ~DocsDevEvent();

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

        ydk::YLeaf docsdevevcontrol; //type: DocsDevEvControl
        ydk::YLeaf docsdevevsyslog; //type: string
        ydk::YLeaf docsdevevthrottleadminstatus; //type: DocsDevEvThrottleAdminStatus
        ydk::YLeaf docsdevevthrottleinhibited; //type: boolean
        ydk::YLeaf docsdevevthrottlethreshold; //type: uint32
        ydk::YLeaf docsdevevthrottleinterval; //type: int32
        ydk::YLeaf docsdevevsyslogaddresstype; //type: InetAddressType
        ydk::YLeaf docsdevevsyslogaddress; //type: binary
        ydk::YLeaf docsdevevthrottlethresholdexceeded; //type: boolean
        class DocsDevEvControl;
        class DocsDevEvThrottleAdminStatus;

}; // DOCSCABLEDEVICEMIB::DocsDevEvent


class DOCSCABLEDEVICEMIB::DocsDevFilter : public ydk::Entity
{
    public:
        DocsDevFilter();
        ~DocsDevFilter();

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

        ydk::YLeaf docsdevfilterllcunmatchedaction; //type: DocsDevFilterLLCUnmatchedAction
        ydk::YLeaf docsdevfilteripdefault; //type: DocsDevFilterIpDefault
        class DocsDevFilterLLCUnmatchedAction;
        class DocsDevFilterIpDefault;

}; // DOCSCABLEDEVICEMIB::DocsDevFilter


class DOCSCABLEDEVICEMIB::DocsDevCpe : public ydk::Entity
{
    public:
        DocsDevCpe();
        ~DocsDevCpe();

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

        ydk::YLeaf docsdevcpeenroll; //type: DocsDevCpeEnroll
        ydk::YLeaf docsdevcpeipmax; //type: int32
        class DocsDevCpeEnroll;

}; // DOCSCABLEDEVICEMIB::DocsDevCpe


class DOCSCABLEDEVICEMIB::DocsDevNmAccessTable : public ydk::Entity
{
    public:
        DocsDevNmAccessTable();
        ~DocsDevNmAccessTable();

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

        class DocsDevNmAccessEntry; //type: DOCSCABLEDEVICEMIB::DocsDevNmAccessTable::DocsDevNmAccessEntry

        ydk::YList docsdevnmaccessentry;
        
}; // DOCSCABLEDEVICEMIB::DocsDevNmAccessTable


class DOCSCABLEDEVICEMIB::DocsDevNmAccessTable::DocsDevNmAccessEntry : public ydk::Entity
{
    public:
        DocsDevNmAccessEntry();
        ~DocsDevNmAccessEntry();

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

        ydk::YLeaf docsdevnmaccessindex; //type: int32
        ydk::YLeaf docsdevnmaccessip; //type: string
        ydk::YLeaf docsdevnmaccessipmask; //type: string
        ydk::YLeaf docsdevnmaccesscommunity; //type: binary
        ydk::YLeaf docsdevnmaccesscontrol; //type: DocsDevNmAccessControl
        ydk::YLeaf docsdevnmaccessinterfaces; //type: binary
        ydk::YLeaf docsdevnmaccessstatus; //type: RowStatus
        ydk::YLeaf docsdevnmaccesstrapversion; //type: DocsDevNmAccessTrapVersion
        class DocsDevNmAccessControl;
        class DocsDevNmAccessTrapVersion;

}; // DOCSCABLEDEVICEMIB::DocsDevNmAccessTable::DocsDevNmAccessEntry


class DOCSCABLEDEVICEMIB::DocsDevEvControlTable : public ydk::Entity
{
    public:
        DocsDevEvControlTable();
        ~DocsDevEvControlTable();

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

        class DocsDevEvControlEntry; //type: DOCSCABLEDEVICEMIB::DocsDevEvControlTable::DocsDevEvControlEntry

        ydk::YList docsdevevcontrolentry;
        
}; // DOCSCABLEDEVICEMIB::DocsDevEvControlTable


class DOCSCABLEDEVICEMIB::DocsDevEvControlTable::DocsDevEvControlEntry : public ydk::Entity
{
    public:
        DocsDevEvControlEntry();
        ~DocsDevEvControlEntry();

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

        ydk::YLeaf docsdevevpriority; //type: DocsDevEvPriority
        ydk::YLeaf docsdevevreporting; //type: binary
        class DocsDevEvPriority;

}; // DOCSCABLEDEVICEMIB::DocsDevEvControlTable::DocsDevEvControlEntry


class DOCSCABLEDEVICEMIB::DocsDevEventTable : public ydk::Entity
{
    public:
        DocsDevEventTable();
        ~DocsDevEventTable();

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

        class DocsDevEventEntry; //type: DOCSCABLEDEVICEMIB::DocsDevEventTable::DocsDevEventEntry

        ydk::YList docsdevevententry;
        
}; // DOCSCABLEDEVICEMIB::DocsDevEventTable


class DOCSCABLEDEVICEMIB::DocsDevEventTable::DocsDevEventEntry : public ydk::Entity
{
    public:
        DocsDevEventEntry();
        ~DocsDevEventEntry();

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

        ydk::YLeaf docsdevevindex; //type: int32
        ydk::YLeaf docsdevevfirsttime; //type: string
        ydk::YLeaf docsdevevlasttime; //type: string
        ydk::YLeaf docsdevevcounts; //type: uint32
        ydk::YLeaf docsdevevlevel; //type: DocsDevEvLevel
        ydk::YLeaf docsdevevid; //type: uint32
        ydk::YLeaf docsdevevtext; //type: string
        class DocsDevEvLevel;

}; // DOCSCABLEDEVICEMIB::DocsDevEventTable::DocsDevEventEntry


class DOCSCABLEDEVICEMIB::DocsDevFilterLLCTable : public ydk::Entity
{
    public:
        DocsDevFilterLLCTable();
        ~DocsDevFilterLLCTable();

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

        class DocsDevFilterLLCEntry; //type: DOCSCABLEDEVICEMIB::DocsDevFilterLLCTable::DocsDevFilterLLCEntry

        ydk::YList docsdevfilterllcentry;
        
}; // DOCSCABLEDEVICEMIB::DocsDevFilterLLCTable


class DOCSCABLEDEVICEMIB::DocsDevFilterLLCTable::DocsDevFilterLLCEntry : public ydk::Entity
{
    public:
        DocsDevFilterLLCEntry();
        ~DocsDevFilterLLCEntry();

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

        ydk::YLeaf docsdevfilterllcindex; //type: int32
        ydk::YLeaf docsdevfilterllcstatus; //type: RowStatus
        ydk::YLeaf docsdevfilterllcifindex; //type: int32
        ydk::YLeaf docsdevfilterllcprotocoltype; //type: DocsDevFilterLLCProtocolType
        ydk::YLeaf docsdevfilterllcprotocol; //type: int32
        ydk::YLeaf docsdevfilterllcmatches; //type: uint32
        class DocsDevFilterLLCProtocolType;

}; // DOCSCABLEDEVICEMIB::DocsDevFilterLLCTable::DocsDevFilterLLCEntry


class DOCSCABLEDEVICEMIB::DocsDevFilterIpTable : public ydk::Entity
{
    public:
        DocsDevFilterIpTable();
        ~DocsDevFilterIpTable();

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

        class DocsDevFilterIpEntry; //type: DOCSCABLEDEVICEMIB::DocsDevFilterIpTable::DocsDevFilterIpEntry

        ydk::YList docsdevfilteripentry;
        
}; // DOCSCABLEDEVICEMIB::DocsDevFilterIpTable


class DOCSCABLEDEVICEMIB::DocsDevFilterIpTable::DocsDevFilterIpEntry : public ydk::Entity
{
    public:
        DocsDevFilterIpEntry();
        ~DocsDevFilterIpEntry();

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

        ydk::YLeaf docsdevfilteripindex; //type: int32
        ydk::YLeaf docsdevfilteripstatus; //type: RowStatus
        ydk::YLeaf docsdevfilteripcontrol; //type: DocsDevFilterIpControl
        ydk::YLeaf docsdevfilteripifindex; //type: int32
        ydk::YLeaf docsdevfilteripdirection; //type: DocsDevFilterIpDirection
        ydk::YLeaf docsdevfilteripbroadcast; //type: boolean
        ydk::YLeaf docsdevfilteripsaddr; //type: string
        ydk::YLeaf docsdevfilteripsmask; //type: string
        ydk::YLeaf docsdevfilteripdaddr; //type: string
        ydk::YLeaf docsdevfilteripdmask; //type: string
        ydk::YLeaf docsdevfilteripprotocol; //type: int32
        ydk::YLeaf docsdevfilteripsourceportlow; //type: int32
        ydk::YLeaf docsdevfilteripsourceporthigh; //type: int32
        ydk::YLeaf docsdevfilteripdestportlow; //type: int32
        ydk::YLeaf docsdevfilteripdestporthigh; //type: int32
        ydk::YLeaf docsdevfilteripmatches; //type: uint32
        ydk::YLeaf docsdevfilteriptos; //type: binary
        ydk::YLeaf docsdevfilteriptosmask; //type: binary
        ydk::YLeaf docsdevfilteripcontinue; //type: boolean
        ydk::YLeaf docsdevfilterippolicyid; //type: int32
        class DocsDevFilterIpControl;
        class DocsDevFilterIpDirection;

}; // DOCSCABLEDEVICEMIB::DocsDevFilterIpTable::DocsDevFilterIpEntry


class DOCSCABLEDEVICEMIB::DocsDevFilterPolicyTable : public ydk::Entity
{
    public:
        DocsDevFilterPolicyTable();
        ~DocsDevFilterPolicyTable();

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

        class DocsDevFilterPolicyEntry; //type: DOCSCABLEDEVICEMIB::DocsDevFilterPolicyTable::DocsDevFilterPolicyEntry

        ydk::YList docsdevfilterpolicyentry;
        
}; // DOCSCABLEDEVICEMIB::DocsDevFilterPolicyTable


class DOCSCABLEDEVICEMIB::DocsDevFilterPolicyTable::DocsDevFilterPolicyEntry : public ydk::Entity
{
    public:
        DocsDevFilterPolicyEntry();
        ~DocsDevFilterPolicyEntry();

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

        ydk::YLeaf docsdevfilterpolicyindex; //type: int32
        ydk::YLeaf docsdevfilterpolicyid; //type: int32
        ydk::YLeaf docsdevfilterpolicystatus; //type: RowStatus
        ydk::YLeaf docsdevfilterpolicyptr; //type: string

}; // DOCSCABLEDEVICEMIB::DocsDevFilterPolicyTable::DocsDevFilterPolicyEntry


class DOCSCABLEDEVICEMIB::DocsDevFilterTosTable : public ydk::Entity
{
    public:
        DocsDevFilterTosTable();
        ~DocsDevFilterTosTable();

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

        class DocsDevFilterTosEntry; //type: DOCSCABLEDEVICEMIB::DocsDevFilterTosTable::DocsDevFilterTosEntry

        ydk::YList docsdevfiltertosentry;
        
}; // DOCSCABLEDEVICEMIB::DocsDevFilterTosTable


class DOCSCABLEDEVICEMIB::DocsDevFilterTosTable::DocsDevFilterTosEntry : public ydk::Entity
{
    public:
        DocsDevFilterTosEntry();
        ~DocsDevFilterTosEntry();

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

        ydk::YLeaf docsdevfiltertosindex; //type: int32
        ydk::YLeaf docsdevfiltertosstatus; //type: RowStatus
        ydk::YLeaf docsdevfiltertosandmask; //type: binary
        ydk::YLeaf docsdevfiltertosormask; //type: binary

}; // DOCSCABLEDEVICEMIB::DocsDevFilterTosTable::DocsDevFilterTosEntry


class DOCSCABLEDEVICEMIB::DocsDevCpeTable : public ydk::Entity
{
    public:
        DocsDevCpeTable();
        ~DocsDevCpeTable();

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

        class DocsDevCpeEntry; //type: DOCSCABLEDEVICEMIB::DocsDevCpeTable::DocsDevCpeEntry

        ydk::YList docsdevcpeentry;
        
}; // DOCSCABLEDEVICEMIB::DocsDevCpeTable


class DOCSCABLEDEVICEMIB::DocsDevCpeTable::DocsDevCpeEntry : public ydk::Entity
{
    public:
        DocsDevCpeEntry();
        ~DocsDevCpeEntry();

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

        ydk::YLeaf docsdevcpeip; //type: string
        ydk::YLeaf docsdevcpesource; //type: DocsDevCpeSource
        ydk::YLeaf docsdevcpestatus; //type: RowStatus
        class DocsDevCpeSource;

}; // DOCSCABLEDEVICEMIB::DocsDevCpeTable::DocsDevCpeEntry


class DOCSCABLEDEVICEMIB::DocsDevCpeInetTable : public ydk::Entity
{
    public:
        DocsDevCpeInetTable();
        ~DocsDevCpeInetTable();

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

        class DocsDevCpeInetEntry; //type: DOCSCABLEDEVICEMIB::DocsDevCpeInetTable::DocsDevCpeInetEntry

        ydk::YList docsdevcpeinetentry;
        
}; // DOCSCABLEDEVICEMIB::DocsDevCpeInetTable


class DOCSCABLEDEVICEMIB::DocsDevCpeInetTable::DocsDevCpeInetEntry : public ydk::Entity
{
    public:
        DocsDevCpeInetEntry();
        ~DocsDevCpeInetEntry();

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

        ydk::YLeaf docsdevcpeinettype; //type: InetAddressType
        ydk::YLeaf docsdevcpeinetaddr; //type: binary
        ydk::YLeaf docsdevcpeinetsource; //type: DocsDevCpeInetSource
        ydk::YLeaf docsdevcpeinetrowstatus; //type: RowStatus
        class DocsDevCpeInetSource;

}; // DOCSCABLEDEVICEMIB::DocsDevCpeInetTable::DocsDevCpeInetEntry

class DOCSCABLEDEVICEMIB::DocsDevBase::DocsDevRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cm;
        static const ydk::Enum::YLeaf cmtsActive;
        static const ydk::Enum::YLeaf cmtsBackup;

        static int get_enum_value(const std::string & name) {
            if (name == "cm") return 1;
            if (name == "cmtsActive") return 2;
            if (name == "cmtsBackup") return 3;
            return -1;
        }
};

class DOCSCABLEDEVICEMIB::DocsDevBase::DocsDevSTPControl : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf stEnabled;
        static const ydk::Enum::YLeaf noStFilterBpdu;
        static const ydk::Enum::YLeaf noStPassBpdu;

        static int get_enum_value(const std::string & name) {
            if (name == "stEnabled") return 1;
            if (name == "noStFilterBpdu") return 2;
            if (name == "noStPassBpdu") return 3;
            return -1;
        }
};

class DOCSCABLEDEVICEMIB::DocsDevBase::DocsDevIgmpModeControl : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf passive;
        static const ydk::Enum::YLeaf active;

        static int get_enum_value(const std::string & name) {
            if (name == "passive") return 1;
            if (name == "active") return 2;
            return -1;
        }
};

class DOCSCABLEDEVICEMIB::DocsDevSoftware::DocsDevSwAdminStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf upgradeFromMgt;
        static const ydk::Enum::YLeaf allowProvisioningUpgrade;
        static const ydk::Enum::YLeaf ignoreProvisioningUpgrade;

        static int get_enum_value(const std::string & name) {
            if (name == "upgradeFromMgt") return 1;
            if (name == "allowProvisioningUpgrade") return 2;
            if (name == "ignoreProvisioningUpgrade") return 3;
            return -1;
        }
};

class DOCSCABLEDEVICEMIB::DocsDevSoftware::DocsDevSwOperStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inProgress;
        static const ydk::Enum::YLeaf completeFromProvisioning;
        static const ydk::Enum::YLeaf completeFromMgt;
        static const ydk::Enum::YLeaf failed;
        static const ydk::Enum::YLeaf other;

        static int get_enum_value(const std::string & name) {
            if (name == "inProgress") return 1;
            if (name == "completeFromProvisioning") return 2;
            if (name == "completeFromMgt") return 3;
            if (name == "failed") return 4;
            if (name == "other") return 5;
            return -1;
        }
};

class DOCSCABLEDEVICEMIB::DocsDevSoftware::DocsDevSwServerTransportProtocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf tftp;
        static const ydk::Enum::YLeaf http;

        static int get_enum_value(const std::string & name) {
            if (name == "tftp") return 1;
            if (name == "http") return 2;
            return -1;
        }
};

class DOCSCABLEDEVICEMIB::DocsDevServer::DocsDevServerBootState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf operational;
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf waitingForDhcpOffer;
        static const ydk::Enum::YLeaf waitingForDhcpResponse;
        static const ydk::Enum::YLeaf waitingForTimeServer;
        static const ydk::Enum::YLeaf waitingForTftp;
        static const ydk::Enum::YLeaf refusedByCmts;
        static const ydk::Enum::YLeaf forwardingDenied;
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf unknown;

        static int get_enum_value(const std::string & name) {
            if (name == "operational") return 1;
            if (name == "disabled") return 2;
            if (name == "waitingForDhcpOffer") return 3;
            if (name == "waitingForDhcpResponse") return 4;
            if (name == "waitingForTimeServer") return 5;
            if (name == "waitingForTftp") return 6;
            if (name == "refusedByCmts") return 7;
            if (name == "forwardingDenied") return 8;
            if (name == "other") return 9;
            if (name == "unknown") return 10;
            return -1;
        }
};

class DOCSCABLEDEVICEMIB::DocsDevEvent::DocsDevEvControl : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf resetLog;
        static const ydk::Enum::YLeaf useDefaultReporting;

        static int get_enum_value(const std::string & name) {
            if (name == "resetLog") return 1;
            if (name == "useDefaultReporting") return 2;
            return -1;
        }
};

class DOCSCABLEDEVICEMIB::DocsDevEvent::DocsDevEvThrottleAdminStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unconstrained;
        static const ydk::Enum::YLeaf maintainBelowThreshold;
        static const ydk::Enum::YLeaf stopAtThreshold;
        static const ydk::Enum::YLeaf inhibited;

        static int get_enum_value(const std::string & name) {
            if (name == "unconstrained") return 1;
            if (name == "maintainBelowThreshold") return 2;
            if (name == "stopAtThreshold") return 3;
            if (name == "inhibited") return 4;
            return -1;
        }
};

class DOCSCABLEDEVICEMIB::DocsDevFilter::DocsDevFilterLLCUnmatchedAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf discard;
        static const ydk::Enum::YLeaf accept;

        static int get_enum_value(const std::string & name) {
            if (name == "discard") return 1;
            if (name == "accept") return 2;
            return -1;
        }
};

class DOCSCABLEDEVICEMIB::DocsDevFilter::DocsDevFilterIpDefault : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf discard;
        static const ydk::Enum::YLeaf accept;

        static int get_enum_value(const std::string & name) {
            if (name == "discard") return 1;
            if (name == "accept") return 2;
            return -1;
        }
};

class DOCSCABLEDEVICEMIB::DocsDevCpe::DocsDevCpeEnroll : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf any;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 1;
            if (name == "any") return 2;
            return -1;
        }
};

class DOCSCABLEDEVICEMIB::DocsDevNmAccessTable::DocsDevNmAccessEntry::DocsDevNmAccessControl : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf read;
        static const ydk::Enum::YLeaf readWrite;
        static const ydk::Enum::YLeaf roWithTraps;
        static const ydk::Enum::YLeaf rwWithTraps;
        static const ydk::Enum::YLeaf trapsOnly;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 1;
            if (name == "read") return 2;
            if (name == "readWrite") return 3;
            if (name == "roWithTraps") return 4;
            if (name == "rwWithTraps") return 5;
            if (name == "trapsOnly") return 6;
            return -1;
        }
};

class DOCSCABLEDEVICEMIB::DocsDevNmAccessTable::DocsDevNmAccessEntry::DocsDevNmAccessTrapVersion : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disableSNMPv2trap;
        static const ydk::Enum::YLeaf enableSNMPv2trap;

        static int get_enum_value(const std::string & name) {
            if (name == "disableSNMPv2trap") return 1;
            if (name == "enableSNMPv2trap") return 2;
            return -1;
        }
};

class DOCSCABLEDEVICEMIB::DocsDevEvControlTable::DocsDevEvControlEntry::DocsDevEvPriority : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf emergency;
        static const ydk::Enum::YLeaf alert;
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf error;
        static const ydk::Enum::YLeaf warning;
        static const ydk::Enum::YLeaf notice;
        static const ydk::Enum::YLeaf information;
        static const ydk::Enum::YLeaf debug;

        static int get_enum_value(const std::string & name) {
            if (name == "emergency") return 1;
            if (name == "alert") return 2;
            if (name == "critical") return 3;
            if (name == "error") return 4;
            if (name == "warning") return 5;
            if (name == "notice") return 6;
            if (name == "information") return 7;
            if (name == "debug") return 8;
            return -1;
        }
};

class DOCSCABLEDEVICEMIB::DocsDevEventTable::DocsDevEventEntry::DocsDevEvLevel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf emergency;
        static const ydk::Enum::YLeaf alert;
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf error;
        static const ydk::Enum::YLeaf warning;
        static const ydk::Enum::YLeaf notice;
        static const ydk::Enum::YLeaf information;
        static const ydk::Enum::YLeaf debug;

        static int get_enum_value(const std::string & name) {
            if (name == "emergency") return 1;
            if (name == "alert") return 2;
            if (name == "critical") return 3;
            if (name == "error") return 4;
            if (name == "warning") return 5;
            if (name == "notice") return 6;
            if (name == "information") return 7;
            if (name == "debug") return 8;
            return -1;
        }
};

class DOCSCABLEDEVICEMIB::DocsDevFilterLLCTable::DocsDevFilterLLCEntry::DocsDevFilterLLCProtocolType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ethertype;
        static const ydk::Enum::YLeaf dsap;

        static int get_enum_value(const std::string & name) {
            if (name == "ethertype") return 1;
            if (name == "dsap") return 2;
            return -1;
        }
};

class DOCSCABLEDEVICEMIB::DocsDevFilterIpTable::DocsDevFilterIpEntry::DocsDevFilterIpControl : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf discard;
        static const ydk::Enum::YLeaf accept;
        static const ydk::Enum::YLeaf policy;

        static int get_enum_value(const std::string & name) {
            if (name == "discard") return 1;
            if (name == "accept") return 2;
            if (name == "policy") return 3;
            return -1;
        }
};

class DOCSCABLEDEVICEMIB::DocsDevFilterIpTable::DocsDevFilterIpEntry::DocsDevFilterIpDirection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inbound;
        static const ydk::Enum::YLeaf outbound;
        static const ydk::Enum::YLeaf both;

        static int get_enum_value(const std::string & name) {
            if (name == "inbound") return 1;
            if (name == "outbound") return 2;
            if (name == "both") return 3;
            return -1;
        }
};

class DOCSCABLEDEVICEMIB::DocsDevCpeTable::DocsDevCpeEntry::DocsDevCpeSource : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf manual;
        static const ydk::Enum::YLeaf learned;

        static int get_enum_value(const std::string & name) {
            if (name == "other") return 1;
            if (name == "manual") return 2;
            if (name == "learned") return 3;
            return -1;
        }
};

class DOCSCABLEDEVICEMIB::DocsDevCpeInetTable::DocsDevCpeInetEntry::DocsDevCpeInetSource : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf manual;
        static const ydk::Enum::YLeaf learned;

        static int get_enum_value(const std::string & name) {
            if (name == "manual") return 2;
            if (name == "learned") return 3;
            return -1;
        }
};


}
}

#endif /* _DOCS_CABLE_DEVICE_MIB_ */

