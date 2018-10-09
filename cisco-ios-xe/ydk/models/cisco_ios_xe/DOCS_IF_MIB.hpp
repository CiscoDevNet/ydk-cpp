#ifndef _DOCS_IF_MIB_
#define _DOCS_IF_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace DOCS_IF_MIB {

class DOCSIFMIB : public ydk::Entity
{
    public:
        DOCSIFMIB();
        ~DOCSIFMIB();

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

        class DocsIfBaseObjects; //type: DOCSIFMIB::DocsIfBaseObjects
        class DocsIfCmtsObjects; //type: DOCSIFMIB::DocsIfCmtsObjects
        class DocsIfDownstreamChannelTable; //type: DOCSIFMIB::DocsIfDownstreamChannelTable
        class DocsIfUpstreamChannelTable; //type: DOCSIFMIB::DocsIfUpstreamChannelTable
        class DocsIfQosProfileTable; //type: DOCSIFMIB::DocsIfQosProfileTable
        class DocsIfSignalQualityTable; //type: DOCSIFMIB::DocsIfSignalQualityTable
        class DocsIfCmMacTable; //type: DOCSIFMIB::DocsIfCmMacTable
        class DocsIfCmStatusTable; //type: DOCSIFMIB::DocsIfCmStatusTable
        class DocsIfCmServiceTable; //type: DOCSIFMIB::DocsIfCmServiceTable
        class DocsIfCmtsMacTable; //type: DOCSIFMIB::DocsIfCmtsMacTable
        class DocsIfCmtsStatusTable; //type: DOCSIFMIB::DocsIfCmtsStatusTable
        class DocsIfCmtsCmStatusTable; //type: DOCSIFMIB::DocsIfCmtsCmStatusTable
        class DocsIfCmtsServiceTable; //type: DOCSIFMIB::DocsIfCmtsServiceTable
        class DocsIfCmtsModulationTable; //type: DOCSIFMIB::DocsIfCmtsModulationTable
        class DocsIfCmtsMacToCmTable; //type: DOCSIFMIB::DocsIfCmtsMacToCmTable
        class DocsIfCmtsChannelUtilizationTable; //type: DOCSIFMIB::DocsIfCmtsChannelUtilizationTable
        class DocsIfCmtsDownChannelCounterTable; //type: DOCSIFMIB::DocsIfCmtsDownChannelCounterTable
        class DocsIfCmtsUpChannelCounterTable; //type: DOCSIFMIB::DocsIfCmtsUpChannelCounterTable

        std::shared_ptr<cisco_ios_xe::DOCS_IF_MIB::DOCSIFMIB::DocsIfBaseObjects> docsifbaseobjects;
        std::shared_ptr<cisco_ios_xe::DOCS_IF_MIB::DOCSIFMIB::DocsIfCmtsObjects> docsifcmtsobjects;
        std::shared_ptr<cisco_ios_xe::DOCS_IF_MIB::DOCSIFMIB::DocsIfDownstreamChannelTable> docsifdownstreamchanneltable;
        std::shared_ptr<cisco_ios_xe::DOCS_IF_MIB::DOCSIFMIB::DocsIfUpstreamChannelTable> docsifupstreamchanneltable;
        std::shared_ptr<cisco_ios_xe::DOCS_IF_MIB::DOCSIFMIB::DocsIfQosProfileTable> docsifqosprofiletable;
        std::shared_ptr<cisco_ios_xe::DOCS_IF_MIB::DOCSIFMIB::DocsIfSignalQualityTable> docsifsignalqualitytable;
        std::shared_ptr<cisco_ios_xe::DOCS_IF_MIB::DOCSIFMIB::DocsIfCmMacTable> docsifcmmactable;
        std::shared_ptr<cisco_ios_xe::DOCS_IF_MIB::DOCSIFMIB::DocsIfCmStatusTable> docsifcmstatustable;
        std::shared_ptr<cisco_ios_xe::DOCS_IF_MIB::DOCSIFMIB::DocsIfCmServiceTable> docsifcmservicetable;
        std::shared_ptr<cisco_ios_xe::DOCS_IF_MIB::DOCSIFMIB::DocsIfCmtsMacTable> docsifcmtsmactable;
        std::shared_ptr<cisco_ios_xe::DOCS_IF_MIB::DOCSIFMIB::DocsIfCmtsStatusTable> docsifcmtsstatustable;
        std::shared_ptr<cisco_ios_xe::DOCS_IF_MIB::DOCSIFMIB::DocsIfCmtsCmStatusTable> docsifcmtscmstatustable;
        std::shared_ptr<cisco_ios_xe::DOCS_IF_MIB::DOCSIFMIB::DocsIfCmtsServiceTable> docsifcmtsservicetable;
        std::shared_ptr<cisco_ios_xe::DOCS_IF_MIB::DOCSIFMIB::DocsIfCmtsModulationTable> docsifcmtsmodulationtable;
        std::shared_ptr<cisco_ios_xe::DOCS_IF_MIB::DOCSIFMIB::DocsIfCmtsMacToCmTable> docsifcmtsmactocmtable;
        std::shared_ptr<cisco_ios_xe::DOCS_IF_MIB::DOCSIFMIB::DocsIfCmtsChannelUtilizationTable> docsifcmtschannelutilizationtable;
        std::shared_ptr<cisco_ios_xe::DOCS_IF_MIB::DOCSIFMIB::DocsIfCmtsDownChannelCounterTable> docsifcmtsdownchannelcountertable;
        std::shared_ptr<cisco_ios_xe::DOCS_IF_MIB::DOCSIFMIB::DocsIfCmtsUpChannelCounterTable> docsifcmtsupchannelcountertable;
        
}; // DOCSIFMIB


