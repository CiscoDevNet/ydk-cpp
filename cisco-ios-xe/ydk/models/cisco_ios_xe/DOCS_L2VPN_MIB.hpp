#ifndef _DOCS_L2VPN_MIB_
#define _DOCS_L2VPN_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace DOCS_L2VPN_MIB {

class DOCSL2VPNMIB : public ydk::Entity
{
    public:
        DOCSL2VPNMIB();
        ~DOCSL2VPNMIB();

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

        class DocsL2vpnIdToIndexTable; //type: DOCSL2VPNMIB::DocsL2vpnIdToIndexTable
        class DocsL2vpnIndexToIdTable; //type: DOCSL2VPNMIB::DocsL2vpnIndexToIdTable
        class DocsL2vpnCmTable; //type: DOCSL2VPNMIB::DocsL2vpnCmTable
        class DocsL2vpnVpnCmTable; //type: DOCSL2VPNMIB::DocsL2vpnVpnCmTable
        class DocsL2vpnVpnCmStatsTable; //type: DOCSL2VPNMIB::DocsL2vpnVpnCmStatsTable
        class DocsL2vpnPortStatusTable; //type: DOCSL2VPNMIB::DocsL2vpnPortStatusTable
        class DocsL2vpnSfStatusTable; //type: DOCSL2VPNMIB::DocsL2vpnSfStatusTable
        class DocsL2vpnPktClassTable; //type: DOCSL2VPNMIB::DocsL2vpnPktClassTable
        class DocsL2vpnCmNsiTable; //type: DOCSL2VPNMIB::DocsL2vpnCmNsiTable
        class DocsL2vpnCmVpnCpeTable; //type: DOCSL2VPNMIB::DocsL2vpnCmVpnCpeTable
        class DocsL2vpnVpnCmCpeTable; //type: DOCSL2VPNMIB::DocsL2vpnVpnCmCpeTable
        class DocsL2vpnDot1qTpFdbExtTable; //type: DOCSL2VPNMIB::DocsL2vpnDot1qTpFdbExtTable
        class DocsL2vpnDot1qTpGroupExtTable; //type: DOCSL2VPNMIB::DocsL2vpnDot1qTpGroupExtTable

        std::shared_ptr<cisco_ios_xe::DOCS_L2VPN_MIB::DOCSL2VPNMIB::DocsL2vpnIdToIndexTable> docsl2vpnidtoindextable;
        std::shared_ptr<cisco_ios_xe::DOCS_L2VPN_MIB::DOCSL2VPNMIB::DocsL2vpnIndexToIdTable> docsl2vpnindextoidtable;
        std::shared_ptr<cisco_ios_xe::DOCS_L2VPN_MIB::DOCSL2VPNMIB::DocsL2vpnCmTable> docsl2vpncmtable;
        std::shared_ptr<cisco_ios_xe::DOCS_L2VPN_MIB::DOCSL2VPNMIB::DocsL2vpnVpnCmTable> docsl2vpnvpncmtable;
        std::shared_ptr<cisco_ios_xe::DOCS_L2VPN_MIB::DOCSL2VPNMIB::DocsL2vpnVpnCmStatsTable> docsl2vpnvpncmstatstable;
        std::shared_ptr<cisco_ios_xe::DOCS_L2VPN_MIB::DOCSL2VPNMIB::DocsL2vpnPortStatusTable> docsl2vpnportstatustable;
        std::shared_ptr<cisco_ios_xe::DOCS_L2VPN_MIB::DOCSL2VPNMIB::DocsL2vpnSfStatusTable> docsl2vpnsfstatustable;
        std::shared_ptr<cisco_ios_xe::DOCS_L2VPN_MIB::DOCSL2VPNMIB::DocsL2vpnPktClassTable> docsl2vpnpktclasstable;
        std::shared_ptr<cisco_ios_xe::DOCS_L2VPN_MIB::DOCSL2VPNMIB::DocsL2vpnCmNsiTable> docsl2vpncmnsitable;
        std::shared_ptr<cisco_ios_xe::DOCS_L2VPN_MIB::DOCSL2VPNMIB::DocsL2vpnCmVpnCpeTable> docsl2vpncmvpncpetable;
        std::shared_ptr<cisco_ios_xe::DOCS_L2VPN_MIB::DOCSL2VPNMIB::DocsL2vpnVpnCmCpeTable> docsl2vpnvpncmcpetable;
        std::shared_ptr<cisco_ios_xe::DOCS_L2VPN_MIB::DOCSL2VPNMIB::DocsL2vpnDot1qTpFdbExtTable> docsl2vpndot1qtpfdbexttable;
        std::shared_ptr<cisco_ios_xe::DOCS_L2VPN_MIB::DOCSL2VPNMIB::DocsL2vpnDot1qTpGroupExtTable> docsl2vpndot1qtpgroupexttable;
        
}; // DOCSL2VPNMIB


