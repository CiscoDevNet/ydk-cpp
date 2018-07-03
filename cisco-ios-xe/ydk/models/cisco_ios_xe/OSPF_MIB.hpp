#ifndef _OSPF_MIB_
#define _OSPF_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace OSPF_MIB {

class OSPFMIB : public ydk::Entity
{
    public:
        OSPFMIB();
        ~OSPFMIB();

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

        class OspfGeneralGroup; //type: OSPFMIB::OspfGeneralGroup
        class OspfAreaTable; //type: OSPFMIB::OspfAreaTable
        class OspfStubAreaTable; //type: OSPFMIB::OspfStubAreaTable
        class OspfLsdbTable; //type: OSPFMIB::OspfLsdbTable
        class OspfAreaRangeTable; //type: OSPFMIB::OspfAreaRangeTable
        class OspfHostTable; //type: OSPFMIB::OspfHostTable
        class OspfIfTable; //type: OSPFMIB::OspfIfTable
        class OspfIfMetricTable; //type: OSPFMIB::OspfIfMetricTable
        class OspfVirtIfTable; //type: OSPFMIB::OspfVirtIfTable
        class OspfNbrTable; //type: OSPFMIB::OspfNbrTable
        class OspfVirtNbrTable; //type: OSPFMIB::OspfVirtNbrTable
        class OspfExtLsdbTable; //type: OSPFMIB::OspfExtLsdbTable
        class OspfAreaAggregateTable; //type: OSPFMIB::OspfAreaAggregateTable
        class OspfLocalLsdbTable; //type: OSPFMIB::OspfLocalLsdbTable
        class OspfVirtLocalLsdbTable; //type: OSPFMIB::OspfVirtLocalLsdbTable
        class OspfAsLsdbTable; //type: OSPFMIB::OspfAsLsdbTable
        class OspfAreaLsaCountTable; //type: OSPFMIB::OspfAreaLsaCountTable

        std::shared_ptr<cisco_ios_xe::OSPF_MIB::OSPFMIB::OspfGeneralGroup> ospfgeneralgroup;
        std::shared_ptr<cisco_ios_xe::OSPF_MIB::OSPFMIB::OspfAreaTable> ospfareatable;
        std::shared_ptr<cisco_ios_xe::OSPF_MIB::OSPFMIB::OspfStubAreaTable> ospfstubareatable;
        std::shared_ptr<cisco_ios_xe::OSPF_MIB::OSPFMIB::OspfLsdbTable> ospflsdbtable;
        std::shared_ptr<cisco_ios_xe::OSPF_MIB::OSPFMIB::OspfAreaRangeTable> ospfarearangetable;
        std::shared_ptr<cisco_ios_xe::OSPF_MIB::OSPFMIB::OspfHostTable> ospfhosttable;
        std::shared_ptr<cisco_ios_xe::OSPF_MIB::OSPFMIB::OspfIfTable> ospfiftable;
        std::shared_ptr<cisco_ios_xe::OSPF_MIB::OSPFMIB::OspfIfMetricTable> ospfifmetrictable;
        std::shared_ptr<cisco_ios_xe::OSPF_MIB::OSPFMIB::OspfVirtIfTable> ospfvirtiftable;
        std::shared_ptr<cisco_ios_xe::OSPF_MIB::OSPFMIB::OspfNbrTable> ospfnbrtable;
        std::shared_ptr<cisco_ios_xe::OSPF_MIB::OSPFMIB::OspfVirtNbrTable> ospfvirtnbrtable;
        std::shared_ptr<cisco_ios_xe::OSPF_MIB::OSPFMIB::OspfExtLsdbTable> ospfextlsdbtable;
        std::shared_ptr<cisco_ios_xe::OSPF_MIB::OSPFMIB::OspfAreaAggregateTable> ospfareaaggregatetable;
        std::shared_ptr<cisco_ios_xe::OSPF_MIB::OSPFMIB::OspfLocalLsdbTable> ospflocallsdbtable;
        std::shared_ptr<cisco_ios_xe::OSPF_MIB::OSPFMIB::OspfVirtLocalLsdbTable> ospfvirtlocallsdbtable;
        std::shared_ptr<cisco_ios_xe::OSPF_MIB::OSPFMIB::OspfAsLsdbTable> ospfaslsdbtable;
        std::shared_ptr<cisco_ios_xe::OSPF_MIB::OSPFMIB::OspfAreaLsaCountTable> ospfarealsacounttable;
        
}; // OSPFMIB


class OSPFMIB::OspfGeneralGroup : public ydk::Entity
{
    public:
        OspfGeneralGroup();
        ~OspfGeneralGroup();

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