class DOCSIFMIB::DocsIfBaseObjects : public ydk::Entity
{
    public:
        DocsIfBaseObjects();
        ~DocsIfBaseObjects();

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

        ydk::YLeaf docsifdocsisbasecapability; //type: DocsisVersion

}; // DOCSIFMIB::DocsIfBaseObjects


class DOCSIFMIB::DocsIfCmtsObjects : public ydk::Entity
{
    public:
        DocsIfCmtsObjects();
        ~DocsIfCmtsObjects();

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

        ydk::YLeaf docsifcmtsqosprofilepermissions; //type: DocsIfCmtsQosProfilePermissions
        ydk::YLeaf docsifcmtschannelutilizationinterval; //type: int32

}; // DOCSIFMIB::DocsIfCmtsObjects


class DOCSIFMIB::DocsIfDownstreamChannelTable : public ydk::Entity
{
    public:
        DocsIfDownstreamChannelTable();
        ~DocsIfDownstreamChannelTable();

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

        class DocsIfDownstreamChannelEntry; //type: DOCSIFMIB::DocsIfDownstreamChannelTable::DocsIfDownstreamChannelEntry

        ydk::YList docsifdownstreamchannelentry;
        
}; // DOCSIFMIB::DocsIfDownstreamChannelTable


class DOCSIFMIB::DocsIfDownstreamChannelTable::DocsIfDownstreamChannelEntry : public ydk::Entity
{
    public:
        DocsIfDownstreamChannelEntry();
        ~DocsIfDownstreamChannelEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf docsifdownchannelid; //type: int32
        ydk::YLeaf docsifdownchannelfrequency; //type: int32
        ydk::YLeaf docsifdownchannelwidth; //type: int32
        ydk::YLeaf docsifdownchannelmodulation; //type: DocsIfDownChannelModulation
        ydk::YLeaf docsifdownchannelinterleave; //type: DocsIfDownChannelInterleave
        ydk::YLeaf docsifdownchannelpower; //type: int32
        ydk::YLeaf docsifdownchannelannex; //type: DocsIfDownChannelAnnex
        ydk::YLeaf docsifdownchannelstoragetype; //type: StorageType
        class DocsIfDownChannelModulation;
        class DocsIfDownChannelInterleave;
        class DocsIfDownChannelAnnex;

}; // DOCSIFMIB::DocsIfDownstreamChannelTable::DocsIfDownstreamChannelEntry


class DOCSIFMIB::DocsIfUpstreamChannelTable : public ydk::Entity
{
    public:
        DocsIfUpstreamChannelTable();
        ~DocsIfUpstreamChannelTable();

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

        class DocsIfUpstreamChannelEntry; //type: DOCSIFMIB::DocsIfUpstreamChannelTable::DocsIfUpstreamChannelEntry

        ydk::YList docsifupstreamchannelentry;
        
}; // DOCSIFMIB::DocsIfUpstreamChannelTable


class DOCSIFMIB::DocsIfUpstreamChannelTable::DocsIfUpstreamChannelEntry : public ydk::Entity
{
    public:
        DocsIfUpstreamChannelEntry();
        ~DocsIfUpstreamChannelEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf docsifupchannelid; //type: int32
        ydk::YLeaf docsifupchannelfrequency; //type: int32
        ydk::YLeaf docsifupchannelwidth; //type: int32
        ydk::YLeaf docsifupchannelmodulationprofile; //type: uint32
        ydk::YLeaf docsifupchannelslotsize; //type: uint32
        ydk::YLeaf docsifupchanneltxtimingoffset; //type: uint32
        ydk::YLeaf docsifupchannelrangingbackoffstart; //type: int32
        ydk::YLeaf docsifupchannelrangingbackoffend; //type: int32
        ydk::YLeaf docsifupchanneltxbackoffstart; //type: int32
        ydk::YLeaf docsifupchanneltxbackoffend; //type: int32
        ydk::YLeaf docsifupchannelscdmaactivecodes; //type: uint32
        ydk::YLeaf docsifupchannelscdmacodesperslot; //type: int32
        ydk::YLeaf docsifupchannelscdmaframesize; //type: uint32
        ydk::YLeaf docsifupchannelscdmahoppingseed; //type: uint32
        ydk::YLeaf docsifupchanneltype; //type: DocsisUpstreamType
        ydk::YLeaf docsifupchannelclonefrom; //type: int32
        ydk::YLeaf docsifupchannelupdate; //type: boolean
        ydk::YLeaf docsifupchannelstatus; //type: RowStatus
        ydk::YLeaf docsifupchannelpreeqenable; //type: boolean

}; // DOCSIFMIB::DocsIfUpstreamChannelTable::DocsIfUpstreamChannelEntry