class DOCSL2VPNMIB::DocsL2vpnIdToIndexTable : public ydk::Entity
{
    public:
        DocsL2vpnIdToIndexTable();
        ~DocsL2vpnIdToIndexTable();

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

        class DocsL2vpnIdToIndexEntry; //type: DOCSL2VPNMIB::DocsL2vpnIdToIndexTable::DocsL2vpnIdToIndexEntry

        ydk::YList docsl2vpnidtoindexentry;
        
}; // DOCSL2VPNMIB::DocsL2vpnIdToIndexTable


class DOCSL2VPNMIB::DocsL2vpnIdToIndexTable::DocsL2vpnIdToIndexEntry : public ydk::Entity
{
    public:
        DocsL2vpnIdToIndexEntry();
        ~DocsL2vpnIdToIndexEntry();

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

        ydk::YLeaf docsl2vpnid; //type: string
        ydk::YLeaf docsl2vpnidtoindexidx; //type: uint32

}; // DOCSL2VPNMIB::DocsL2vpnIdToIndexTable::DocsL2vpnIdToIndexEntry


class DOCSL2VPNMIB::DocsL2vpnIndexToIdTable : public ydk::Entity
{
    public:
        DocsL2vpnIndexToIdTable();
        ~DocsL2vpnIndexToIdTable();

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

        class DocsL2vpnIndexToIdEntry; //type: DOCSL2VPNMIB::DocsL2vpnIndexToIdTable::DocsL2vpnIndexToIdEntry

        ydk::YList docsl2vpnindextoidentry;
        
}; // DOCSL2VPNMIB::DocsL2vpnIndexToIdTable


class DOCSL2VPNMIB::DocsL2vpnIndexToIdTable::DocsL2vpnIndexToIdEntry : public ydk::Entity
{
    public:
        DocsL2vpnIndexToIdEntry();
        ~DocsL2vpnIndexToIdEntry();

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

        ydk::YLeaf docsl2vpnidx; //type: uint32
        ydk::YLeaf docsl2vpnindextoidid; //type: string

}; // DOCSL2VPNMIB::DocsL2vpnIndexToIdTable::DocsL2vpnIndexToIdEntry


class DOCSL2VPNMIB::DocsL2vpnCmTable : public ydk::Entity
{
    public:
        DocsL2vpnCmTable();
        ~DocsL2vpnCmTable();

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

        class DocsL2vpnCmEntry; //type: DOCSL2VPNMIB::DocsL2vpnCmTable::DocsL2vpnCmEntry

        ydk::YList docsl2vpncmentry;
        
}; // DOCSL2VPNMIB::DocsL2vpnCmTable


class DOCSL2VPNMIB::DocsL2vpnCmTable::DocsL2vpnCmEntry : public ydk::Entity
{
    public:
        DocsL2vpnCmEntry();
        ~DocsL2vpnCmEntry();

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

        //type: int32 (refers to cisco_ios_xe::DOCS_IF_MIB::DOCSIFMIB::DocsIfCmtsCmStatusTable::DocsIfCmtsCmStatusEntry::docsifcmtscmstatusindex)
        ydk::YLeaf docsifcmtscmstatusindex;
        ydk::YLeaf docsl2vpncmcompliantcapability; //type: boolean
        ydk::YLeaf docsl2vpncmdutfilteringcapability; //type: boolean
        ydk::YLeaf docsl2vpncmdutcmim; //type: binary
        ydk::YLeaf docsl2vpncmdhcpsnooping; //type: DocsL2vpnIfList

}; // DOCSL2VPNMIB::DocsL2vpnCmTable::DocsL2vpnCmEntry


class DOCSL2VPNMIB::DocsL2vpnVpnCmTable : public ydk::Entity
{
    public:
        DocsL2vpnVpnCmTable();
        ~DocsL2vpnVpnCmTable();

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

        class DocsL2vpnVpnCmEntry; //type: DOCSL2VPNMIB::DocsL2vpnVpnCmTable::DocsL2vpnVpnCmEntry

        ydk::YList docsl2vpnvpncmentry;
        
}; // DOCSL2VPNMIB::DocsL2vpnVpnCmTable


