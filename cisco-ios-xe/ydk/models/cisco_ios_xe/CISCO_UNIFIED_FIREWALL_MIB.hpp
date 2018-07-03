#ifndef _CISCO_UNIFIED_FIREWALL_MIB_
#define _CISCO_UNIFIED_FIREWALL_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_UNIFIED_FIREWALL_MIB {

class CISCOUNIFIEDFIREWALLMIB : public ydk::Entity
{
    public:
        CISCOUNIFIEDFIREWALLMIB();
        ~CISCOUNIFIEDFIREWALLMIB();

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

        class CuFwConnectionGlobals; //type: CISCOUNIFIEDFIREWALLMIB::CuFwConnectionGlobals
        class CuFwConnectionResources; //type: CISCOUNIFIEDFIREWALLMIB::CuFwConnectionResources
        class CuFwConnectionReportSettings; //type: CISCOUNIFIEDFIREWALLMIB::CuFwConnectionReportSettings
        class CuFwApplInspectionGrp; //type: CISCOUNIFIEDFIREWALLMIB::CuFwApplInspectionGrp
        class CufwUrlFilterGlobals; //type: CISCOUNIFIEDFIREWALLMIB::CufwUrlFilterGlobals
        class CufwUrlFilterResourceUsage; //type: CISCOUNIFIEDFIREWALLMIB::CufwUrlFilterResourceUsage
        class CufwAaicGlobals; //type: CISCOUNIFIEDFIREWALLMIB::CufwAaicGlobals
        class CufwAaicHttpProtocolStats; //type: CISCOUNIFIEDFIREWALLMIB::CufwAaicHttpProtocolStats
        class CufwL2FwGlobals; //type: CISCOUNIFIEDFIREWALLMIB::CufwL2FwGlobals
        class CuFwNotifCntlGrp; //type: CISCOUNIFIEDFIREWALLMIB::CuFwNotifCntlGrp
        class CufwConnSummaryTable; //type: CISCOUNIFIEDFIREWALLMIB::CufwConnSummaryTable
        class CufwAppConnSummaryTable; //type: CISCOUNIFIEDFIREWALLMIB::CufwAppConnSummaryTable
        class CufwPolicyConnSummaryTable; //type: CISCOUNIFIEDFIREWALLMIB::CufwPolicyConnSummaryTable
        class CufwPolicyAppConnSummaryTable; //type: CISCOUNIFIEDFIREWALLMIB::CufwPolicyAppConnSummaryTable
        class CufwInspectionTable; //type: CISCOUNIFIEDFIREWALLMIB::CufwInspectionTable
        class CufwUrlfServerTable; //type: CISCOUNIFIEDFIREWALLMIB::CufwUrlfServerTable