class DOCSIFMIB::DocsIfQosProfileTable : public ydk::Entity
{
    public:
        DocsIfQosProfileTable();
        ~DocsIfQosProfileTable();

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

        class DocsIfQosProfileEntry; //type: DOCSIFMIB::DocsIfQosProfileTable::DocsIfQosProfileEntry

        ydk::YList docsifqosprofileentry;
        
}; // DOCSIFMIB::DocsIfQosProfileTable


class DOCSIFMIB::DocsIfQosProfileTable::DocsIfQosProfileEntry : public ydk::Entity
{
    public:
        DocsIfQosProfileEntry();
        ~DocsIfQosProfileEntry();

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

        ydk::YLeaf docsifqosprofindex; //type: int32
        ydk::YLeaf docsifqosprofpriority; //type: int32
        ydk::YLeaf docsifqosprofmaxupbandwidth; //type: int32
        ydk::YLeaf docsifqosprofguarupbandwidth; //type: int32
        ydk::YLeaf docsifqosprofmaxdownbandwidth; //type: int32
        ydk::YLeaf docsifqosprofmaxtxburst; //type: int32
        ydk::YLeaf docsifqosprofbaselineprivacy; //type: boolean
        ydk::YLeaf docsifqosprofstatus; //type: RowStatus
        ydk::YLeaf docsifqosprofmaxtransmitburst; //type: int32

}; // DOCSIFMIB::DocsIfQosProfileTable::DocsIfQosProfileEntry


class DOCSIFMIB::DocsIfSignalQualityTable : public ydk::Entity
{
    public:
        DocsIfSignalQualityTable();
        ~DocsIfSignalQualityTable();

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

        class DocsIfSignalQualityEntry; //type: DOCSIFMIB::DocsIfSignalQualityTable::DocsIfSignalQualityEntry

        ydk::YList docsifsignalqualityentry;
        
}; // DOCSIFMIB::DocsIfSignalQualityTable


class DOCSIFMIB::DocsIfSignalQualityTable::DocsIfSignalQualityEntry : public ydk::Entity
{
    public:
        DocsIfSignalQualityEntry();
        ~DocsIfSignalQualityEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf docsifsigqincludescontention; //type: boolean
        ydk::YLeaf docsifsigqunerroreds; //type: uint32
        ydk::YLeaf docsifsigqcorrecteds; //type: uint32
        ydk::YLeaf docsifsigquncorrectables; //type: uint32
        ydk::YLeaf docsifsigqsignalnoise; //type: int32
        ydk::YLeaf docsifsigqmicroreflections; //type: int32
        ydk::YLeaf docsifsigqequalizationdata; //type: binary
        ydk::YLeaf docsifsigqextunerroreds; //type: uint64
        ydk::YLeaf docsifsigqextcorrecteds; //type: uint64
        ydk::YLeaf docsifsigqextuncorrectables; //type: uint64

}; // DOCSIFMIB::DocsIfSignalQualityTable::DocsIfSignalQualityEntry


class DOCSIFMIB::DocsIfCmMacTable : public ydk::Entity
{
    public:
        DocsIfCmMacTable();
        ~DocsIfCmMacTable();

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

        class DocsIfCmMacEntry; //type: DOCSIFMIB::DocsIfCmMacTable::DocsIfCmMacEntry

        ydk::YList docsifcmmacentry;
        
}; // DOCSIFMIB::DocsIfCmMacTable


class DOCSIFMIB::DocsIfCmMacTable::DocsIfCmMacEntry : public ydk::Entity
{
    public:
        DocsIfCmMacEntry();
        ~DocsIfCmMacEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf docsifcmcmtsaddress; //type: string
        ydk::YLeaf docsifcmcapabilities; //type: DocsIfCmCapabilities
        ydk::YLeaf docsifcmrangingresptimeout; //type: uint32
        ydk::YLeaf docsifcmrangingtimeout; //type: int32

}; // DOCSIFMIB::DocsIfCmMacTable::DocsIfCmMacEntry


class DOCSIFMIB::DocsIfCmStatusTable : public ydk::Entity
{
    public:
        DocsIfCmStatusTable();
        ~DocsIfCmStatusTable();

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

        class DocsIfCmStatusEntry; //type: DOCSIFMIB::DocsIfCmStatusTable::DocsIfCmStatusEntry

        ydk::YList docsifcmstatusentry;
        
}; // DOCSIFMIB::DocsIfCmStatusTable