        ydk::YLeaf ospfrouterid; //type: string
        ydk::YLeaf ospfadminstat; //type: Status
        ydk::YLeaf ospfversionnumber; //type: OspfVersionNumber
        ydk::YLeaf ospfareabdrrtrstatus; //type: boolean
        ydk::YLeaf ospfasbdrrtrstatus; //type: boolean
        ydk::YLeaf ospfexternlsacount; //type: uint32
        ydk::YLeaf ospfexternlsacksumsum; //type: int32
        ydk::YLeaf ospftossupport; //type: boolean
        ydk::YLeaf ospforiginatenewlsas; //type: uint32
        ydk::YLeaf ospfrxnewlsas; //type: uint32
        ydk::YLeaf ospfextlsdblimit; //type: int32
        ydk::YLeaf ospfmulticastextensions; //type: int32
        ydk::YLeaf ospfexitoverflowinterval; //type: int32
        ydk::YLeaf ospfdemandextensions; //type: boolean
        ydk::YLeaf ospfrfc1583compatibility; //type: boolean
        ydk::YLeaf ospfopaquelsasupport; //type: boolean
        ydk::YLeaf ospfreferencebandwidth; //type: uint32
        ydk::YLeaf ospfrestartsupport; //type: OspfRestartSupport
        ydk::YLeaf ospfrestartinterval; //type: int32
        ydk::YLeaf ospfrestartstrictlsachecking; //type: boolean
        ydk::YLeaf ospfrestartstatus; //type: OspfRestartStatus
        ydk::YLeaf ospfrestartage; //type: uint32
        ydk::YLeaf ospfrestartexitreason; //type: OspfRestartExitReason
        ydk::YLeaf ospfaslsacount; //type: uint32
        ydk::YLeaf ospfaslsacksumsum; //type: uint32
        ydk::YLeaf ospfstubroutersupport; //type: boolean
        ydk::YLeaf ospfstubrouteradvertisement; //type: OspfStubRouterAdvertisement
        ydk::YLeaf ospfdiscontinuitytime; //type: uint32
        class OspfVersionNumber;
        class OspfRestartSupport;
        class OspfRestartStatus;
        class OspfRestartExitReason;
        class OspfStubRouterAdvertisement;

}; // OSPFMIB::OspfGeneralGroup


class OSPFMIB::OspfAreaTable : public ydk::Entity
{
    public:
        OspfAreaTable();
        ~OspfAreaTable();

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

        class OspfAreaEntry; //type: OSPFMIB::OspfAreaTable::OspfAreaEntry

        ydk::YList ospfareaentry;
        
}; // OSPFMIB::OspfAreaTable


class OSPFMIB::OspfAreaTable::OspfAreaEntry : public ydk::Entity
{
    public:
        OspfAreaEntry();
        ~OspfAreaEntry();

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

        ydk::YLeaf ospfareaid; //type: string
        ydk::YLeaf ospfauthtype; //type: OspfAuthenticationType
        ydk::YLeaf ospfimportasextern; //type: OspfImportAsExtern
        ydk::YLeaf ospfspfruns; //type: uint32
        ydk::YLeaf ospfareabdrrtrcount; //type: uint32
        ydk::YLeaf ospfasbdrrtrcount; //type: uint32
        ydk::YLeaf ospfarealsacount; //type: uint32
        ydk::YLeaf ospfarealsacksumsum; //type: int32
        ydk::YLeaf ospfareasummary; //type: OspfAreaSummary
        ydk::YLeaf ospfareastatus; //type: RowStatus
        ydk::YLeaf ospfareanssatranslatorrole; //type: OspfAreaNssaTranslatorRole
        ydk::YLeaf ospfareanssatranslatorstate; //type: OspfAreaNssaTranslatorState
        ydk::YLeaf ospfareanssatranslatorstabilityinterval; //type: int32
        ydk::YLeaf ospfareanssatranslatorevents; //type: uint32
        ydk::YLeaf cospfopaquearealsacount; //type: uint32
        ydk::YLeaf cospfopaquearealsacksumsum; //type: uint32
        ydk::YLeaf cospfareanssatranslatorrole; //type: CospfAreaNssaTranslatorRole
        ydk::YLeaf cospfareanssatranslatorstate; //type: CospfAreaNssaTranslatorState
        ydk::YLeaf cospfareanssatranslatorevents; //type: uint32
        class OspfImportAsExtern;
        class OspfAreaSummary;
        class OspfAreaNssaTranslatorRole;
        class OspfAreaNssaTranslatorState;
        class CospfAreaNssaTranslatorRole;
        class CospfAreaNssaTranslatorState;

}; // OSPFMIB::OspfAreaTable::OspfAreaEntry


class OSPFMIB::OspfStubAreaTable : public ydk::Entity
{
    public:
        OspfStubAreaTable();
        ~OspfStubAreaTable();

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

        class OspfStubAreaEntry; //type: OSPFMIB::OspfStubAreaTable::OspfStubAreaEntry

        ydk::YList ospfstubareaentry;
        
}; // OSPFMIB::OspfStubAreaTable