class DOCSL2VPNMIB::DocsL2vpnVpnCmTable::DocsL2vpnVpnCmEntry : public ydk::Entity
{
    public:
        DocsL2vpnVpnCmEntry();
        ~DocsL2vpnVpnCmEntry();

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

        //type: uint32 (refers to cisco_ios_xe::DOCS_L2VPN_MIB::DOCSL2VPNMIB::DocsL2vpnIndexToIdTable::DocsL2vpnIndexToIdEntry::docsl2vpnidx)
        ydk::YLeaf docsl2vpnidx;
        //type: int32 (refers to cisco_ios_xe::DOCS_IF_MIB::DOCSIFMIB::DocsIfCmtsCmStatusTable::DocsIfCmtsCmStatusEntry::docsifcmtscmstatusindex)
        ydk::YLeaf docsifcmtscmstatusindex;
        ydk::YLeaf docsl2vpnvpncmcmim; //type: DocsL2vpnIfList
        ydk::YLeaf docsl2vpnvpncmindividualsaid; //type: int32
        ydk::YLeaf docsl2vpnvpncmvendorspecific; //type: binary

}; // DOCSL2VPNMIB::DocsL2vpnVpnCmTable::DocsL2vpnVpnCmEntry


class DOCSL2VPNMIB::DocsL2vpnVpnCmStatsTable : public ydk::Entity
{
    public:
        DocsL2vpnVpnCmStatsTable();
        ~DocsL2vpnVpnCmStatsTable();

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

        class DocsL2vpnVpnCmStatsEntry; //type: DOCSL2VPNMIB::DocsL2vpnVpnCmStatsTable::DocsL2vpnVpnCmStatsEntry

        ydk::YList docsl2vpnvpncmstatsentry;
        
}; // DOCSL2VPNMIB::DocsL2vpnVpnCmStatsTable


class DOCSL2VPNMIB::DocsL2vpnVpnCmStatsTable::DocsL2vpnVpnCmStatsEntry : public ydk::Entity
{
    public:
        DocsL2vpnVpnCmStatsEntry();
        ~DocsL2vpnVpnCmStatsEntry();

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

        //type: uint32 (refers to cisco_ios_xe::DOCS_L2VPN_MIB::DOCSL2VPNMIB::DocsL2vpnIndexToIdTable::DocsL2vpnIndexToIdEntry::docsl2vpnidx)
        ydk::YLeaf docsl2vpnidx;
        //type: int32 (refers to cisco_ios_xe::DOCS_IF_MIB::DOCSIFMIB::DocsIfCmtsCmStatusTable::DocsIfCmtsCmStatusEntry::docsifcmtscmstatusindex)
        ydk::YLeaf docsifcmtscmstatusindex;
        ydk::YLeaf docsl2vpnvpncmstatsupstreampkts; //type: uint32
        ydk::YLeaf docsl2vpnvpncmstatsupstreambytes; //type: uint32
        ydk::YLeaf docsl2vpnvpncmstatsupstreamdiscards; //type: uint32
        ydk::YLeaf docsl2vpnvpncmstatsdownstreampkts; //type: uint32
        ydk::YLeaf docsl2vpnvpncmstatsdownstreambytes; //type: uint32
        ydk::YLeaf docsl2vpnvpncmstatsdownstreamdiscards; //type: uint32

}; // DOCSL2VPNMIB::DocsL2vpnVpnCmStatsTable::DocsL2vpnVpnCmStatsEntry


class DOCSL2VPNMIB::DocsL2vpnPortStatusTable : public ydk::Entity
{
    public:
        DocsL2vpnPortStatusTable();
        ~DocsL2vpnPortStatusTable();

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

        class DocsL2vpnPortStatusEntry; //type: DOCSL2VPNMIB::DocsL2vpnPortStatusTable::DocsL2vpnPortStatusEntry

        ydk::YList docsl2vpnportstatusentry;
        
}; // DOCSL2VPNMIB::DocsL2vpnPortStatusTable


class DOCSL2VPNMIB::DocsL2vpnPortStatusTable::DocsL2vpnPortStatusEntry : public ydk::Entity
{
    public:
        DocsL2vpnPortStatusEntry();
        ~DocsL2vpnPortStatusEntry();

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