class DOCSIFMIB::DocsIfCmStatusTable::DocsIfCmStatusEntry : public ydk::Entity
{
    public:
        DocsIfCmStatusEntry();
        ~DocsIfCmStatusEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf docsifcmstatusvalue; //type: DocsIfCmStatusValue
        ydk::YLeaf docsifcmstatuscode; //type: binary
        ydk::YLeaf docsifcmstatustxpower; //type: int32
        ydk::YLeaf docsifcmstatusresets; //type: uint32
        ydk::YLeaf docsifcmstatuslostsyncs; //type: uint32
        ydk::YLeaf docsifcmstatusinvalidmaps; //type: uint32
        ydk::YLeaf docsifcmstatusinvaliducds; //type: uint32
        ydk::YLeaf docsifcmstatusinvalidrangingresponses; //type: uint32
        ydk::YLeaf docsifcmstatusinvalidregistrationresponses; //type: uint32
        ydk::YLeaf docsifcmstatust1timeouts; //type: uint32
        ydk::YLeaf docsifcmstatust2timeouts; //type: uint32
        ydk::YLeaf docsifcmstatust3timeouts; //type: uint32
        ydk::YLeaf docsifcmstatust4timeouts; //type: uint32
        ydk::YLeaf docsifcmstatusrangingaborteds; //type: uint32
        ydk::YLeaf docsifcmstatusdocsisopermode; //type: DocsisQosVersion
        ydk::YLeaf docsifcmstatusmodulationtype; //type: DocsisUpstreamTypeStatus
        ydk::YLeaf docsifcmstatusequalizationdata; //type: binary
        class DocsIfCmStatusValue;

}; // DOCSIFMIB::DocsIfCmStatusTable::DocsIfCmStatusEntry


class DOCSIFMIB::DocsIfCmServiceTable : public ydk::Entity
{
    public:
        DocsIfCmServiceTable();
        ~DocsIfCmServiceTable();

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

        class DocsIfCmServiceEntry; //type: DOCSIFMIB::DocsIfCmServiceTable::DocsIfCmServiceEntry

        ydk::YList docsifcmserviceentry;
        
}; // DOCSIFMIB::DocsIfCmServiceTable


class DOCSIFMIB::DocsIfCmServiceTable::DocsIfCmServiceEntry : public ydk::Entity
{
    public:
        DocsIfCmServiceEntry();
        ~DocsIfCmServiceEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf docsifcmserviceid; //type: int32
        ydk::YLeaf docsifcmserviceqosprofile; //type: int32
        ydk::YLeaf docsifcmservicetxslotsimmed; //type: uint32
        ydk::YLeaf docsifcmservicetxslotsded; //type: uint32
        ydk::YLeaf docsifcmservicetxretries; //type: uint32
        ydk::YLeaf docsifcmservicetxexceededs; //type: uint32
        ydk::YLeaf docsifcmservicerqretries; //type: uint32
        ydk::YLeaf docsifcmservicerqexceededs; //type: uint32
        ydk::YLeaf docsifcmserviceexttxslotsimmed; //type: uint64
        ydk::YLeaf docsifcmserviceexttxslotsded; //type: uint64

}; // DOCSIFMIB::DocsIfCmServiceTable::DocsIfCmServiceEntry


class DOCSIFMIB::DocsIfCmtsMacTable : public ydk::Entity
{
    public:
        DocsIfCmtsMacTable();
        ~DocsIfCmtsMacTable();

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

        class DocsIfCmtsMacEntry; //type: DOCSIFMIB::DocsIfCmtsMacTable::DocsIfCmtsMacEntry

        ydk::YList docsifcmtsmacentry;
        
}; // DOCSIFMIB::DocsIfCmtsMacTable


class DOCSIFMIB::DocsIfCmtsMacTable::DocsIfCmtsMacEntry : public ydk::Entity
{
    public:
        DocsIfCmtsMacEntry();
        ~DocsIfCmtsMacEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf docsifcmtscapabilities; //type: DocsIfCmtsCapabilities
        ydk::YLeaf docsifcmtssyncinterval; //type: int32
        ydk::YLeaf docsifcmtsucdinterval; //type: int32
        ydk::YLeaf docsifcmtsmaxserviceids; //type: int32
        ydk::YLeaf docsifcmtsinsertioninterval; //type: uint32
        ydk::YLeaf docsifcmtsinvitedrangingattempts; //type: int32
        ydk::YLeaf docsifcmtsinsertinterval; //type: int32
        ydk::YLeaf docsifcmtsmacstoragetype; //type: StorageType

}; // DOCSIFMIB::DocsIfCmtsMacTable::DocsIfCmtsMacEntry


class DOCSIFMIB::DocsIfCmtsStatusTable : public ydk::Entity
{
    public:
        DocsIfCmtsStatusTable();
        ~DocsIfCmtsStatusTable();

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

        class DocsIfCmtsStatusEntry; //type: DOCSIFMIB::DocsIfCmtsStatusTable::DocsIfCmtsStatusEntry

        ydk::YList docsifcmtsstatusentry;
        
}; // DOCSIFMIB::DocsIfCmtsStatusTable