class OSPFMIB::OspfStubAreaTable::OspfStubAreaEntry : public ydk::Entity
{
    public:
        OspfStubAreaEntry();
        ~OspfStubAreaEntry();

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

        ydk::YLeaf ospfstubareaid; //type: string
        ydk::YLeaf ospfstubtos; //type: int32
        ydk::YLeaf ospfstubmetric; //type: int32
        ydk::YLeaf ospfstubstatus; //type: RowStatus
        ydk::YLeaf ospfstubmetrictype; //type: OspfStubMetricType
        class OspfStubMetricType;

}; // OSPFMIB::OspfStubAreaTable::OspfStubAreaEntry


class OSPFMIB::OspfLsdbTable : public ydk::Entity
{
    public:
        OspfLsdbTable();
        ~OspfLsdbTable();

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

        class OspfLsdbEntry; //type: OSPFMIB::OspfLsdbTable::OspfLsdbEntry

        ydk::YList ospflsdbentry;
        
}; // OSPFMIB::OspfLsdbTable


class OSPFMIB::OspfLsdbTable::OspfLsdbEntry : public ydk::Entity
{
    public:
        OspfLsdbEntry();
        ~OspfLsdbEntry();

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

        ydk::YLeaf ospflsdbareaid; //type: string
        ydk::YLeaf ospflsdbtype; //type: OspfLsdbType
        ydk::YLeaf ospflsdblsid; //type: string
        ydk::YLeaf ospflsdbrouterid; //type: string
        ydk::YLeaf ospflsdbsequence; //type: int32
        ydk::YLeaf ospflsdbage; //type: int32
        ydk::YLeaf ospflsdbchecksum; //type: int32
        ydk::YLeaf ospflsdbadvertisement; //type: binary
        class OspfLsdbType;

}; // OSPFMIB::OspfLsdbTable::OspfLsdbEntry


class OSPFMIB::OspfAreaRangeTable : public ydk::Entity
{
    public:
        OspfAreaRangeTable();
        ~OspfAreaRangeTable();

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

        class OspfAreaRangeEntry; //type: OSPFMIB::OspfAreaRangeTable::OspfAreaRangeEntry

        ydk::YList ospfarearangeentry;
        
}; // OSPFMIB::OspfAreaRangeTable


class OSPFMIB::OspfAreaRangeTable::OspfAreaRangeEntry : public ydk::Entity
{
    public:
        OspfAreaRangeEntry();
        ~OspfAreaRangeEntry();

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

        ydk::YLeaf ospfarearangeareaid; //type: string
        ydk::YLeaf ospfarearangenet; //type: string
        ydk::YLeaf ospfarearangemask; //type: string
        ydk::YLeaf ospfarearangestatus; //type: RowStatus
        ydk::YLeaf ospfarearangeeffect; //type: OspfAreaRangeEffect
        class OspfAreaRangeEffect;

}; // OSPFMIB::OspfAreaRangeTable::OspfAreaRangeEntry


class OSPFMIB::OspfHostTable : public ydk::Entity
{
    public:
        OspfHostTable();
        ~OspfHostTable();

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

        class OspfHostEntry; //type: OSPFMIB::OspfHostTable::OspfHostEntry

        ydk::YList ospfhostentry;
        
}; // OSPFMIB::OspfHostTable


class OSPFMIB::OspfHostTable::OspfHostEntry : public ydk::Entity
{
    public:
        OspfHostEntry();
        ~OspfHostEntry();

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

        ydk::YLeaf ospfhostipaddress; //type: string
        ydk::YLeaf ospfhosttos; //type: int32
        ydk::YLeaf ospfhostmetric; //type: int32
        ydk::YLeaf ospfhoststatus; //type: RowStatus
        ydk::YLeaf ospfhostareaid; //type: string
        ydk::YLeaf ospfhostcfgareaid; //type: string

}; // OSPFMIB::OspfHostTable::OspfHostEntry


class OSPFMIB::OspfIfTable : public ydk::Entity
{
    public:
        OspfIfTable();
        ~OspfIfTable();

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

        class OspfIfEntry; //type: OSPFMIB::OspfIfTable::OspfIfEntry

        ydk::YList ospfifentry;
        
}; // OSPFMIB::OspfIfTable


class OSPFMIB::OspfIfTable::OspfIfEntry : public ydk::Entity
{
    public:
        OspfIfEntry();
        ~OspfIfEntry();

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