        std::shared_ptr<cisco_ios_xe::CISCO_UNIFIED_FIREWALL_MIB::CISCOUNIFIEDFIREWALLMIB::CuFwConnectionGlobals> cufwconnectionglobals;
        std::shared_ptr<cisco_ios_xe::CISCO_UNIFIED_FIREWALL_MIB::CISCOUNIFIEDFIREWALLMIB::CuFwConnectionResources> cufwconnectionresources;
        std::shared_ptr<cisco_ios_xe::CISCO_UNIFIED_FIREWALL_MIB::CISCOUNIFIEDFIREWALLMIB::CuFwConnectionReportSettings> cufwconnectionreportsettings;
        std::shared_ptr<cisco_ios_xe::CISCO_UNIFIED_FIREWALL_MIB::CISCOUNIFIEDFIREWALLMIB::CuFwApplInspectionGrp> cufwapplinspectiongrp;
        std::shared_ptr<cisco_ios_xe::CISCO_UNIFIED_FIREWALL_MIB::CISCOUNIFIEDFIREWALLMIB::CufwUrlFilterGlobals> cufwurlfilterglobals;
        std::shared_ptr<cisco_ios_xe::CISCO_UNIFIED_FIREWALL_MIB::CISCOUNIFIEDFIREWALLMIB::CufwUrlFilterResourceUsage> cufwurlfilterresourceusage;
        std::shared_ptr<cisco_ios_xe::CISCO_UNIFIED_FIREWALL_MIB::CISCOUNIFIEDFIREWALLMIB::CufwAaicGlobals> cufwaaicglobals;
        std::shared_ptr<cisco_ios_xe::CISCO_UNIFIED_FIREWALL_MIB::CISCOUNIFIEDFIREWALLMIB::CufwAaicHttpProtocolStats> cufwaaichttpprotocolstats;
        std::shared_ptr<cisco_ios_xe::CISCO_UNIFIED_FIREWALL_MIB::CISCOUNIFIEDFIREWALLMIB::CufwL2FwGlobals> cufwl2fwglobals;
        std::shared_ptr<cisco_ios_xe::CISCO_UNIFIED_FIREWALL_MIB::CISCOUNIFIEDFIREWALLMIB::CuFwNotifCntlGrp> cufwnotifcntlgrp;
        std::shared_ptr<cisco_ios_xe::CISCO_UNIFIED_FIREWALL_MIB::CISCOUNIFIEDFIREWALLMIB::CufwConnSummaryTable> cufwconnsummarytable;
        std::shared_ptr<cisco_ios_xe::CISCO_UNIFIED_FIREWALL_MIB::CISCOUNIFIEDFIREWALLMIB::CufwAppConnSummaryTable> cufwappconnsummarytable;
        std::shared_ptr<cisco_ios_xe::CISCO_UNIFIED_FIREWALL_MIB::CISCOUNIFIEDFIREWALLMIB::CufwPolicyConnSummaryTable> cufwpolicyconnsummarytable;
        std::shared_ptr<cisco_ios_xe::CISCO_UNIFIED_FIREWALL_MIB::CISCOUNIFIEDFIREWALLMIB::CufwPolicyAppConnSummaryTable> cufwpolicyappconnsummarytable;
        std::shared_ptr<cisco_ios_xe::CISCO_UNIFIED_FIREWALL_MIB::CISCOUNIFIEDFIREWALLMIB::CufwInspectionTable> cufwinspectiontable;
        std::shared_ptr<cisco_ios_xe::CISCO_UNIFIED_FIREWALL_MIB::CISCOUNIFIEDFIREWALLMIB::CufwUrlfServerTable> cufwurlfservertable;
        
}; // CISCOUNIFIEDFIREWALLMIB


class CISCOUNIFIEDFIREWALLMIB::CuFwConnectionGlobals : public ydk::Entity
{
    public:
        CuFwConnectionGlobals();
        ~CuFwConnectionGlobals();

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

        ydk::YLeaf cufwconnglobalnumattempted; //type: uint64
        ydk::YLeaf cufwconnglobalnumsetupsaborted; //type: uint64
        ydk::YLeaf cufwconnglobalnumpolicydeclined; //type: uint64
        ydk::YLeaf cufwconnglobalnumresdeclined; //type: uint64
        ydk::YLeaf cufwconnglobalnumhalfopen; //type: uint32
        ydk::YLeaf cufwconnglobalnumactive; //type: uint32
        ydk::YLeaf cufwconnglobalnumexpired; //type: uint64
        ydk::YLeaf cufwconnglobalnumaborted; //type: uint64
        ydk::YLeaf cufwconnglobalnumembryonic; //type: uint32
        ydk::YLeaf cufwconnglobalconnsetuprate1; //type: uint32
        ydk::YLeaf cufwconnglobalconnsetuprate5; //type: uint32
        ydk::YLeaf cufwconnglobalnumremoteaccess; //type: uint32

}; // CISCOUNIFIEDFIREWALLMIB::CuFwConnectionGlobals


class CISCOUNIFIEDFIREWALLMIB::CuFwConnectionResources : public ydk::Entity
{
    public:
        CuFwConnectionResources();
        ~CuFwConnectionResources();

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

        ydk::YLeaf cufwconnresmemoryusage; //type: uint32
        ydk::YLeaf cufwconnresactiveconnmemoryusage; //type: uint32
        ydk::YLeaf cufwconnreshoconnmemoryusage; //type: uint32
        ydk::YLeaf cufwconnresembrconnmemoryusage; //type: uint32

}; // CISCOUNIFIEDFIREWALLMIB::CuFwConnectionResources