class DOCSIFMIB::DocsIfCmtsStatusTable::DocsIfCmtsStatusEntry : public ydk::Entity
{
    public:
        DocsIfCmtsStatusEntry();
        ~DocsIfCmtsStatusEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf docsifcmtsstatusinvalidrangereqs; //type: uint32
        ydk::YLeaf docsifcmtsstatusrangingaborteds; //type: uint32
        ydk::YLeaf docsifcmtsstatusinvalidregreqs; //type: uint32
        ydk::YLeaf docsifcmtsstatusfailedregreqs; //type: uint32
        ydk::YLeaf docsifcmtsstatusinvaliddatareqs; //type: uint32
        ydk::YLeaf docsifcmtsstatust5timeouts; //type: uint32

}; // DOCSIFMIB::DocsIfCmtsStatusTable::DocsIfCmtsStatusEntry


class DOCSIFMIB::DocsIfCmtsCmStatusTable : public ydk::Entity
{
    public:
        DocsIfCmtsCmStatusTable();
        ~DocsIfCmtsCmStatusTable();

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

        class DocsIfCmtsCmStatusEntry; //type: DOCSIFMIB::DocsIfCmtsCmStatusTable::DocsIfCmtsCmStatusEntry

        ydk::YList docsifcmtscmstatusentry;
        
}; // DOCSIFMIB::DocsIfCmtsCmStatusTable


class DOCSIFMIB::DocsIfCmtsCmStatusTable::DocsIfCmtsCmStatusEntry : public ydk::Entity
{
    public:
        DocsIfCmtsCmStatusEntry();
        ~DocsIfCmtsCmStatusEntry();

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

        ydk::YLeaf docsifcmtscmstatusindex; //type: int32
        ydk::YLeaf docsifcmtscmstatusmacaddress; //type: string
        ydk::YLeaf docsifcmtscmstatusipaddress; //type: string
        ydk::YLeaf docsifcmtscmstatusdownchannelifindex; //type: int32
        ydk::YLeaf docsifcmtscmstatusupchannelifindex; //type: int32
        ydk::YLeaf docsifcmtscmstatusrxpower; //type: int32
        ydk::YLeaf docsifcmtscmstatustimingoffset; //type: uint32
        ydk::YLeaf docsifcmtscmstatusequalizationdata; //type: binary
        ydk::YLeaf docsifcmtscmstatusvalue; //type: DocsIfCmtsCmStatusValue
        ydk::YLeaf docsifcmtscmstatusunerroreds; //type: uint32
        ydk::YLeaf docsifcmtscmstatuscorrecteds; //type: uint32
        ydk::YLeaf docsifcmtscmstatusuncorrectables; //type: uint32
        ydk::YLeaf docsifcmtscmstatussignalnoise; //type: int32
        ydk::YLeaf docsifcmtscmstatusmicroreflections; //type: int32
        ydk::YLeaf docsifcmtscmstatusextunerroreds; //type: uint64
        ydk::YLeaf docsifcmtscmstatusextcorrecteds; //type: uint64
        ydk::YLeaf docsifcmtscmstatusextuncorrectables; //type: uint64
        ydk::YLeaf docsifcmtscmstatusdocsisregmode; //type: DocsisQosVersion
        ydk::YLeaf docsifcmtscmstatusmodulationtype; //type: DocsisUpstreamTypeStatus
        ydk::YLeaf docsifcmtscmstatusinetaddresstype; //type: InetAddressType
        ydk::YLeaf docsifcmtscmstatusinetaddress; //type: binary
        ydk::YLeaf docsifcmtscmstatusvaluelastupdate; //type: uint32
        class DocsIfCmtsCmStatusValue;

}; // DOCSIFMIB::DocsIfCmtsCmStatusTable::DocsIfCmtsCmStatusEntry


class DOCSIFMIB::DocsIfCmtsServiceTable : public ydk::Entity
{
    public:
        DocsIfCmtsServiceTable();
        ~DocsIfCmtsServiceTable();

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

        class DocsIfCmtsServiceEntry; //type: DOCSIFMIB::DocsIfCmtsServiceTable::DocsIfCmtsServiceEntry

        ydk::YList docsifcmtsserviceentry;
        
}; // DOCSIFMIB::DocsIfCmtsServiceTable


class DOCSIFMIB::DocsIfCmtsServiceTable::DocsIfCmtsServiceEntry : public ydk::Entity
{
    public:
        DocsIfCmtsServiceEntry();
        ~DocsIfCmtsServiceEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf docsifcmtsserviceid; //type: int32
        ydk::YLeaf docsifcmtsservicecmstatusindex; //type: int32
        ydk::YLeaf docsifcmtsserviceadminstatus; //type: DocsIfCmtsServiceAdminStatus
        ydk::YLeaf docsifcmtsserviceqosprofile; //type: int32
        ydk::YLeaf docsifcmtsservicecreatetime; //type: uint32
        ydk::YLeaf docsifcmtsserviceinoctets; //type: uint32
        ydk::YLeaf docsifcmtsserviceinpackets; //type: uint32
        ydk::YLeaf docsifcmtsservicenewcmstatusindex; //type: int32
        class DocsIfCmtsServiceAdminStatus;

}; // DOCSIFMIB::DocsIfCmtsServiceTable::DocsIfCmtsServiceEntry