        ydk::YLeaf ospfifipaddress; //type: string
        ydk::YLeaf ospfaddresslessif; //type: int32
        ydk::YLeaf ospfifareaid; //type: string
        ydk::YLeaf ospfiftype; //type: OspfIfType
        ydk::YLeaf ospfifadminstat; //type: Status
        ydk::YLeaf ospfifrtrpriority; //type: int32
        ydk::YLeaf ospfiftransitdelay; //type: int32
        ydk::YLeaf ospfifretransinterval; //type: int32
        ydk::YLeaf ospfifhellointerval; //type: int32
        ydk::YLeaf ospfifrtrdeadinterval; //type: int32
        ydk::YLeaf ospfifpollinterval; //type: int32
        ydk::YLeaf ospfifstate; //type: OspfIfState
        ydk::YLeaf ospfifdesignatedrouter; //type: string
        ydk::YLeaf ospfifbackupdesignatedrouter; //type: string
        ydk::YLeaf ospfifevents; //type: uint32
        ydk::YLeaf ospfifauthkey; //type: binary
        ydk::YLeaf ospfifstatus; //type: RowStatus
        ydk::YLeaf ospfifmulticastforwarding; //type: OspfIfMulticastForwarding
        ydk::YLeaf ospfifdemand; //type: boolean
        ydk::YLeaf ospfifauthtype; //type: OspfAuthenticationType
        ydk::YLeaf ospfiflsacount; //type: uint32
        ydk::YLeaf ospfiflsacksumsum; //type: uint32
        ydk::YLeaf ospfifdesignatedrouterid; //type: string
        ydk::YLeaf ospfifbackupdesignatedrouterid; //type: string
        ydk::YLeaf cospfiflsacount; //type: uint32
        ydk::YLeaf cospfiflsacksumsum; //type: uint32
        class OspfIfType;
        class OspfIfState;
        class OspfIfMulticastForwarding;

}; // OSPFMIB::OspfIfTable::OspfIfEntry


class OSPFMIB::OspfIfMetricTable : public ydk::Entity
{
    public:
        OspfIfMetricTable();
        ~OspfIfMetricTable();

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

        class OspfIfMetricEntry; //type: OSPFMIB::OspfIfMetricTable::OspfIfMetricEntry

        ydk::YList ospfifmetricentry;
        
}; // OSPFMIB::OspfIfMetricTable


class OSPFMIB::OspfIfMetricTable::OspfIfMetricEntry : public ydk::Entity
{
    public:
        OspfIfMetricEntry();
        ~OspfIfMetricEntry();

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

        ydk::YLeaf ospfifmetricipaddress; //type: string
        ydk::YLeaf ospfifmetricaddresslessif; //type: int32
        ydk::YLeaf ospfifmetrictos; //type: int32
        ydk::YLeaf ospfifmetricvalue; //type: int32
        ydk::YLeaf ospfifmetricstatus; //type: RowStatus

}; // OSPFMIB::OspfIfMetricTable::OspfIfMetricEntry


class OSPFMIB::OspfVirtIfTable : public ydk::Entity
{
    public:
        OspfVirtIfTable();
        ~OspfVirtIfTable();

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

        class OspfVirtIfEntry; //type: OSPFMIB::OspfVirtIfTable::OspfVirtIfEntry

        ydk::YList ospfvirtifentry;
        
}; // OSPFMIB::OspfVirtIfTable


class OSPFMIB::OspfVirtIfTable::OspfVirtIfEntry : public ydk::Entity
{
    public:
        OspfVirtIfEntry();
        ~OspfVirtIfEntry();

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

        ydk::YLeaf ospfvirtifareaid; //type: string
        ydk::YLeaf ospfvirtifneighbor; //type: string
        ydk::YLeaf ospfvirtiftransitdelay; //type: int32
        ydk::YLeaf ospfvirtifretransinterval; //type: int32
        ydk::YLeaf ospfvirtifhellointerval; //type: int32
        ydk::YLeaf ospfvirtifrtrdeadinterval; //type: int32
        ydk::YLeaf ospfvirtifstate; //type: OspfVirtIfState
        ydk::YLeaf ospfvirtifevents; //type: uint32
        ydk::YLeaf ospfvirtifauthkey; //type: binary
        ydk::YLeaf ospfvirtifstatus; //type: RowStatus
        ydk::YLeaf ospfvirtifauthtype; //type: OspfAuthenticationType
        ydk::YLeaf ospfvirtiflsacount; //type: uint32
        ydk::YLeaf ospfvirtiflsacksumsum; //type: uint32
        ydk::YLeaf cospfvirtiflsacount; //type: uint32
        ydk::YLeaf cospfvirtiflsacksumsum; //type: uint32
        class OspfVirtIfState;

}; // OSPFMIB::OspfVirtIfTable::OspfVirtIfEntry


class OSPFMIB::OspfNbrTable : public ydk::Entity
{
    public:
        OspfNbrTable();
        ~OspfNbrTable();

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

        class OspfNbrEntry; //type: OSPFMIB::OspfNbrTable::OspfNbrEntry

        ydk::YList ospfnbrentry;
        
}; // OSPFMIB::OspfNbrTable