class CISCOUNIFIEDFIREWALLMIB::CuFwConnectionReportSettings : public ydk::Entity
{
    public:
        CuFwConnectionReportSettings();
        ~CuFwConnectionReportSettings();

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

        ydk::YLeaf cufwconnreptappstats; //type: boolean
        ydk::YLeaf cufwconnreptappstatslastchanged; //type: uint32

}; // CISCOUNIFIEDFIREWALLMIB::CuFwConnectionReportSettings


class CISCOUNIFIEDFIREWALLMIB::CuFwApplInspectionGrp : public ydk::Entity
{
    public:
        CuFwApplInspectionGrp();
        ~CuFwApplInspectionGrp();

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

        ydk::YLeaf cufwaiaudittrailenabled; //type: boolean
        ydk::YLeaf cufwaialertenabled; //type: boolean

}; // CISCOUNIFIEDFIREWALLMIB::CuFwApplInspectionGrp


class CISCOUNIFIEDFIREWALLMIB::CufwUrlFilterGlobals : public ydk::Entity
{
    public:
        CufwUrlFilterGlobals();
        ~CufwUrlFilterGlobals();

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

        ydk::YLeaf cufwurlffunctionenabled; //type: uint32
        ydk::YLeaf cufwurlfrequestsnumprocessed; //type: uint64
        ydk::YLeaf cufwurlfrequestsprocrate1; //type: uint32
        ydk::YLeaf cufwurlfrequestsprocrate5; //type: uint32
        ydk::YLeaf cufwurlfrequestsnumallowed; //type: uint64
        ydk::YLeaf cufwurlfrequestsnumdenied; //type: uint64
        ydk::YLeaf cufwurlfrequestsdeniedrate1; //type: uint32
        ydk::YLeaf cufwurlfrequestsdeniedrate5; //type: uint32
        ydk::YLeaf cufwurlfrequestsnumcacheallowed; //type: uint64
        ydk::YLeaf cufwurlfrequestsnumcachedenied; //type: uint64
        ydk::YLeaf cufwurlfallowmodereqnumallowed; //type: uint64
        ydk::YLeaf cufwurlfallowmodereqnumdenied; //type: uint64
        ydk::YLeaf cufwurlfrequestsnumresdropped; //type: uint64
        ydk::YLeaf cufwurlfrequestsresdroprate1; //type: uint32
        ydk::YLeaf cufwurlfrequestsresdroprate5; //type: uint32
        ydk::YLeaf cufwurlfnumservertimeouts; //type: uint64
        ydk::YLeaf cufwurlfnumserverretries; //type: uint64
        ydk::YLeaf cufwurlfresponsesnumlate; //type: uint64
        ydk::YLeaf cufwurlfurlaccrespsnumresdropped; //type: uint64

}; // CISCOUNIFIEDFIREWALLMIB::CufwUrlFilterGlobals


class CISCOUNIFIEDFIREWALLMIB::CufwUrlFilterResourceUsage : public ydk::Entity
{
    public:
        CufwUrlFilterResourceUsage();
        ~CufwUrlFilterResourceUsage();

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

        ydk::YLeaf cufwurlfrestotalrequestcachesize; //type: uint32
        ydk::YLeaf cufwurlfrestotalrespcachesize; //type: uint32

}; // CISCOUNIFIEDFIREWALLMIB::CufwUrlFilterResourceUsage


class CISCOUNIFIEDFIREWALLMIB::CufwAaicGlobals : public ydk::Entity
{
    public:
        CufwAaicGlobals();
        ~CufwAaicGlobals();

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

        ydk::YLeaf cufwaaicglobalnumbadprotocolops; //type: uint64
        ydk::YLeaf cufwaaicglobalnumbadpdusize; //type: uint64
        ydk::YLeaf cufwaaicglobalnumbadportrange; //type: uint64

}; // CISCOUNIFIEDFIREWALLMIB::CufwAaicGlobals


class CISCOUNIFIEDFIREWALLMIB::CufwAaicHttpProtocolStats : public ydk::Entity
{
    public:
        CufwAaicHttpProtocolStats();
        ~CufwAaicHttpProtocolStats();

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