class DOCSIFMIB::DocsIfCmtsModulationTable : public ydk::Entity
{
    public:
        DocsIfCmtsModulationTable();
        ~DocsIfCmtsModulationTable();

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

        class DocsIfCmtsModulationEntry; //type: DOCSIFMIB::DocsIfCmtsModulationTable::DocsIfCmtsModulationEntry

        ydk::YList docsifcmtsmodulationentry;
        
}; // DOCSIFMIB::DocsIfCmtsModulationTable


class DOCSIFMIB::DocsIfCmtsModulationTable::DocsIfCmtsModulationEntry : public ydk::Entity
{
    public:
        DocsIfCmtsModulationEntry();
        ~DocsIfCmtsModulationEntry();

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

        ydk::YLeaf docsifcmtsmodindex; //type: int32
        ydk::YLeaf docsifcmtsmodintervalusagecode; //type: DocsIfCmtsModIntervalUsageCode
        ydk::YLeaf docsifcmtsmodcontrol; //type: RowStatus
        ydk::YLeaf docsifcmtsmodtype; //type: DocsIfCmtsModType
        ydk::YLeaf docsifcmtsmodpreamblelen; //type: int32
        ydk::YLeaf docsifcmtsmoddifferentialencoding; //type: boolean
        ydk::YLeaf docsifcmtsmodfecerrorcorrection; //type: int32
        ydk::YLeaf docsifcmtsmodfeccodewordlength; //type: int32
        ydk::YLeaf docsifcmtsmodscramblerseed; //type: int32
        ydk::YLeaf docsifcmtsmodmaxburstsize; //type: int32
        ydk::YLeaf docsifcmtsmodguardtimesize; //type: uint32
        ydk::YLeaf docsifcmtsmodlastcodewordshortened; //type: boolean
        ydk::YLeaf docsifcmtsmodscrambler; //type: boolean
        ydk::YLeaf docsifcmtsmodbyteinterleaverdepth; //type: uint32
        ydk::YLeaf docsifcmtsmodbyteinterleaverblocksize; //type: uint32
        ydk::YLeaf docsifcmtsmodpreambletype; //type: DocsIfCmtsModPreambleType
        ydk::YLeaf docsifcmtsmodtcmerrorcorrectionon; //type: boolean
        ydk::YLeaf docsifcmtsmodscdmainterleaverstepsize; //type: uint32
        ydk::YLeaf docsifcmtsmodscdmaspreaderenable; //type: boolean
        ydk::YLeaf docsifcmtsmodscdmasubframecodes; //type: uint32
        ydk::YLeaf docsifcmtsmodchanneltype; //type: DocsisUpstreamType
        class DocsIfCmtsModIntervalUsageCode;
        class DocsIfCmtsModType;
        class DocsIfCmtsModPreambleType;

}; // DOCSIFMIB::DocsIfCmtsModulationTable::DocsIfCmtsModulationEntry


class DOCSIFMIB::DocsIfCmtsMacToCmTable : public ydk::Entity
{
    public:
        DocsIfCmtsMacToCmTable();
        ~DocsIfCmtsMacToCmTable();

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

        class DocsIfCmtsMacToCmEntry; //type: DOCSIFMIB::DocsIfCmtsMacToCmTable::DocsIfCmtsMacToCmEntry

        ydk::YList docsifcmtsmactocmentry;
        
}; // DOCSIFMIB::DocsIfCmtsMacToCmTable


class DOCSIFMIB::DocsIfCmtsMacToCmTable::DocsIfCmtsMacToCmEntry : public ydk::Entity
{
    public:
        DocsIfCmtsMacToCmEntry();
        ~DocsIfCmtsMacToCmEntry();

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

        ydk::YLeaf docsifcmtscmmac; //type: string
        ydk::YLeaf docsifcmtscmptr; //type: int32

}; // DOCSIFMIB::DocsIfCmtsMacToCmTable::DocsIfCmtsMacToCmEntry


class DOCSIFMIB::DocsIfCmtsChannelUtilizationTable : public ydk::Entity
{
    public:
        DocsIfCmtsChannelUtilizationTable();
        ~DocsIfCmtsChannelUtilizationTable();

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

        class DocsIfCmtsChannelUtilizationEntry; //type: DOCSIFMIB::DocsIfCmtsChannelUtilizationTable::DocsIfCmtsChannelUtilizationEntry

        ydk::YList docsifcmtschannelutilizationentry;
        
}; // DOCSIFMIB::DocsIfCmtsChannelUtilizationTable


class DOCSIFMIB::DocsIfCmtsChannelUtilizationTable::DocsIfCmtsChannelUtilizationEntry : public ydk::Entity
{
    public:
        DocsIfCmtsChannelUtilizationEntry();
        ~DocsIfCmtsChannelUtilizationEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf docsifcmtschannelutiftype; //type: IANAifType
        ydk::YLeaf docsifcmtschannelutid; //type: int32
        ydk::YLeaf docsifcmtschannelututilization; //type: int32

}; // DOCSIFMIB::DocsIfCmtsChannelUtilizationTable::DocsIfCmtsChannelUtilizationEntry