class OSPFMIB::OspfNbrTable::OspfNbrEntry : public ydk::Entity
{
    public:
        OspfNbrEntry();
        ~OspfNbrEntry();

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

        ydk::YLeaf ospfnbripaddr; //type: string
        ydk::YLeaf ospfnbraddresslessindex; //type: int32
        ydk::YLeaf ospfnbrrtrid; //type: string
        ydk::YLeaf ospfnbroptions; //type: int32
        ydk::YLeaf ospfnbrpriority; //type: int32
        ydk::YLeaf ospfnbrstate; //type: OspfNbrState
        ydk::YLeaf ospfnbrevents; //type: uint32
        ydk::YLeaf ospfnbrlsretransqlen; //type: uint32
        ydk::YLeaf ospfnbmanbrstatus; //type: RowStatus
        ydk::YLeaf ospfnbmanbrpermanence; //type: OspfNbmaNbrPermanence
        ydk::YLeaf ospfnbrhellosuppressed; //type: boolean
        ydk::YLeaf ospfnbrrestarthelperstatus; //type: OspfNbrRestartHelperStatus
        ydk::YLeaf ospfnbrrestarthelperage; //type: uint32
        ydk::YLeaf ospfnbrrestarthelperexitreason; //type: OspfNbrRestartHelperExitReason
        class OspfNbrState;
        class OspfNbmaNbrPermanence;
        class OspfNbrRestartHelperStatus;
        class OspfNbrRestartHelperExitReason;

}; // OSPFMIB::OspfNbrTable::OspfNbrEntry


class OSPFMIB::OspfVirtNbrTable : public ydk::Entity
{
    public:
        OspfVirtNbrTable();
        ~OspfVirtNbrTable();

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

        class OspfVirtNbrEntry; //type: OSPFMIB::OspfVirtNbrTable::OspfVirtNbrEntry

        ydk::YList ospfvirtnbrentry;
        
}; // OSPFMIB::OspfVirtNbrTable


class OSPFMIB::OspfVirtNbrTable::OspfVirtNbrEntry : public ydk::Entity
{
    public:
        OspfVirtNbrEntry();
        ~OspfVirtNbrEntry();

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

        ydk::YLeaf ospfvirtnbrarea; //type: string
        ydk::YLeaf ospfvirtnbrrtrid; //type: string
        ydk::YLeaf ospfvirtnbripaddr; //type: string
        ydk::YLeaf ospfvirtnbroptions; //type: int32
        ydk::YLeaf ospfvirtnbrstate; //type: OspfVirtNbrState
        ydk::YLeaf ospfvirtnbrevents; //type: uint32
        ydk::YLeaf ospfvirtnbrlsretransqlen; //type: uint32
        ydk::YLeaf ospfvirtnbrhellosuppressed; //type: boolean
        ydk::YLeaf ospfvirtnbrrestarthelperstatus; //type: OspfVirtNbrRestartHelperStatus
        ydk::YLeaf ospfvirtnbrrestarthelperage; //type: uint32
        ydk::YLeaf ospfvirtnbrrestarthelperexitreason; //type: OspfVirtNbrRestartHelperExitReason
        class OspfVirtNbrState;
        class OspfVirtNbrRestartHelperStatus;
        class OspfVirtNbrRestartHelperExitReason;

}; // OSPFMIB::OspfVirtNbrTable::OspfVirtNbrEntry


class OSPFMIB::OspfExtLsdbTable : public ydk::Entity
{
    public:
        OspfExtLsdbTable();
        ~OspfExtLsdbTable();

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

        class OspfExtLsdbEntry; //type: OSPFMIB::OspfExtLsdbTable::OspfExtLsdbEntry

        ydk::YList ospfextlsdbentry;
        
}; // OSPFMIB::OspfExtLsdbTable


class OSPFMIB::OspfExtLsdbTable::OspfExtLsdbEntry : public ydk::Entity
{
    public:
        OspfExtLsdbEntry();
        ~OspfExtLsdbEntry();

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

        ydk::YLeaf ospfextlsdbtype; //type: OspfExtLsdbType
        ydk::YLeaf ospfextlsdblsid; //type: string
        ydk::YLeaf ospfextlsdbrouterid; //type: string
        ydk::YLeaf ospfextlsdbsequence; //type: int32
        ydk::YLeaf ospfextlsdbage; //type: int32
        ydk::YLeaf ospfextlsdbchecksum; //type: int32
        ydk::YLeaf ospfextlsdbadvertisement; //type: binary
        class OspfExtLsdbType;

}; // OSPFMIB::OspfExtLsdbTable::OspfExtLsdbEntry


class OSPFMIB::OspfAreaAggregateTable : public ydk::Entity
{
    public:
        OspfAreaAggregateTable();
        ~OspfAreaAggregateTable();

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

        class OspfAreaAggregateEntry; //type: OSPFMIB::OspfAreaAggregateTable::OspfAreaAggregateEntry