        //type: int32 (refers to cisco_ios_xe::BRIDGE_MIB::BRIDGEMIB::Dot1dBasePortTable::Dot1dBasePortEntry::dot1dbaseport)
        ydk::YLeaf dot1dbaseport;
        //type: uint32 (refers to cisco_ios_xe::DOCS_L2VPN_MIB::DOCSL2VPNMIB::DocsL2vpnIndexToIdTable::DocsL2vpnIndexToIdEntry::docsl2vpnidx)
        ydk::YLeaf docsl2vpnidx;
        ydk::YLeaf docsl2vpnportstatusgroupsaid; //type: int32

}; // DOCSL2VPNMIB::DocsL2vpnPortStatusTable::DocsL2vpnPortStatusEntry


class DOCSL2VPNMIB::DocsL2vpnSfStatusTable : public ydk::Entity
{
    public:
        DocsL2vpnSfStatusTable();
        ~DocsL2vpnSfStatusTable();

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

        class DocsL2vpnSfStatusEntry; //type: DOCSL2VPNMIB::DocsL2vpnSfStatusTable::DocsL2vpnSfStatusEntry

        ydk::YList docsl2vpnsfstatusentry;
        
}; // DOCSL2VPNMIB::DocsL2vpnSfStatusTable


class DOCSL2VPNMIB::DocsL2vpnSfStatusTable::DocsL2vpnSfStatusEntry : public ydk::Entity
{
    public:
        DocsL2vpnSfStatusEntry();
        ~DocsL2vpnSfStatusEntry();

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
        //type: uint32 (refers to cisco_ios_xe::DOCS_QOS_MIB::DOCSQOSMIB::DocsQosServiceFlowTable::DocsQosServiceFlowEntry::docsqosserviceflowid)
        ydk::YLeaf docsqosserviceflowid;
        ydk::YLeaf docsl2vpnsfstatusl2vpnid; //type: binary
        ydk::YLeaf docsl2vpnsfstatusingressuserpriority; //type: uint32
        ydk::YLeaf docsl2vpnsfstatusvendorspecific; //type: binary

}; // DOCSL2VPNMIB::DocsL2vpnSfStatusTable::DocsL2vpnSfStatusEntry


class DOCSL2VPNMIB::DocsL2vpnPktClassTable : public ydk::Entity
{
    public:
        DocsL2vpnPktClassTable();
        ~DocsL2vpnPktClassTable();

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

        class DocsL2vpnPktClassEntry; //type: DOCSL2VPNMIB::DocsL2vpnPktClassTable::DocsL2vpnPktClassEntry

        ydk::YList docsl2vpnpktclassentry;
        
}; // DOCSL2VPNMIB::DocsL2vpnPktClassTable


class DOCSL2VPNMIB::DocsL2vpnPktClassTable::DocsL2vpnPktClassEntry : public ydk::Entity
{
    public:
        DocsL2vpnPktClassEntry();
        ~DocsL2vpnPktClassEntry();

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
        //type: uint32 (refers to cisco_ios_xe::DOCS_QOS_MIB::DOCSQOSMIB::DocsQosServiceFlowTable::DocsQosServiceFlowEntry::docsqosserviceflowid)
        ydk::YLeaf docsqosserviceflowid;
        //type: int32 (refers to cisco_ios_xe::DOCS_QOS_MIB::DOCSQOSMIB::DocsQosPktClassTable::DocsQosPktClassEntry::docsqospktclassid)
        ydk::YLeaf docsqospktclassid;
        ydk::YLeaf docsl2vpnpktclassl2vpnid; //type: string
        ydk::YLeaf docsl2vpnpktclassuserprirangelow; //type: uint32
        ydk::YLeaf docsl2vpnpktclassuserprirangehigh; //type: uint32
        ydk::YLeaf docsl2vpnpktclasscmim; //type: DocsL2vpnIfList
        ydk::YLeaf docsl2vpnpktclassvendorspecific; //type: binary

}; // DOCSL2VPNMIB::DocsL2vpnPktClassTable::DocsL2vpnPktClassEntry


class DOCSL2VPNMIB::DocsL2vpnCmNsiTable : public ydk::Entity
{
    public:
        DocsL2vpnCmNsiTable();
        ~DocsL2vpnCmNsiTable();

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

        class DocsL2vpnCmNsiEntry; //type: DOCSL2VPNMIB::DocsL2vpnCmNsiTable::DocsL2vpnCmNsiEntry

        ydk::YList docsl2vpncmnsientry;
        
}; // DOCSL2VPNMIB::DocsL2vpnCmNsiTable