class DOCSIFMIB::DocsIfCmtsDownChannelCounterTable : public ydk::Entity
{
    public:
        DocsIfCmtsDownChannelCounterTable();
        ~DocsIfCmtsDownChannelCounterTable();

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

        class DocsIfCmtsDownChannelCounterEntry; //type: DOCSIFMIB::DocsIfCmtsDownChannelCounterTable::DocsIfCmtsDownChannelCounterEntry

        ydk::YList docsifcmtsdownchannelcounterentry;
        
}; // DOCSIFMIB::DocsIfCmtsDownChannelCounterTable


class DOCSIFMIB::DocsIfCmtsDownChannelCounterTable::DocsIfCmtsDownChannelCounterEntry : public ydk::Entity
{
    public:
        DocsIfCmtsDownChannelCounterEntry();
        ~DocsIfCmtsDownChannelCounterEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf docsifcmtsdownchnlctrid; //type: int32
        ydk::YLeaf docsifcmtsdownchnlctrtotalbytes; //type: uint32
        ydk::YLeaf docsifcmtsdownchnlctrusedbytes; //type: uint32
        ydk::YLeaf docsifcmtsdownchnlctrexttotalbytes; //type: uint64
        ydk::YLeaf docsifcmtsdownchnlctrextusedbytes; //type: uint64

}; // DOCSIFMIB::DocsIfCmtsDownChannelCounterTable::DocsIfCmtsDownChannelCounterEntry


class DOCSIFMIB::DocsIfCmtsUpChannelCounterTable : public ydk::Entity
{
    public:
        DocsIfCmtsUpChannelCounterTable();
        ~DocsIfCmtsUpChannelCounterTable();

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

        class DocsIfCmtsUpChannelCounterEntry; //type: DOCSIFMIB::DocsIfCmtsUpChannelCounterTable::DocsIfCmtsUpChannelCounterEntry

        ydk::YList docsifcmtsupchannelcounterentry;
        
}; // DOCSIFMIB::DocsIfCmtsUpChannelCounterTable


class DOCSIFMIB::DocsIfCmtsUpChannelCounterTable::DocsIfCmtsUpChannelCounterEntry : public ydk::Entity
{
    public:
        DocsIfCmtsUpChannelCounterEntry();
        ~DocsIfCmtsUpChannelCounterEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf docsifcmtsupchnlctrid; //type: int32
        ydk::YLeaf docsifcmtsupchnlctrtotalmslots; //type: uint32
        ydk::YLeaf docsifcmtsupchnlctrucastgrantedmslots; //type: uint32
        ydk::YLeaf docsifcmtsupchnlctrtotalcntnmslots; //type: uint32
        ydk::YLeaf docsifcmtsupchnlctrusedcntnmslots; //type: uint32
        ydk::YLeaf docsifcmtsupchnlctrexttotalmslots; //type: uint64
        ydk::YLeaf docsifcmtsupchnlctrextucastgrantedmslots; //type: uint64
        ydk::YLeaf docsifcmtsupchnlctrexttotalcntnmslots; //type: uint64
        ydk::YLeaf docsifcmtsupchnlctrextusedcntnmslots; //type: uint64
        ydk::YLeaf docsifcmtsupchnlctrcollcntnmslots; //type: uint32
        ydk::YLeaf docsifcmtsupchnlctrtotalcntnreqmslots; //type: uint32
        ydk::YLeaf docsifcmtsupchnlctrusedcntnreqmslots; //type: uint32
        ydk::YLeaf docsifcmtsupchnlctrcollcntnreqmslots; //type: uint32
        ydk::YLeaf docsifcmtsupchnlctrtotalcntnreqdatamslots; //type: uint32
        ydk::YLeaf docsifcmtsupchnlctrusedcntnreqdatamslots; //type: uint32
        ydk::YLeaf docsifcmtsupchnlctrcollcntnreqdatamslots; //type: uint32
        ydk::YLeaf docsifcmtsupchnlctrtotalcntninitmaintmslots; //type: uint32
        ydk::YLeaf docsifcmtsupchnlctrusedcntninitmaintmslots; //type: uint32
        ydk::YLeaf docsifcmtsupchnlctrcollcntninitmaintmslots; //type: uint32
        ydk::YLeaf docsifcmtsupchnlctrextcollcntnmslots; //type: uint64
        ydk::YLeaf docsifcmtsupchnlctrexttotalcntnreqmslots; //type: uint64
        ydk::YLeaf docsifcmtsupchnlctrextusedcntnreqmslots; //type: uint64
        ydk::YLeaf docsifcmtsupchnlctrextcollcntnreqmslots; //type: uint64
        ydk::YLeaf docsifcmtsupchnlctrexttotalcntnreqdatamslots; //type: uint64
        ydk::YLeaf docsifcmtsupchnlctrextusedcntnreqdatamslots; //type: uint64
        ydk::YLeaf docsifcmtsupchnlctrextcollcntnreqdatamslots; //type: uint64
        ydk::YLeaf docsifcmtsupchnlctrexttotalcntninitmaintmslots; //type: uint64
        ydk::YLeaf docsifcmtsupchnlctrextusedcntninitmaintmslots; //type: uint64
        ydk::YLeaf docsifcmtsupchnlctrextcollcntninitmaintmslots; //type: uint64

}; // DOCSIFMIB::DocsIfCmtsUpChannelCounterTable::DocsIfCmtsUpChannelCounterEntry

class DocsisUpstreamTypeStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf tdma;
        static const ydk::Enum::YLeaf atdma;
        static const ydk::Enum::YLeaf scdma;

};

class DocsisQosVersion : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf docsis10;
        static const ydk::Enum::YLeaf docsis11;

};

class DocsisUpstreamType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf tdma;
        static const ydk::Enum::YLeaf atdma;
        static const ydk::Enum::YLeaf scdma;
        static const ydk::Enum::YLeaf tdmaAndAtdma;

};

class DocsisVersion : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf docsis10;
        static const ydk::Enum::YLeaf docsis11;
        static const ydk::Enum::YLeaf docsis20;
        static const ydk::Enum::YLeaf docsis30;

};

class DOCSIFMIB::DocsIfDownstreamChannelTable::DocsIfDownstreamChannelEntry::DocsIfDownChannelModulation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf qam64;
        static const ydk::Enum::YLeaf qam256;

};

class DOCSIFMIB::DocsIfDownstreamChannelTable::DocsIfDownstreamChannelEntry::DocsIfDownChannelInterleave : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf taps8Increment16;
        static const ydk::Enum::YLeaf taps16Increment8;
        static const ydk::Enum::YLeaf taps32Increment4;
        static const ydk::Enum::YLeaf taps64Increment2;
        static const ydk::Enum::YLeaf taps128Increment1;
        static const ydk::Enum::YLeaf taps12increment17;

};

class DOCSIFMIB::DocsIfDownstreamChannelTable::DocsIfDownstreamChannelEntry::DocsIfDownChannelAnnex : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf annexA;
        static const ydk::Enum::YLeaf annexB;
        static const ydk::Enum::YLeaf annexC;

};

class DOCSIFMIB::DocsIfCmStatusTable::DocsIfCmStatusEntry::DocsIfCmStatusValue : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf notReady;
        static const ydk::Enum::YLeaf notSynchronized;
        static const ydk::Enum::YLeaf phySynchronized;
        static const ydk::Enum::YLeaf usParametersAcquired;
        static const ydk::Enum::YLeaf rangingComplete;
        static const ydk::Enum::YLeaf ipComplete;
        static const ydk::Enum::YLeaf todEstablished;
        static const ydk::Enum::YLeaf securityEstablished;
        static const ydk::Enum::YLeaf paramTransferComplete;
        static const ydk::Enum::YLeaf registrationComplete;
        static const ydk::Enum::YLeaf operational;
        static const ydk::Enum::YLeaf accessDenied;

};

class DOCSIFMIB::DocsIfCmtsCmStatusTable::DocsIfCmtsCmStatusEntry::DocsIfCmtsCmStatusValue : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf ranging;
        static const ydk::Enum::YLeaf rangingAborted;
        static const ydk::Enum::YLeaf rangingComplete;
        static const ydk::Enum::YLeaf ipComplete;
        static const ydk::Enum::YLeaf registrationComplete;
        static const ydk::Enum::YLeaf accessDenied;
        static const ydk::Enum::YLeaf operational;
        static const ydk::Enum::YLeaf registeredBPIInitializing;

};

class DOCSIFMIB::DocsIfCmtsServiceTable::DocsIfCmtsServiceEntry::DocsIfCmtsServiceAdminStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf destroyed;

};

class DOCSIFMIB::DocsIfCmtsModulationTable::DocsIfCmtsModulationEntry::DocsIfCmtsModIntervalUsageCode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf request;
        static const ydk::Enum::YLeaf requestData;
        static const ydk::Enum::YLeaf initialRanging;
        static const ydk::Enum::YLeaf periodicRanging;
        static const ydk::Enum::YLeaf shortData;
        static const ydk::Enum::YLeaf longData;
        static const ydk::Enum::YLeaf advPhyShortData;
        static const ydk::Enum::YLeaf advPhyLongData;
        static const ydk::Enum::YLeaf ugs;

};

class DOCSIFMIB::DocsIfCmtsModulationTable::DocsIfCmtsModulationEntry::DocsIfCmtsModType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf qpsk;
        static const ydk::Enum::YLeaf qam16;
        static const ydk::Enum::YLeaf qam8;
        static const ydk::Enum::YLeaf qam32;
        static const ydk::Enum::YLeaf qam64;
        static const ydk::Enum::YLeaf qam128;

};

class DOCSIFMIB::DocsIfCmtsModulationTable::DocsIfCmtsModulationEntry::DocsIfCmtsModPreambleType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf qpsk0;
        static const ydk::Enum::YLeaf qpsk1;

};


}
}

#endif /* _DOCS_IF_MIB_ */