        ydk::YList ospfareaaggregateentry;
        
}; // OSPFMIB::OspfAreaAggregateTable


class OSPFMIB::OspfAreaAggregateTable::OspfAreaAggregateEntry : public ydk::Entity
{
    public:
        OspfAreaAggregateEntry();
        ~OspfAreaAggregateEntry();

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

        ydk::YLeaf ospfareaaggregateareaid; //type: string
        ydk::YLeaf ospfareaaggregatelsdbtype; //type: OspfAreaAggregateLsdbType
        ydk::YLeaf ospfareaaggregatenet; //type: string
        ydk::YLeaf ospfareaaggregatemask; //type: string
        ydk::YLeaf ospfareaaggregatestatus; //type: RowStatus
        ydk::YLeaf ospfareaaggregateeffect; //type: OspfAreaAggregateEffect
        ydk::YLeaf ospfareaaggregateextroutetag; //type: uint32
        class OspfAreaAggregateLsdbType;
        class OspfAreaAggregateEffect;

}; // OSPFMIB::OspfAreaAggregateTable::OspfAreaAggregateEntry


class OSPFMIB::OspfLocalLsdbTable : public ydk::Entity
{
    public:
        OspfLocalLsdbTable();
        ~OspfLocalLsdbTable();

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

        class OspfLocalLsdbEntry; //type: OSPFMIB::OspfLocalLsdbTable::OspfLocalLsdbEntry

        ydk::YList ospflocallsdbentry;
        
}; // OSPFMIB::OspfLocalLsdbTable


class OSPFMIB::OspfLocalLsdbTable::OspfLocalLsdbEntry : public ydk::Entity
{
    public:
        OspfLocalLsdbEntry();
        ~OspfLocalLsdbEntry();

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

        ydk::YLeaf ospflocallsdbipaddress; //type: string
        ydk::YLeaf ospflocallsdbaddresslessif; //type: int32
        ydk::YLeaf ospflocallsdbtype; //type: OspfLocalLsdbType
        ydk::YLeaf ospflocallsdblsid; //type: string
        ydk::YLeaf ospflocallsdbrouterid; //type: string
        ydk::YLeaf ospflocallsdbsequence; //type: int32
        ydk::YLeaf ospflocallsdbage; //type: int32
        ydk::YLeaf ospflocallsdbchecksum; //type: int32
        ydk::YLeaf ospflocallsdbadvertisement; //type: binary
        class OspfLocalLsdbType;

}; // OSPFMIB::OspfLocalLsdbTable::OspfLocalLsdbEntry


class OSPFMIB::OspfVirtLocalLsdbTable : public ydk::Entity
{
    public:
        OspfVirtLocalLsdbTable();
        ~OspfVirtLocalLsdbTable();

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

        class OspfVirtLocalLsdbEntry; //type: OSPFMIB::OspfVirtLocalLsdbTable::OspfVirtLocalLsdbEntry

        ydk::YList ospfvirtlocallsdbentry;
        
}; // OSPFMIB::OspfVirtLocalLsdbTable


class OSPFMIB::OspfVirtLocalLsdbTable::OspfVirtLocalLsdbEntry : public ydk::Entity
{
    public:
        OspfVirtLocalLsdbEntry();
        ~OspfVirtLocalLsdbEntry();

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

        ydk::YLeaf ospfvirtlocallsdbtransitarea; //type: string
        ydk::YLeaf ospfvirtlocallsdbneighbor; //type: string
        ydk::YLeaf ospfvirtlocallsdbtype; //type: OspfVirtLocalLsdbType
        ydk::YLeaf ospfvirtlocallsdblsid; //type: string
        ydk::YLeaf ospfvirtlocallsdbrouterid; //type: string
        ydk::YLeaf ospfvirtlocallsdbsequence; //type: int32
        ydk::YLeaf ospfvirtlocallsdbage; //type: int32
        ydk::YLeaf ospfvirtlocallsdbchecksum; //type: int32
        ydk::YLeaf ospfvirtlocallsdbadvertisement; //type: binary
        class OspfVirtLocalLsdbType;

}; // OSPFMIB::OspfVirtLocalLsdbTable::OspfVirtLocalLsdbEntry


class OSPFMIB::OspfAsLsdbTable : public ydk::Entity
{
    public:
        OspfAsLsdbTable();
        ~OspfAsLsdbTable();

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

        class OspfAsLsdbEntry; //type: OSPFMIB::OspfAsLsdbTable::OspfAsLsdbEntry

        ydk::YList ospfaslsdbentry;
        
}; // OSPFMIB::OspfAsLsdbTable


class OSPFMIB::OspfAsLsdbTable::OspfAsLsdbEntry : public ydk::Entity
{
    public:
        OspfAsLsdbEntry();
        ~OspfAsLsdbEntry();

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