class DOCSL2VPNMIB::DocsL2vpnCmNsiTable::DocsL2vpnCmNsiEntry : public ydk::Entity
{
    public:
        DocsL2vpnCmNsiEntry();
        ~DocsL2vpnCmNsiEntry();

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

        //type: uint32 (refers to cisco_ios_xe::DOCS_L2VPN_MIB::DOCSL2VPNMIB::DocsL2vpnIndexToIdTable::DocsL2vpnIndexToIdEntry::docsl2vpnidx)
        ydk::YLeaf docsl2vpnidx;
        //type: int32 (refers to cisco_ios_xe::DOCS_IF_MIB::DOCSIFMIB::DocsIfCmtsCmStatusTable::DocsIfCmtsCmStatusEntry::docsifcmtscmstatusindex)
        ydk::YLeaf docsifcmtscmstatusindex;
        ydk::YLeaf docsl2vpncmnsiencapsubtype; //type: DocsNsiEncapSubtype
        ydk::YLeaf docsl2vpncmnsiencapvalue; //type: binary
        ydk::YLeaf docsl2vpncmnsiagi; //type: binary
        ydk::YLeaf docsl2vpncmnsisaii; //type: binary
        ydk::YLeaf docsl2vpncmnsitaii; //type: binary

}; // DOCSL2VPNMIB::DocsL2vpnCmNsiTable::DocsL2vpnCmNsiEntry


class DOCSL2VPNMIB::DocsL2vpnCmVpnCpeTable : public ydk::Entity
{
    public:
        DocsL2vpnCmVpnCpeTable();
        ~DocsL2vpnCmVpnCpeTable();

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

        class DocsL2vpnCmVpnCpeEntry; //type: DOCSL2VPNMIB::DocsL2vpnCmVpnCpeTable::DocsL2vpnCmVpnCpeEntry

        ydk::YList docsl2vpncmvpncpeentry;
        
}; // DOCSL2VPNMIB::DocsL2vpnCmVpnCpeTable


class DOCSL2VPNMIB::DocsL2vpnCmVpnCpeTable::DocsL2vpnCmVpnCpeEntry : public ydk::Entity
{
    public:
        DocsL2vpnCmVpnCpeEntry();
        ~DocsL2vpnCmVpnCpeEntry();

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

        //type: int32 (refers to cisco_ios_xe::DOCS_IF_MIB::DOCSIFMIB::DocsIfCmtsCmStatusTable::DocsIfCmtsCmStatusEntry::docsifcmtscmstatusindex)
        ydk::YLeaf docsifcmtscmstatusindex;
        //type: uint32 (refers to cisco_ios_xe::DOCS_L2VPN_MIB::DOCSL2VPNMIB::DocsL2vpnIndexToIdTable::DocsL2vpnIndexToIdEntry::docsl2vpnidx)
        ydk::YLeaf docsl2vpnidx;
        ydk::YLeaf docsl2vpncmvpncpemacaddress; //type: string

}; // DOCSL2VPNMIB::DocsL2vpnCmVpnCpeTable::DocsL2vpnCmVpnCpeEntry


class DOCSL2VPNMIB::DocsL2vpnVpnCmCpeTable : public ydk::Entity
{
    public:
        DocsL2vpnVpnCmCpeTable();
        ~DocsL2vpnVpnCmCpeTable();

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

        class DocsL2vpnVpnCmCpeEntry; //type: DOCSL2VPNMIB::DocsL2vpnVpnCmCpeTable::DocsL2vpnVpnCmCpeEntry

        ydk::YList docsl2vpnvpncmcpeentry;
        
}; // DOCSL2VPNMIB::DocsL2vpnVpnCmCpeTable


class DOCSL2VPNMIB::DocsL2vpnVpnCmCpeTable::DocsL2vpnVpnCmCpeEntry : public ydk::Entity
{
    public:
        DocsL2vpnVpnCmCpeEntry();
        ~DocsL2vpnVpnCmCpeEntry();

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

        //type: uint32 (refers to cisco_ios_xe::DOCS_L2VPN_MIB::DOCSL2VPNMIB::DocsL2vpnIndexToIdTable::DocsL2vpnIndexToIdEntry::docsl2vpnidx)
        ydk::YLeaf docsl2vpnidx;
        //type: int32 (refers to cisco_ios_xe::DOCS_IF_MIB::DOCSIFMIB::DocsIfCmtsCmStatusTable::DocsIfCmtsCmStatusEntry::docsifcmtscmstatusindex)
        ydk::YLeaf docsifcmtscmstatusindex;
        ydk::YLeaf docsl2vpnvpncmcpemacaddress; //type: string

}; // DOCSL2VPNMIB::DocsL2vpnVpnCmCpeTable::DocsL2vpnVpnCmCpeEntry