        ydk::YLeaf cufwaaichttpnumbadprotocolops; //type: uint64
        ydk::YLeaf cufwaaichttpnumbadpdusize; //type: uint64
        ydk::YLeaf cufwaaichttpnumtunneledconns; //type: uint64
        ydk::YLeaf cufwaaichttpnumlargeuris; //type: uint64
        ydk::YLeaf cufwaaichttpnumbadcontent; //type: uint64
        ydk::YLeaf cufwaaichttpnummismatchcontent; //type: uint64
        ydk::YLeaf cufwaaichttpnumdoubleencodedpkts; //type: uint64

}; // CISCOUNIFIEDFIREWALLMIB::CufwAaicHttpProtocolStats


class CISCOUNIFIEDFIREWALLMIB::CufwL2FwGlobals : public ydk::Entity
{
    public:
        CufwL2FwGlobals();
        ~CufwL2FwGlobals();

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

        ydk::YLeaf cufwl2globalenablestealthmode; //type: boolean
        ydk::YLeaf cufwl2globalarpcachesize; //type: int32
        ydk::YLeaf cufwl2globalenablearpinspection; //type: boolean
        ydk::YLeaf cufwl2globalnumarprequests; //type: uint64
        ydk::YLeaf cufwl2globalnumicmprequests; //type: uint64
        ydk::YLeaf cufwl2globalnumfloods; //type: uint64
        ydk::YLeaf cufwl2globalnumdrops; //type: uint64
        ydk::YLeaf cufwl2globalarpoverflowrate5; //type: uint32
        ydk::YLeaf cufwl2globalnumbadarpresponses; //type: uint64
        ydk::YLeaf cufwl2globalnumspoofedarpresps; //type: uint64

}; // CISCOUNIFIEDFIREWALLMIB::CufwL2FwGlobals


class CISCOUNIFIEDFIREWALLMIB::CuFwNotifCntlGrp : public ydk::Entity
{
    public:
        CuFwNotifCntlGrp();
        ~CuFwNotifCntlGrp();

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

        ydk::YLeaf cufwcntlurlfserverstatuschange; //type: boolean
        ydk::YLeaf cufwcntll2staticmacaddressmoved; //type: boolean

}; // CISCOUNIFIEDFIREWALLMIB::CuFwNotifCntlGrp


class CISCOUNIFIEDFIREWALLMIB::CufwConnSummaryTable : public ydk::Entity
{
    public:
        CufwConnSummaryTable();
        ~CufwConnSummaryTable();

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

        class CufwConnSummaryEntry; //type: CISCOUNIFIEDFIREWALLMIB::CufwConnSummaryTable::CufwConnSummaryEntry

        ydk::YList cufwconnsummaryentry;
        
}; // CISCOUNIFIEDFIREWALLMIB::CufwConnSummaryTable


class CISCOUNIFIEDFIREWALLMIB::CufwConnSummaryTable::CufwConnSummaryEntry : public ydk::Entity
{
    public:
        CufwConnSummaryEntry();
        ~CufwConnSummaryEntry();

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

        ydk::YLeaf cufwconnprotocol; //type: CFWNetworkProtocol
        ydk::YLeaf cufwconnnumattempted; //type: uint64
        ydk::YLeaf cufwconnnumsetupsaborted; //type: uint64
        ydk::YLeaf cufwconnnumpolicydeclined; //type: uint64
        ydk::YLeaf cufwconnnumresdeclined; //type: uint64
        ydk::YLeaf cufwconnnumhalfopen; //type: uint32
        ydk::YLeaf cufwconnnumactive; //type: uint32
        ydk::YLeaf cufwconnnumaborted; //type: uint64
        ydk::YLeaf cufwconnsetuprate1; //type: uint32
        ydk::YLeaf cufwconnsetuprate5; //type: uint32

}; // CISCOUNIFIEDFIREWALLMIB::CufwConnSummaryTable::CufwConnSummaryEntry


class CISCOUNIFIEDFIREWALLMIB::CufwAppConnSummaryTable : public ydk::Entity
{
    public:
        CufwAppConnSummaryTable();
        ~CufwAppConnSummaryTable();

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

        class CufwAppConnSummaryEntry; //type: CISCOUNIFIEDFIREWALLMIB::CufwAppConnSummaryTable::CufwAppConnSummaryEntry