        ydk::YLeaf ospfaslsdbtype; //type: OspfAsLsdbType
        ydk::YLeaf ospfaslsdblsid; //type: string
        ydk::YLeaf ospfaslsdbrouterid; //type: string
        ydk::YLeaf ospfaslsdbsequence; //type: int32
        ydk::YLeaf ospfaslsdbage; //type: int32
        ydk::YLeaf ospfaslsdbchecksum; //type: int32
        ydk::YLeaf ospfaslsdbadvertisement; //type: binary
        class OspfAsLsdbType;

}; // OSPFMIB::OspfAsLsdbTable::OspfAsLsdbEntry


class OSPFMIB::OspfAreaLsaCountTable : public ydk::Entity
{
    public:
        OspfAreaLsaCountTable();
        ~OspfAreaLsaCountTable();

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

        class OspfAreaLsaCountEntry; //type: OSPFMIB::OspfAreaLsaCountTable::OspfAreaLsaCountEntry

        ydk::YList ospfarealsacountentry;
        
}; // OSPFMIB::OspfAreaLsaCountTable


class OSPFMIB::OspfAreaLsaCountTable::OspfAreaLsaCountEntry : public ydk::Entity
{
    public:
        OspfAreaLsaCountEntry();
        ~OspfAreaLsaCountEntry();

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

        ydk::YLeaf ospfarealsacountareaid; //type: string
        ydk::YLeaf ospfarealsacountlsatype; //type: OspfAreaLsaCountLsaType
        ydk::YLeaf ospfarealsacountnumber; //type: uint32
        class OspfAreaLsaCountLsaType;

}; // OSPFMIB::OspfAreaLsaCountTable::OspfAreaLsaCountEntry

class Status : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class OspfAuthenticationType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf simplePassword;
        static const ydk::Enum::YLeaf md5;

};

class OSPFMIB::OspfGeneralGroup::OspfVersionNumber : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf version2;

};

class OSPFMIB::OspfGeneralGroup::OspfRestartSupport : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf plannedOnly;
        static const ydk::Enum::YLeaf plannedAndUnplanned;

};

class OSPFMIB::OspfGeneralGroup::OspfRestartStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf notRestarting;
        static const ydk::Enum::YLeaf plannedRestart;
        static const ydk::Enum::YLeaf unplannedRestart;

};

class OSPFMIB::OspfGeneralGroup::OspfRestartExitReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf inProgress;
        static const ydk::Enum::YLeaf completed;
        static const ydk::Enum::YLeaf timedOut;
        static const ydk::Enum::YLeaf topologyChanged;

};

class OSPFMIB::OspfGeneralGroup::OspfStubRouterAdvertisement : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf doNotAdvertise;
        static const ydk::Enum::YLeaf advertise;

};

class OSPFMIB::OspfAreaTable::OspfAreaEntry::OspfImportAsExtern : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf importExternal;
        static const ydk::Enum::YLeaf importNoExternal;
        static const ydk::Enum::YLeaf importNssa;

};

class OSPFMIB::OspfAreaTable::OspfAreaEntry::OspfAreaSummary : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf noAreaSummary;
        static const ydk::Enum::YLeaf sendAreaSummary;

};

class OSPFMIB::OspfAreaTable::OspfAreaEntry::OspfAreaNssaTranslatorRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf always;
        static const ydk::Enum::YLeaf candidate;

};

class OSPFMIB::OspfAreaTable::OspfAreaEntry::OspfAreaNssaTranslatorState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf elected;
        static const ydk::Enum::YLeaf disabled;

};

class OSPFMIB::OspfAreaTable::OspfAreaEntry::CospfAreaNssaTranslatorRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf always;
        static const ydk::Enum::YLeaf candidate;

};

class OSPFMIB::OspfAreaTable::OspfAreaEntry::CospfAreaNssaTranslatorState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf elected;
        static const ydk::Enum::YLeaf disabled;

};

class OSPFMIB::OspfStubAreaTable::OspfStubAreaEntry::OspfStubMetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ospfMetric;
        static const ydk::Enum::YLeaf comparableCost;
        static const ydk::Enum::YLeaf nonComparable;

};

class OSPFMIB::OspfLsdbTable::OspfLsdbEntry::OspfLsdbType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf routerLink;
        static const ydk::Enum::YLeaf networkLink;
        static const ydk::Enum::YLeaf summaryLink;
        static const ydk::Enum::YLeaf asSummaryLink;
        static const ydk::Enum::YLeaf asExternalLink;
        static const ydk::Enum::YLeaf multicastLink;
        static const ydk::Enum::YLeaf nssaExternalLink;
        static const ydk::Enum::YLeaf areaOpaqueLink;

};

class OSPFMIB::OspfAreaRangeTable::OspfAreaRangeEntry::OspfAreaRangeEffect : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf advertiseMatching;
        static const ydk::Enum::YLeaf doNotAdvertiseMatching;

};