class DOCSL2VPNMIB::DocsL2vpnDot1qTpFdbExtTable : public ydk::Entity
{
    public:
        DocsL2vpnDot1qTpFdbExtTable();
        ~DocsL2vpnDot1qTpFdbExtTable();

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

        class DocsL2vpnDot1qTpFdbExtEntry; //type: DOCSL2VPNMIB::DocsL2vpnDot1qTpFdbExtTable::DocsL2vpnDot1qTpFdbExtEntry

        ydk::YList docsl2vpndot1qtpfdbextentry;
        
}; // DOCSL2VPNMIB::DocsL2vpnDot1qTpFdbExtTable


class DOCSL2VPNMIB::DocsL2vpnDot1qTpFdbExtTable::DocsL2vpnDot1qTpFdbExtEntry : public ydk::Entity
{
    public:
        DocsL2vpnDot1qTpFdbExtEntry();
        ~DocsL2vpnDot1qTpFdbExtEntry();

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

        //type: uint32 (refers to cisco_ios_xe::Q_BRIDGE_MIB::QBRIDGEMIB::Dot1qFdbTable::Dot1qFdbEntry::dot1qfdbid)
        ydk::YLeaf dot1qfdbid;
        //type: string (refers to cisco_ios_xe::Q_BRIDGE_MIB::QBRIDGEMIB::Dot1qTpFdbTable::Dot1qTpFdbEntry::dot1qtpfdbaddress)
        ydk::YLeaf dot1qtpfdbaddress;
        ydk::YLeaf docsl2vpndot1qtpfdbexttransmitpkts; //type: uint32
        ydk::YLeaf docsl2vpndot1qtpfdbextreceivepkts; //type: uint32

}; // DOCSL2VPNMIB::DocsL2vpnDot1qTpFdbExtTable::DocsL2vpnDot1qTpFdbExtEntry


class DOCSL2VPNMIB::DocsL2vpnDot1qTpGroupExtTable : public ydk::Entity
{
    public:
        DocsL2vpnDot1qTpGroupExtTable();
        ~DocsL2vpnDot1qTpGroupExtTable();

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

        class DocsL2vpnDot1qTpGroupExtEntry; //type: DOCSL2VPNMIB::DocsL2vpnDot1qTpGroupExtTable::DocsL2vpnDot1qTpGroupExtEntry

        ydk::YList docsl2vpndot1qtpgroupextentry;
        
}; // DOCSL2VPNMIB::DocsL2vpnDot1qTpGroupExtTable


class DOCSL2VPNMIB::DocsL2vpnDot1qTpGroupExtTable::DocsL2vpnDot1qTpGroupExtEntry : public ydk::Entity
{
    public:
        DocsL2vpnDot1qTpGroupExtEntry();
        ~DocsL2vpnDot1qTpGroupExtEntry();

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

        //type: uint32 (refers to cisco_ios_xe::Q_BRIDGE_MIB::QBRIDGEMIB::Dot1qVlanCurrentTable::Dot1qVlanCurrentEntry::dot1qvlanindex)
        ydk::YLeaf dot1qvlanindex;
        //type: string (refers to cisco_ios_xe::Q_BRIDGE_MIB::QBRIDGEMIB::Dot1qTpGroupTable::Dot1qTpGroupEntry::dot1qtpgroupaddress)
        ydk::YLeaf dot1qtpgroupaddress;
        ydk::YLeaf docsl2vpndot1qtpgroupexttransmitpkts; //type: uint32
        ydk::YLeaf docsl2vpndot1qtpgroupextreceivepkts; //type: uint32

}; // DOCSL2VPNMIB::DocsL2vpnDot1qTpGroupExtTable::DocsL2vpnDot1qTpGroupExtEntry

class DocsNsiEncapSubtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf ieee8021q;
        static const ydk::Enum::YLeaf ieee8021ad;
        static const ydk::Enum::YLeaf mpls;
        static const ydk::Enum::YLeaf l2tpv3;

        static int get_enum_value(const std::string & name) {
            if (name == "other") return 1;
            if (name == "ieee8021q") return 2;
            if (name == "ieee8021ad") return 3;
            if (name == "mpls") return 4;
            if (name == "l2tpv3") return 5;
            return -1;
        }
};


}
}

#endif /* _DOCS_L2VPN_MIB_ */