        ydk::YList cufwappconnsummaryentry;
        
}; // CISCOUNIFIEDFIREWALLMIB::CufwAppConnSummaryTable


class CISCOUNIFIEDFIREWALLMIB::CufwAppConnSummaryTable::CufwAppConnSummaryEntry : public ydk::Entity
{
    public:
        CufwAppConnSummaryEntry();
        ~CufwAppConnSummaryEntry();

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

        ydk::YLeaf cufwappconnprotocol; //type: CFWApplicationProtocol
        ydk::YLeaf cufwappconnnumattempted; //type: uint64
        ydk::YLeaf cufwappconnnumsetupsaborted; //type: uint64
        ydk::YLeaf cufwappconnnumpolicydeclined; //type: uint64
        ydk::YLeaf cufwappconnnumresdeclined; //type: uint64
        ydk::YLeaf cufwappconnnumhalfopen; //type: uint32
        ydk::YLeaf cufwappconnnumactive; //type: uint32
        ydk::YLeaf cufwappconnnumaborted; //type: uint64
        ydk::YLeaf cufwappconnsetuprate1; //type: uint32
        ydk::YLeaf cufwappconnsetuprate5; //type: uint32

}; // CISCOUNIFIEDFIREWALLMIB::CufwAppConnSummaryTable::CufwAppConnSummaryEntry


class CISCOUNIFIEDFIREWALLMIB::CufwPolicyConnSummaryTable : public ydk::Entity
{
    public:
        CufwPolicyConnSummaryTable();
        ~CufwPolicyConnSummaryTable();

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

        class CufwPolicyConnSummaryEntry; //type: CISCOUNIFIEDFIREWALLMIB::CufwPolicyConnSummaryTable::CufwPolicyConnSummaryEntry

        ydk::YList cufwpolicyconnsummaryentry;
        
}; // CISCOUNIFIEDFIREWALLMIB::CufwPolicyConnSummaryTable


class CISCOUNIFIEDFIREWALLMIB::CufwPolicyConnSummaryTable::CufwPolicyConnSummaryEntry : public ydk::Entity
{
    public:
        CufwPolicyConnSummaryEntry();
        ~CufwPolicyConnSummaryEntry();

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

        ydk::YLeaf cufwpolconnpolicy; //type: binary
        ydk::YLeaf cufwpolconnpolicytargettype; //type: CFWPolicyTargetType
        ydk::YLeaf cufwpolconnpolicytarget; //type: binary
        ydk::YLeaf cufwpolconnprotocol; //type: CFWNetworkProtocol
        ydk::YLeaf cufwpolconnnumattempted; //type: uint64
        ydk::YLeaf cufwpolconnnumsetupsaborted; //type: uint64
        ydk::YLeaf cufwpolconnnumpolicydeclined; //type: uint64
        ydk::YLeaf cufwpolconnnumresdeclined; //type: uint64
        ydk::YLeaf cufwpolconnnumhalfopen; //type: uint32
        ydk::YLeaf cufwpolconnnumactive; //type: uint32
        ydk::YLeaf cufwpolconnnumaborted; //type: uint64

}; // CISCOUNIFIEDFIREWALLMIB::CufwPolicyConnSummaryTable::CufwPolicyConnSummaryEntry


class CISCOUNIFIEDFIREWALLMIB::CufwPolicyAppConnSummaryTable : public ydk::Entity
{
    public:
        CufwPolicyAppConnSummaryTable();
        ~CufwPolicyAppConnSummaryTable();

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

        class CufwPolicyAppConnSummaryEntry; //type: CISCOUNIFIEDFIREWALLMIB::CufwPolicyAppConnSummaryTable::CufwPolicyAppConnSummaryEntry

        ydk::YList cufwpolicyappconnsummaryentry;
        
}; // CISCOUNIFIEDFIREWALLMIB::CufwPolicyAppConnSummaryTable


class CISCOUNIFIEDFIREWALLMIB::CufwPolicyAppConnSummaryTable::CufwPolicyAppConnSummaryEntry : public ydk::Entity
{
    public:
        CufwPolicyAppConnSummaryEntry();
        ~CufwPolicyAppConnSummaryEntry();

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