class OSPFMIB::OspfIfTable::OspfIfEntry::OspfIfType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf broadcast;
        static const ydk::Enum::YLeaf nbma;
        static const ydk::Enum::YLeaf pointToPoint;
        static const ydk::Enum::YLeaf pointToMultipoint;

};

class OSPFMIB::OspfIfTable::OspfIfEntry::OspfIfState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf loopback;
        static const ydk::Enum::YLeaf waiting;
        static const ydk::Enum::YLeaf pointToPoint;
        static const ydk::Enum::YLeaf designatedRouter;
        static const ydk::Enum::YLeaf backupDesignatedRouter;
        static const ydk::Enum::YLeaf otherDesignatedRouter;

};

class OSPFMIB::OspfIfTable::OspfIfEntry::OspfIfMulticastForwarding : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf blocked;
        static const ydk::Enum::YLeaf multicast;
        static const ydk::Enum::YLeaf unicast;

};

class OSPFMIB::OspfVirtIfTable::OspfVirtIfEntry::OspfVirtIfState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf pointToPoint;

};

class OSPFMIB::OspfNbrTable::OspfNbrEntry::OspfNbrState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf attempt;
        static const ydk::Enum::YLeaf init;
        static const ydk::Enum::YLeaf twoWay;
        static const ydk::Enum::YLeaf exchangeStart;
        static const ydk::Enum::YLeaf exchange;
        static const ydk::Enum::YLeaf loading;
        static const ydk::Enum::YLeaf full;

};

class OSPFMIB::OspfNbrTable::OspfNbrEntry::OspfNbmaNbrPermanence : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dynamic;
        static const ydk::Enum::YLeaf permanent;

};

class OSPFMIB::OspfNbrTable::OspfNbrEntry::OspfNbrRestartHelperStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf notHelping;
        static const ydk::Enum::YLeaf helping;

};

class OSPFMIB::OspfNbrTable::OspfNbrEntry::OspfNbrRestartHelperExitReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf inProgress;
        static const ydk::Enum::YLeaf completed;
        static const ydk::Enum::YLeaf timedOut;
        static const ydk::Enum::YLeaf topologyChanged;

};

class OSPFMIB::OspfVirtNbrTable::OspfVirtNbrEntry::OspfVirtNbrState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf attempt;
        static const ydk::Enum::YLeaf init;
        static const ydk::Enum::YLeaf twoWay;
        static const ydk::Enum::YLeaf exchangeStart;
        static const ydk::Enum::YLeaf exchange;
        static const ydk::Enum::YLeaf loading;
        static const ydk::Enum::YLeaf full;

};

class OSPFMIB::OspfVirtNbrTable::OspfVirtNbrEntry::OspfVirtNbrRestartHelperStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf notHelping;
        static const ydk::Enum::YLeaf helping;

};

class OSPFMIB::OspfVirtNbrTable::OspfVirtNbrEntry::OspfVirtNbrRestartHelperExitReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf inProgress;
        static const ydk::Enum::YLeaf completed;
        static const ydk::Enum::YLeaf timedOut;
        static const ydk::Enum::YLeaf topologyChanged;

};

class OSPFMIB::OspfExtLsdbTable::OspfExtLsdbEntry::OspfExtLsdbType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf asExternalLink;

};

class OSPFMIB::OspfAreaAggregateTable::OspfAreaAggregateEntry::OspfAreaAggregateLsdbType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf summaryLink;
        static const ydk::Enum::YLeaf nssaExternalLink;

};

class OSPFMIB::OspfAreaAggregateTable::OspfAreaAggregateEntry::OspfAreaAggregateEffect : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf advertiseMatching;
        static const ydk::Enum::YLeaf doNotAdvertiseMatching;

};

class OSPFMIB::OspfLocalLsdbTable::OspfLocalLsdbEntry::OspfLocalLsdbType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf localOpaqueLink;

};

class OSPFMIB::OspfVirtLocalLsdbTable::OspfVirtLocalLsdbEntry::OspfVirtLocalLsdbType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf localOpaqueLink;

};

class OSPFMIB::OspfAsLsdbTable::OspfAsLsdbEntry::OspfAsLsdbType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf asExternalLink;
        static const ydk::Enum::YLeaf asOpaqueLink;

};

class OSPFMIB::OspfAreaLsaCountTable::OspfAreaLsaCountEntry::OspfAreaLsaCountLsaType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf routerLink;
        static const ydk::Enum::YLeaf networkLink;
        static const ydk::Enum::YLeaf summaryLink;
        static const ydk::Enum::YLeaf asSummaryLink;
        static const ydk::Enum::YLeaf multicastLink;
        static const ydk::Enum::YLeaf nssaExternalLink;
        static const ydk::Enum::YLeaf areaOpaqueLink;

};


}
}

#endif /* _OSPF_MIB_ */