        ydk::YLeaf cufwpolappconnpolicy; //type: binary
        ydk::YLeaf cufwpolappconnpolicytargettype; //type: CFWPolicyTargetType
        ydk::YLeaf cufwpolappconnpolicytarget; //type: binary
        ydk::YLeaf cufwpolappconnprotocol; //type: CFWApplicationProtocol
        ydk::YLeaf cufwpolappconnnumattempted; //type: uint64
        ydk::YLeaf cufwpolappconnnumsetupsaborted; //type: uint64
        ydk::YLeaf cufwpolappconnnumpolicydeclined; //type: uint64
        ydk::YLeaf cufwpolappconnnumresdeclined; //type: uint64
        ydk::YLeaf cufwpolappconnnumhalfopen; //type: uint32
        ydk::YLeaf cufwpolappconnnumactive; //type: uint32
        ydk::YLeaf cufwpolappconnnumaborted; //type: uint64

}; // CISCOUNIFIEDFIREWALLMIB::CufwPolicyAppConnSummaryTable::CufwPolicyAppConnSummaryEntry


class CISCOUNIFIEDFIREWALLMIB::CufwInspectionTable : public ydk::Entity
{
    public:
        CufwInspectionTable();
        ~CufwInspectionTable();

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

        class CufwInspectionEntry; //type: CISCOUNIFIEDFIREWALLMIB::CufwInspectionTable::CufwInspectionEntry

        ydk::YList cufwinspectionentry;
        
}; // CISCOUNIFIEDFIREWALLMIB::CufwInspectionTable


class CISCOUNIFIEDFIREWALLMIB::CufwInspectionTable::CufwInspectionEntry : public ydk::Entity
{
    public:
        CufwInspectionEntry();
        ~CufwInspectionEntry();

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

        ydk::YLeaf cufwinspectionpolicyname; //type: binary
        ydk::YLeaf cufwinspectionprotocol; //type: CFWApplicationProtocol
        ydk::YLeaf cufwinspectionstatus; //type: boolean

}; // CISCOUNIFIEDFIREWALLMIB::CufwInspectionTable::CufwInspectionEntry


class CISCOUNIFIEDFIREWALLMIB::CufwUrlfServerTable : public ydk::Entity
{
    public:
        CufwUrlfServerTable();
        ~CufwUrlfServerTable();

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

        class CufwUrlfServerEntry; //type: CISCOUNIFIEDFIREWALLMIB::CufwUrlfServerTable::CufwUrlfServerEntry

        ydk::YList cufwurlfserverentry;
        
}; // CISCOUNIFIEDFIREWALLMIB::CufwUrlfServerTable


class CISCOUNIFIEDFIREWALLMIB::CufwUrlfServerTable::CufwUrlfServerEntry : public ydk::Entity
{
    public:
        CufwUrlfServerEntry();
        ~CufwUrlfServerEntry();

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

        ydk::YLeaf cufwurlfserveraddrtype; //type: InetAddressType
        ydk::YLeaf cufwurlfserveraddress; //type: binary
        ydk::YLeaf cufwurlfserverport; //type: uint16
        ydk::YLeaf cufwurlfservervendor; //type: CFWUrlfVendorId
        ydk::YLeaf cufwurlfserverstatus; //type: CFWUrlServerStatus
        ydk::YLeaf cufwurlfserverreqsnumprocessed; //type: uint64
        ydk::YLeaf cufwurlfserverreqsnumallowed; //type: uint64
        ydk::YLeaf cufwurlfserverreqsnumdenied; //type: uint64
        ydk::YLeaf cufwurlfservernumtimeouts; //type: uint64
        ydk::YLeaf cufwurlfservernumretries; //type: uint64
        ydk::YLeaf cufwurlfserverrespsnumreceived; //type: uint64
        ydk::YLeaf cufwurlfserverrespsnumlate; //type: uint64
        ydk::YLeaf cufwurlfserveravgresptime1; //type: uint32
        ydk::YLeaf cufwurlfserveravgresptime5; //type: uint32

}; // CISCOUNIFIEDFIREWALLMIB::CufwUrlfServerTable::CufwUrlfServerEntry


}
}

#endif /* _CISCO_UNIFIED_FIREWALL_MIB_ */

