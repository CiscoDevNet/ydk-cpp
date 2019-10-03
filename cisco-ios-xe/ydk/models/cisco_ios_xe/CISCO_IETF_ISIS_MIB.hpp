#ifndef _CISCO_IETF_ISIS_MIB_
#define _CISCO_IETF_ISIS_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_IETF_ISIS_MIB {

class CISCOIETFISISMIB : public ydk::Entity
{
    public:
        CISCOIETFISISMIB();
        ~CISCOIETFISISMIB();

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

        class CiiSysObject; //type: CISCOIETFISISMIB::CiiSysObject
        class CiiCirc; //type: CISCOIETFISISMIB::CiiCirc
        class CiiManAreaAddrTable; //type: CISCOIETFISISMIB::CiiManAreaAddrTable
        class CiiAreaAddrTable; //type: CISCOIETFISISMIB::CiiAreaAddrTable
        class CiiSysProtSuppTable; //type: CISCOIETFISISMIB::CiiSysProtSuppTable
        class CiiSummAddrTable; //type: CISCOIETFISISMIB::CiiSummAddrTable
        class CiiRedistributeAddrTable; //type: CISCOIETFISISMIB::CiiRedistributeAddrTable
        class CiiRouterTable; //type: CISCOIETFISISMIB::CiiRouterTable
        class CiiSysLevelTable; //type: CISCOIETFISISMIB::CiiSysLevelTable
        class CiiCircTable; //type: CISCOIETFISISMIB::CiiCircTable
        class CiiCircLevelTable; //type: CISCOIETFISISMIB::CiiCircLevelTable
        class CiiSystemCounterTable; //type: CISCOIETFISISMIB::CiiSystemCounterTable
        class CiiCircuitCounterTable; //type: CISCOIETFISISMIB::CiiCircuitCounterTable
        class CiiPacketCounterTable; //type: CISCOIETFISISMIB::CiiPacketCounterTable
        class CiiISAdjTable; //type: CISCOIETFISISMIB::CiiISAdjTable
        class CiiISAdjAreaAddrTable; //type: CISCOIETFISISMIB::CiiISAdjAreaAddrTable
        class CiiISAdjIPAddrTable; //type: CISCOIETFISISMIB::CiiISAdjIPAddrTable
        class CiiISAdjProtSuppTable; //type: CISCOIETFISISMIB::CiiISAdjProtSuppTable
        class CiiRATable; //type: CISCOIETFISISMIB::CiiRATable
        class CiiIPRATable; //type: CISCOIETFISISMIB::CiiIPRATable
        class CiiLSPSummaryTable; //type: CISCOIETFISISMIB::CiiLSPSummaryTable
        class CiiLSPTLVTable; //type: CISCOIETFISISMIB::CiiLSPTLVTable

        std::shared_ptr<cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::CiiSysObject> ciisysobject;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::CiiCirc> ciicirc;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::CiiManAreaAddrTable> ciimanareaaddrtable;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::CiiAreaAddrTable> ciiareaaddrtable;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::CiiSysProtSuppTable> ciisysprotsupptable;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::CiiSummAddrTable> ciisummaddrtable;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::CiiRedistributeAddrTable> ciiredistributeaddrtable;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::CiiRouterTable> ciiroutertable;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::CiiSysLevelTable> ciisysleveltable;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::CiiCircTable> ciicirctable;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::CiiCircLevelTable> ciicircleveltable;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::CiiSystemCounterTable> ciisystemcountertable;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::CiiCircuitCounterTable> ciicircuitcountertable;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::CiiPacketCounterTable> ciipacketcountertable;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::CiiISAdjTable> ciiisadjtable;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::CiiISAdjAreaAddrTable> ciiisadjareaaddrtable;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::CiiISAdjIPAddrTable> ciiisadjipaddrtable;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::CiiISAdjProtSuppTable> ciiisadjprotsupptable;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::CiiRATable> ciiratable;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::CiiIPRATable> ciiipratable;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::CiiLSPSummaryTable> ciilspsummarytable;
        std::shared_ptr<cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::CiiLSPTLVTable> ciilsptlvtable;
        
}; // CISCOIETFISISMIB


class CISCOIETFISISMIB::CiiSysObject : public ydk::Entity
{
    public:
        CiiSysObject();
        ~CiiSysObject();

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

        ydk::YLeaf ciisysversion; //type: CiiSysVersion
        ydk::YLeaf ciisystype; //type: CiiSysType
        ydk::YLeaf ciisysid; //type: binary
        ydk::YLeaf ciisysmaxpathsplits; //type: int32
        ydk::YLeaf ciisysmaxlspgenint; //type: int32
        ydk::YLeaf ciisyspolleshellorate; //type: uint32
        ydk::YLeaf ciisyswaittime; //type: uint32
        ydk::YLeaf ciisysadminstate; //type: CiiAdminState
        ydk::YLeaf ciisysl2tol1leaking; //type: boolean
        ydk::YLeaf ciisysmaxage; //type: uint32
        ydk::YLeaf ciisysreceivelspbuffersize; //type: uint32
        class CiiSysVersion;
        class CiiSysType;

}; // CISCOIETFISISMIB::CiiSysObject


class CISCOIETFISISMIB::CiiCirc : public ydk::Entity
{
    public:
        CiiCirc();
        ~CiiCirc();

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

        ydk::YLeaf ciinextcircindex; //type: uint32

}; // CISCOIETFISISMIB::CiiCirc


class CISCOIETFISISMIB::CiiManAreaAddrTable : public ydk::Entity
{
    public:
        CiiManAreaAddrTable();
        ~CiiManAreaAddrTable();

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

        class CiiManAreaAddrEntry; //type: CISCOIETFISISMIB::CiiManAreaAddrTable::CiiManAreaAddrEntry

        ydk::YList ciimanareaaddrentry;
        
}; // CISCOIETFISISMIB::CiiManAreaAddrTable


class CISCOIETFISISMIB::CiiManAreaAddrTable::CiiManAreaAddrEntry : public ydk::Entity
{
    public:
        CiiManAreaAddrEntry();
        ~CiiManAreaAddrEntry();

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

        ydk::YLeaf ciimanareaaddr; //type: binary
        ydk::YLeaf ciimanareaaddrexiststate; //type: RowStatus

}; // CISCOIETFISISMIB::CiiManAreaAddrTable::CiiManAreaAddrEntry


class CISCOIETFISISMIB::CiiAreaAddrTable : public ydk::Entity
{
    public:
        CiiAreaAddrTable();
        ~CiiAreaAddrTable();

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

        class CiiAreaAddrEntry; //type: CISCOIETFISISMIB::CiiAreaAddrTable::CiiAreaAddrEntry

        ydk::YList ciiareaaddrentry;
        
}; // CISCOIETFISISMIB::CiiAreaAddrTable


class CISCOIETFISISMIB::CiiAreaAddrTable::CiiAreaAddrEntry : public ydk::Entity
{
    public:
        CiiAreaAddrEntry();
        ~CiiAreaAddrEntry();

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

        ydk::YLeaf ciiareaaddr; //type: binary

}; // CISCOIETFISISMIB::CiiAreaAddrTable::CiiAreaAddrEntry


class CISCOIETFISISMIB::CiiSysProtSuppTable : public ydk::Entity
{
    public:
        CiiSysProtSuppTable();
        ~CiiSysProtSuppTable();

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

        class CiiSysProtSuppEntry; //type: CISCOIETFISISMIB::CiiSysProtSuppTable::CiiSysProtSuppEntry

        ydk::YList ciisysprotsuppentry;
        
}; // CISCOIETFISISMIB::CiiSysProtSuppTable


class CISCOIETFISISMIB::CiiSysProtSuppTable::CiiSysProtSuppEntry : public ydk::Entity
{
    public:
        CiiSysProtSuppEntry();
        ~CiiSysProtSuppEntry();

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

        ydk::YLeaf ciisysprotsuppprotocol; //type: CiiSupportedProtocol
        ydk::YLeaf ciisysprotsuppexiststate; //type: RowStatus

}; // CISCOIETFISISMIB::CiiSysProtSuppTable::CiiSysProtSuppEntry


class CISCOIETFISISMIB::CiiSummAddrTable : public ydk::Entity
{
    public:
        CiiSummAddrTable();
        ~CiiSummAddrTable();

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

        class CiiSummAddrEntry; //type: CISCOIETFISISMIB::CiiSummAddrTable::CiiSummAddrEntry

        ydk::YList ciisummaddrentry;
        
}; // CISCOIETFISISMIB::CiiSummAddrTable


class CISCOIETFISISMIB::CiiSummAddrTable::CiiSummAddrEntry : public ydk::Entity
{
    public:
        CiiSummAddrEntry();
        ~CiiSummAddrEntry();

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

        ydk::YLeaf ciisummaddresstype; //type: InetAddressType
        ydk::YLeaf ciisummaddress; //type: binary
        ydk::YLeaf ciisummaddrprefixlen; //type: uint32
        ydk::YLeaf ciisummaddrexiststate; //type: RowStatus
        ydk::YLeaf ciisummaddrmetric; //type: int32
        ydk::YLeaf ciisummaddrfullmetric; //type: uint32

}; // CISCOIETFISISMIB::CiiSummAddrTable::CiiSummAddrEntry


class CISCOIETFISISMIB::CiiRedistributeAddrTable : public ydk::Entity
{
    public:
        CiiRedistributeAddrTable();
        ~CiiRedistributeAddrTable();

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

        class CiiRedistributeAddrEntry; //type: CISCOIETFISISMIB::CiiRedistributeAddrTable::CiiRedistributeAddrEntry

        ydk::YList ciiredistributeaddrentry;
        
}; // CISCOIETFISISMIB::CiiRedistributeAddrTable


class CISCOIETFISISMIB::CiiRedistributeAddrTable::CiiRedistributeAddrEntry : public ydk::Entity
{
    public:
        CiiRedistributeAddrEntry();
        ~CiiRedistributeAddrEntry();

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

        ydk::YLeaf ciiredistributeaddrtype; //type: InetAddressType
        ydk::YLeaf ciiredistributeaddraddress; //type: binary
        ydk::YLeaf ciiredistributeaddrprefixlen; //type: uint32
        ydk::YLeaf ciiredistributeaddrexiststate; //type: RowStatus

}; // CISCOIETFISISMIB::CiiRedistributeAddrTable::CiiRedistributeAddrEntry


class CISCOIETFISISMIB::CiiRouterTable : public ydk::Entity
{
    public:
        CiiRouterTable();
        ~CiiRouterTable();

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

        class CiiRouterEntry; //type: CISCOIETFISISMIB::CiiRouterTable::CiiRouterEntry

        ydk::YList ciirouterentry;
        
}; // CISCOIETFISISMIB::CiiRouterTable


class CISCOIETFISISMIB::CiiRouterTable::CiiRouterEntry : public ydk::Entity
{
    public:
        CiiRouterEntry();
        ~CiiRouterEntry();

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

        ydk::YLeaf ciiroutersysid; //type: binary
        ydk::YLeaf ciirouterlevel; //type: CiiISLevel
        ydk::YLeaf ciirouterhostname; //type: string
        ydk::YLeaf ciirouterid; //type: uint32

}; // CISCOIETFISISMIB::CiiRouterTable::CiiRouterEntry


class CISCOIETFISISMIB::CiiSysLevelTable : public ydk::Entity
{
    public:
        CiiSysLevelTable();
        ~CiiSysLevelTable();

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

        class CiiSysLevelEntry; //type: CISCOIETFISISMIB::CiiSysLevelTable::CiiSysLevelEntry

        ydk::YList ciisyslevelentry;
        
}; // CISCOIETFISISMIB::CiiSysLevelTable


class CISCOIETFISISMIB::CiiSysLevelTable::CiiSysLevelEntry : public ydk::Entity
{
    public:
        CiiSysLevelEntry();
        ~CiiSysLevelEntry();

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

        ydk::YLeaf ciisyslevelindex; //type: CiiSysLevelIndex
        ydk::YLeaf ciisysleveloriglspbuffsize; //type: int32
        ydk::YLeaf ciisyslevelminlspgenint; //type: uint32
        ydk::YLeaf ciisysleveloverloadstate; //type: CiiLevelState
        ydk::YLeaf ciisyslevelsetoverload; //type: boolean
        ydk::YLeaf ciisyslevelsetoverloaduntil; //type: uint32
        ydk::YLeaf ciisyslevelmetricstyle; //type: CiiMetricStyle
        ydk::YLeaf ciisyslevelspfconsiders; //type: CiiMetricStyle
        ydk::YLeaf ciisyslevelteenabled; //type: boolean
        class CiiSysLevelIndex;

}; // CISCOIETFISISMIB::CiiSysLevelTable::CiiSysLevelEntry


class CISCOIETFISISMIB::CiiCircTable : public ydk::Entity
{
    public:
        CiiCircTable();
        ~CiiCircTable();

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

        class CiiCircEntry; //type: CISCOIETFISISMIB::CiiCircTable::CiiCircEntry

        ydk::YList ciicircentry;
        
}; // CISCOIETFISISMIB::CiiCircTable


class CISCOIETFISISMIB::CiiCircTable::CiiCircEntry : public ydk::Entity
{
    public:
        CiiCircEntry();
        ~CiiCircEntry();

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

        ydk::YLeaf ciicircindex; //type: int32
        ydk::YLeaf ciicircifindex; //type: int32
        ydk::YLeaf ciicircifsubindex; //type: int32
        ydk::YLeaf ciicircadminstate; //type: CiiAdminState
        ydk::YLeaf ciicircexiststate; //type: RowStatus
        ydk::YLeaf ciicirctype; //type: CiiCircType
        ydk::YLeaf ciicircextdomain; //type: boolean
        ydk::YLeaf ciicirclevel; //type: CiiCircLevel
        ydk::YLeaf ciicircpassivecircuit; //type: boolean
        ydk::YLeaf ciicircmeshgroupenabled; //type: CiiCircMeshGroupEnabled
        ydk::YLeaf ciicircmeshgroup; //type: uint32
        ydk::YLeaf ciicircsmallhellos; //type: boolean
        ydk::YLeaf ciicirclastuptime; //type: uint32
        ydk::YLeaf ciicirc3wayenabled; //type: boolean
        ydk::YLeaf ciicircextendedcircid; //type: uint32
        class CiiCircType;
        class CiiCircLevel;
        class CiiCircMeshGroupEnabled;

}; // CISCOIETFISISMIB::CiiCircTable::CiiCircEntry


class CISCOIETFISISMIB::CiiCircLevelTable : public ydk::Entity
{
    public:
        CiiCircLevelTable();
        ~CiiCircLevelTable();

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

        class CiiCircLevelEntry; //type: CISCOIETFISISMIB::CiiCircLevelTable::CiiCircLevelEntry

        ydk::YList ciicirclevelentry;
        
}; // CISCOIETFISISMIB::CiiCircLevelTable


class CISCOIETFISISMIB::CiiCircLevelTable::CiiCircLevelEntry : public ydk::Entity
{
    public:
        CiiCircLevelEntry();
        ~CiiCircLevelEntry();

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

        //type: int32 (refers to cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::CiiCircTable::CiiCircEntry::ciicircindex)
        ydk::YLeaf ciicircindex;
        ydk::YLeaf ciicirclevelindex; //type: CiiCircLevelIndex
        ydk::YLeaf ciicirclevelmetric; //type: int32
        ydk::YLeaf ciicirclevelwidemetric; //type: uint32
        ydk::YLeaf ciicirclevelispriority; //type: int32
        ydk::YLeaf ciicirclevelidoctet; //type: int32
        ydk::YLeaf ciicirclevelid; //type: binary
        ydk::YLeaf ciicircleveldesis; //type: binary
        ydk::YLeaf ciicirclevelhellomultiplier; //type: int32
        ydk::YLeaf ciicirclevelhellotimer; //type: int32
        ydk::YLeaf ciicircleveldrhellotimer; //type: int32
        ydk::YLeaf ciicirclevellspthrottle; //type: uint32
        ydk::YLeaf ciicirclevelminlspretransint; //type: int32
        ydk::YLeaf ciicirclevelcsnpinterval; //type: int32
        ydk::YLeaf ciicirclevelpartsnpinterval; //type: int32
        class CiiCircLevelIndex;

}; // CISCOIETFISISMIB::CiiCircLevelTable::CiiCircLevelEntry


class CISCOIETFISISMIB::CiiSystemCounterTable : public ydk::Entity
{
    public:
        CiiSystemCounterTable();
        ~CiiSystemCounterTable();

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

        class CiiSystemCounterEntry; //type: CISCOIETFISISMIB::CiiSystemCounterTable::CiiSystemCounterEntry

        ydk::YList ciisystemcounterentry;
        
}; // CISCOIETFISISMIB::CiiSystemCounterTable


class CISCOIETFISISMIB::CiiSystemCounterTable::CiiSystemCounterEntry : public ydk::Entity
{
    public:
        CiiSystemCounterEntry();
        ~CiiSystemCounterEntry();

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

        ydk::YLeaf ciisysstatlevel; //type: CiiSysStatLevel
        ydk::YLeaf ciisysstatcorrlsps; //type: uint32
        ydk::YLeaf ciisysstatauthtypefails; //type: uint32
        ydk::YLeaf ciisysstatauthfails; //type: uint32
        ydk::YLeaf ciisysstatlspdbaseoloads; //type: uint32
        ydk::YLeaf ciisysstatmanaddrdropfromareas; //type: uint32
        ydk::YLeaf ciisysstatattmpttoexmaxseqnums; //type: uint32
        ydk::YLeaf ciisysstatseqnumskips; //type: uint32
        ydk::YLeaf ciisysstatownlsppurges; //type: uint32
        ydk::YLeaf ciisysstatidfieldlenmismatches; //type: uint32
        ydk::YLeaf ciisysstatpartchanges; //type: uint32
        ydk::YLeaf ciisysstatspfruns; //type: uint32
        ydk::YLeaf ciisysstatlsperrors; //type: uint32
        class CiiSysStatLevel;

}; // CISCOIETFISISMIB::CiiSystemCounterTable::CiiSystemCounterEntry


class CISCOIETFISISMIB::CiiCircuitCounterTable : public ydk::Entity
{
    public:
        CiiCircuitCounterTable();
        ~CiiCircuitCounterTable();

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

        class CiiCircuitCounterEntry; //type: CISCOIETFISISMIB::CiiCircuitCounterTable::CiiCircuitCounterEntry

        ydk::YList ciicircuitcounterentry;
        
}; // CISCOIETFISISMIB::CiiCircuitCounterTable


class CISCOIETFISISMIB::CiiCircuitCounterTable::CiiCircuitCounterEntry : public ydk::Entity
{
    public:
        CiiCircuitCounterEntry();
        ~CiiCircuitCounterEntry();

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

        //type: int32 (refers to cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::CiiCircTable::CiiCircEntry::ciicircindex)
        ydk::YLeaf ciicircindex;
        ydk::YLeaf ciicircuittype; //type: CiiCircuitType
        ydk::YLeaf ciicircadjchanges; //type: uint32
        ydk::YLeaf ciicircnumadj; //type: uint32
        ydk::YLeaf ciicircinitfails; //type: uint32
        ydk::YLeaf ciicircrejadjs; //type: uint32
        ydk::YLeaf ciicircidfieldlenmismatches; //type: uint32
        ydk::YLeaf ciicircmaxareaaddrmismatches; //type: uint32
        ydk::YLeaf ciicircauthtypefails; //type: uint32
        ydk::YLeaf ciicircauthfails; //type: uint32
        ydk::YLeaf ciicirclandesischanges; //type: uint32
        class CiiCircuitType;

}; // CISCOIETFISISMIB::CiiCircuitCounterTable::CiiCircuitCounterEntry


class CISCOIETFISISMIB::CiiPacketCounterTable : public ydk::Entity
{
    public:
        CiiPacketCounterTable();
        ~CiiPacketCounterTable();

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

        class CiiPacketCounterEntry; //type: CISCOIETFISISMIB::CiiPacketCounterTable::CiiPacketCounterEntry

        ydk::YList ciipacketcounterentry;
        
}; // CISCOIETFISISMIB::CiiPacketCounterTable


class CISCOIETFISISMIB::CiiPacketCounterTable::CiiPacketCounterEntry : public ydk::Entity
{
    public:
        CiiPacketCounterEntry();
        ~CiiPacketCounterEntry();

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

        //type: int32 (refers to cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::CiiCircTable::CiiCircEntry::ciicircindex)
        ydk::YLeaf ciicircindex;
        ydk::YLeaf ciipacketcountlevel; //type: CiiPacketCountLevel
        ydk::YLeaf ciipacketcountdirection; //type: CiiPacketCountDirection
        ydk::YLeaf ciipacketcountiihellos; //type: uint32
        ydk::YLeaf ciipacketcountishellos; //type: uint32
        ydk::YLeaf ciipacketcounteshellos; //type: uint32
        ydk::YLeaf ciipacketcountlsps; //type: uint32
        ydk::YLeaf ciipacketcountcsnps; //type: uint32
        ydk::YLeaf ciipacketcountpsnps; //type: uint32
        ydk::YLeaf ciipacketcountunknowns; //type: uint32
        class CiiPacketCountLevel;
        class CiiPacketCountDirection;

}; // CISCOIETFISISMIB::CiiPacketCounterTable::CiiPacketCounterEntry


class CISCOIETFISISMIB::CiiISAdjTable : public ydk::Entity
{
    public:
        CiiISAdjTable();
        ~CiiISAdjTable();

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

        class CiiISAdjEntry; //type: CISCOIETFISISMIB::CiiISAdjTable::CiiISAdjEntry

        ydk::YList ciiisadjentry;
        
}; // CISCOIETFISISMIB::CiiISAdjTable


class CISCOIETFISISMIB::CiiISAdjTable::CiiISAdjEntry : public ydk::Entity
{
    public:
        CiiISAdjEntry();
        ~CiiISAdjEntry();

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

        //type: int32 (refers to cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::CiiCircTable::CiiCircEntry::ciicircindex)
        ydk::YLeaf ciicircindex;
        ydk::YLeaf ciiisadjindex; //type: int32
        ydk::YLeaf ciiisadjstate; //type: CiiISAdjState
        ydk::YLeaf ciiisadj3waystate; //type: CiiISAdj3WayState
        ydk::YLeaf ciiisadjneighsnpaaddress; //type: binary
        ydk::YLeaf ciiisadjneighsystype; //type: CiiISAdjNeighSysType
        ydk::YLeaf ciiisadjneighsysid; //type: binary
        ydk::YLeaf ciiisadjnbrextendedcircid; //type: uint32
        ydk::YLeaf ciiisadjusage; //type: CiiISAdjUsage
        ydk::YLeaf ciiisadjholdtimer; //type: uint32
        ydk::YLeaf ciiisadjneighpriority; //type: int32
        ydk::YLeaf ciiisadjlastuptime; //type: uint32
        class CiiISAdjState;
        class CiiISAdj3WayState;
        class CiiISAdjNeighSysType;
        class CiiISAdjUsage;

}; // CISCOIETFISISMIB::CiiISAdjTable::CiiISAdjEntry


class CISCOIETFISISMIB::CiiISAdjAreaAddrTable : public ydk::Entity
{
    public:
        CiiISAdjAreaAddrTable();
        ~CiiISAdjAreaAddrTable();

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

        class CiiISAdjAreaAddrEntry; //type: CISCOIETFISISMIB::CiiISAdjAreaAddrTable::CiiISAdjAreaAddrEntry

        ydk::YList ciiisadjareaaddrentry;
        
}; // CISCOIETFISISMIB::CiiISAdjAreaAddrTable


class CISCOIETFISISMIB::CiiISAdjAreaAddrTable::CiiISAdjAreaAddrEntry : public ydk::Entity
{
    public:
        CiiISAdjAreaAddrEntry();
        ~CiiISAdjAreaAddrEntry();

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

        //type: int32 (refers to cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::CiiCircTable::CiiCircEntry::ciicircindex)
        ydk::YLeaf ciicircindex;
        //type: int32 (refers to cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::CiiISAdjTable::CiiISAdjEntry::ciiisadjindex)
        ydk::YLeaf ciiisadjindex;
        ydk::YLeaf ciiisadjareaaddrindex; //type: int32
        ydk::YLeaf ciiisadjareaaddress; //type: binary

}; // CISCOIETFISISMIB::CiiISAdjAreaAddrTable::CiiISAdjAreaAddrEntry


class CISCOIETFISISMIB::CiiISAdjIPAddrTable : public ydk::Entity
{
    public:
        CiiISAdjIPAddrTable();
        ~CiiISAdjIPAddrTable();

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

        class CiiISAdjIPAddrEntry; //type: CISCOIETFISISMIB::CiiISAdjIPAddrTable::CiiISAdjIPAddrEntry

        ydk::YList ciiisadjipaddrentry;
        
}; // CISCOIETFISISMIB::CiiISAdjIPAddrTable


class CISCOIETFISISMIB::CiiISAdjIPAddrTable::CiiISAdjIPAddrEntry : public ydk::Entity
{
    public:
        CiiISAdjIPAddrEntry();
        ~CiiISAdjIPAddrEntry();

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

        //type: int32 (refers to cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::CiiCircTable::CiiCircEntry::ciicircindex)
        ydk::YLeaf ciicircindex;
        //type: int32 (refers to cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::CiiISAdjTable::CiiISAdjEntry::ciiisadjindex)
        ydk::YLeaf ciiisadjindex;
        ydk::YLeaf ciiisadjipaddrindex; //type: int32
        ydk::YLeaf ciiisadjipaddrtype; //type: InetAddressType
        ydk::YLeaf ciiisadjipaddraddress; //type: binary

}; // CISCOIETFISISMIB::CiiISAdjIPAddrTable::CiiISAdjIPAddrEntry


class CISCOIETFISISMIB::CiiISAdjProtSuppTable : public ydk::Entity
{
    public:
        CiiISAdjProtSuppTable();
        ~CiiISAdjProtSuppTable();

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

        class CiiISAdjProtSuppEntry; //type: CISCOIETFISISMIB::CiiISAdjProtSuppTable::CiiISAdjProtSuppEntry

        ydk::YList ciiisadjprotsuppentry;
        
}; // CISCOIETFISISMIB::CiiISAdjProtSuppTable


class CISCOIETFISISMIB::CiiISAdjProtSuppTable::CiiISAdjProtSuppEntry : public ydk::Entity
{
    public:
        CiiISAdjProtSuppEntry();
        ~CiiISAdjProtSuppEntry();

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

        //type: int32 (refers to cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::CiiCircTable::CiiCircEntry::ciicircindex)
        ydk::YLeaf ciicircindex;
        //type: int32 (refers to cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::CiiISAdjTable::CiiISAdjEntry::ciiisadjindex)
        ydk::YLeaf ciiisadjindex;
        ydk::YLeaf ciiisadjprotsuppprotocol; //type: CiiSupportedProtocol

}; // CISCOIETFISISMIB::CiiISAdjProtSuppTable::CiiISAdjProtSuppEntry


class CISCOIETFISISMIB::CiiRATable : public ydk::Entity
{
    public:
        CiiRATable();
        ~CiiRATable();

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

        class CiiRAEntry; //type: CISCOIETFISISMIB::CiiRATable::CiiRAEntry

        ydk::YList ciiraentry;
        
}; // CISCOIETFISISMIB::CiiRATable


class CISCOIETFISISMIB::CiiRATable::CiiRAEntry : public ydk::Entity
{
    public:
        CiiRAEntry();
        ~CiiRAEntry();

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

        //type: int32 (refers to cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::CiiCircTable::CiiCircEntry::ciicircindex)
        ydk::YLeaf ciicircindex;
        ydk::YLeaf ciiraindex; //type: int32
        ydk::YLeaf ciiraexiststate; //type: RowStatus
        ydk::YLeaf ciiraadminstate; //type: CiiAdminState
        ydk::YLeaf ciiraaddrprefix; //type: binary
        ydk::YLeaf ciiramaptype; //type: CiiRAMapType
        ydk::YLeaf ciirametric; //type: int32
        ydk::YLeaf ciirametrictype; //type: CiiMetricType
        ydk::YLeaf ciirasnpaaddress; //type: binary
        ydk::YLeaf ciirasnpamask; //type: binary
        ydk::YLeaf ciirasnpaprefix; //type: binary
        ydk::YLeaf ciiratype; //type: CiiRAType
        class CiiRAMapType;
        class CiiRAType;

}; // CISCOIETFISISMIB::CiiRATable::CiiRAEntry


class CISCOIETFISISMIB::CiiIPRATable : public ydk::Entity
{
    public:
        CiiIPRATable();
        ~CiiIPRATable();

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

        class CiiIPRAEntry; //type: CISCOIETFISISMIB::CiiIPRATable::CiiIPRAEntry

        ydk::YList ciiipraentry;
        
}; // CISCOIETFISISMIB::CiiIPRATable


class CISCOIETFISISMIB::CiiIPRATable::CiiIPRAEntry : public ydk::Entity
{
    public:
        CiiIPRAEntry();
        ~CiiIPRAEntry();

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

        ydk::YLeaf ciiipradesttype; //type: InetAddressType
        ydk::YLeaf ciiipradest; //type: binary
        ydk::YLeaf ciiipradestprefixlen; //type: uint32
        ydk::YLeaf ciiipranexthopindex; //type: int32
        ydk::YLeaf ciiipranexthoptype; //type: InetAddressType
        ydk::YLeaf ciiipranexthop; //type: binary
        ydk::YLeaf ciiipratype; //type: CiiIPRAType
        ydk::YLeaf ciiipraexiststate; //type: RowStatus
        ydk::YLeaf ciiipraadminstate; //type: CiiAdminState
        ydk::YLeaf ciiiprametric; //type: int32
        ydk::YLeaf ciiiprametrictype; //type: CiiMetricType
        ydk::YLeaf ciiiprafullmetric; //type: uint32
        ydk::YLeaf ciiiprasnpaaddress; //type: binary
        ydk::YLeaf ciiiprasourcetype; //type: CiiIPRASourceType
        class CiiIPRAType;
        class CiiIPRASourceType;

}; // CISCOIETFISISMIB::CiiIPRATable::CiiIPRAEntry


class CISCOIETFISISMIB::CiiLSPSummaryTable : public ydk::Entity
{
    public:
        CiiLSPSummaryTable();
        ~CiiLSPSummaryTable();

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

        class CiiLSPSummaryEntry; //type: CISCOIETFISISMIB::CiiLSPSummaryTable::CiiLSPSummaryEntry

        ydk::YList ciilspsummaryentry;
        
}; // CISCOIETFISISMIB::CiiLSPSummaryTable


class CISCOIETFISISMIB::CiiLSPSummaryTable::CiiLSPSummaryEntry : public ydk::Entity
{
    public:
        CiiLSPSummaryEntry();
        ~CiiLSPSummaryEntry();

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

        ydk::YLeaf ciilsplevel; //type: CiiISLevel
        ydk::YLeaf ciilspid; //type: binary
        ydk::YLeaf ciilspseq; //type: uint32
        ydk::YLeaf ciilspzerolife; //type: boolean
        ydk::YLeaf ciilspchecksum; //type: uint32
        ydk::YLeaf ciilsplifetimeremain; //type: uint32
        ydk::YLeaf ciilsppdulength; //type: uint32
        ydk::YLeaf ciilspattributes; //type: uint32

}; // CISCOIETFISISMIB::CiiLSPSummaryTable::CiiLSPSummaryEntry


class CISCOIETFISISMIB::CiiLSPTLVTable : public ydk::Entity
{
    public:
        CiiLSPTLVTable();
        ~CiiLSPTLVTable();

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

        class CiiLSPTLVEntry; //type: CISCOIETFISISMIB::CiiLSPTLVTable::CiiLSPTLVEntry

        ydk::YList ciilsptlventry;
        
}; // CISCOIETFISISMIB::CiiLSPTLVTable


class CISCOIETFISISMIB::CiiLSPTLVTable::CiiLSPTLVEntry : public ydk::Entity
{
    public:
        CiiLSPTLVEntry();
        ~CiiLSPTLVEntry();

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

        ydk::YLeaf ciilsplevel; //type: CiiISLevel
        //type: binary (refers to cisco_ios_xe::CISCO_IETF_ISIS_MIB::CISCOIETFISISMIB::CiiLSPSummaryTable::CiiLSPSummaryEntry::ciilspid)
        ydk::YLeaf ciilspid;
        ydk::YLeaf ciilsptlvindex; //type: uint32
        ydk::YLeaf ciilsptlvseq; //type: uint32
        ydk::YLeaf ciilsptlvchecksum; //type: uint32
        ydk::YLeaf ciilsptlvtype; //type: uint32
        ydk::YLeaf ciilsptlvlen; //type: uint32
        ydk::YLeaf ciilsptlvvalue; //type: binary

}; // CISCOIETFISISMIB::CiiLSPTLVTable::CiiLSPTLVEntry

class CiiMetricStyle : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf narrow;
        static const ydk::Enum::YLeaf wide;
        static const ydk::Enum::YLeaf both;

        static int get_enum_value(const std::string & name) {
            if (name == "narrow") return 1;
            if (name == "wide") return 2;
            if (name == "both") return 3;
            return -1;
        }
};

class CiiLevelState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf off;
        static const ydk::Enum::YLeaf on;
        static const ydk::Enum::YLeaf waiting;
        static const ydk::Enum::YLeaf overloaded;

        static int get_enum_value(const std::string & name) {
            if (name == "off") return 1;
            if (name == "on") return 2;
            if (name == "waiting") return 3;
            if (name == "overloaded") return 4;
            return -1;
        }
};

class CiiSupportedProtocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf iso8473;
        static const ydk::Enum::YLeaf ipV6;
        static const ydk::Enum::YLeaf ip;

        static int get_enum_value(const std::string & name) {
            if (name == "iso8473") return 129;
            if (name == "ipV6") return 142;
            if (name == "ip") return 204;
            return -1;
        }
};

class CiiAdminState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf on;
        static const ydk::Enum::YLeaf off;

        static int get_enum_value(const std::string & name) {
            if (name == "on") return 1;
            if (name == "off") return 2;
            return -1;
        }
};

class CiiMetricType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf external;

        static int get_enum_value(const std::string & name) {
            if (name == "internal") return 1;
            if (name == "external") return 2;
            return -1;
        }
};

class CiiISLevel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf area;
        static const ydk::Enum::YLeaf domain;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "area") return 1;
            if (name == "domain") return 2;
            return -1;
        }
};

class CISCOIETFISISMIB::CiiSysObject::CiiSysVersion : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf one;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "one") return 1;
            return -1;
        }
};

class CISCOIETFISISMIB::CiiSysObject::CiiSysType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level1IS;
        static const ydk::Enum::YLeaf level2IS;
        static const ydk::Enum::YLeaf level1L2IS;

        static int get_enum_value(const std::string & name) {
            if (name == "level1IS") return 1;
            if (name == "level2IS") return 2;
            if (name == "level1L2IS") return 3;
            return -1;
        }
};

class CISCOIETFISISMIB::CiiSysLevelTable::CiiSysLevelEntry::CiiSysLevelIndex : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level1IS;
        static const ydk::Enum::YLeaf level2IS;

        static int get_enum_value(const std::string & name) {
            if (name == "level1IS") return 1;
            if (name == "level2IS") return 2;
            return -1;
        }
};

class CISCOIETFISISMIB::CiiCircTable::CiiCircEntry::CiiCircType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf broadcast;
        static const ydk::Enum::YLeaf ptToPt;
        static const ydk::Enum::YLeaf staticIn;
        static const ydk::Enum::YLeaf staticOut;
        static const ydk::Enum::YLeaf dA;

        static int get_enum_value(const std::string & name) {
            if (name == "broadcast") return 1;
            if (name == "ptToPt") return 2;
            if (name == "staticIn") return 3;
            if (name == "staticOut") return 4;
            if (name == "dA") return 5;
            return -1;
        }
};

class CISCOIETFISISMIB::CiiCircTable::CiiCircEntry::CiiCircLevel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level1;
        static const ydk::Enum::YLeaf level2;
        static const ydk::Enum::YLeaf level1L2;

        static int get_enum_value(const std::string & name) {
            if (name == "level1") return 1;
            if (name == "level2") return 2;
            if (name == "level1L2") return 3;
            return -1;
        }
};

class CISCOIETFISISMIB::CiiCircTable::CiiCircEntry::CiiCircMeshGroupEnabled : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inactive;
        static const ydk::Enum::YLeaf blocked;
        static const ydk::Enum::YLeaf set;

        static int get_enum_value(const std::string & name) {
            if (name == "inactive") return 1;
            if (name == "blocked") return 2;
            if (name == "set") return 3;
            return -1;
        }
};

class CISCOIETFISISMIB::CiiCircLevelTable::CiiCircLevelEntry::CiiCircLevelIndex : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level1IS;
        static const ydk::Enum::YLeaf level2IS;

        static int get_enum_value(const std::string & name) {
            if (name == "level1IS") return 1;
            if (name == "level2IS") return 2;
            return -1;
        }
};

class CISCOIETFISISMIB::CiiSystemCounterTable::CiiSystemCounterEntry::CiiSysStatLevel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level1IS;
        static const ydk::Enum::YLeaf level2IS;

        static int get_enum_value(const std::string & name) {
            if (name == "level1IS") return 1;
            if (name == "level2IS") return 2;
            return -1;
        }
};

class CISCOIETFISISMIB::CiiCircuitCounterTable::CiiCircuitCounterEntry::CiiCircuitType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lanlevel1;
        static const ydk::Enum::YLeaf lanlevel2;
        static const ydk::Enum::YLeaf p2pcircuit;

        static int get_enum_value(const std::string & name) {
            if (name == "lanlevel1") return 1;
            if (name == "lanlevel2") return 2;
            if (name == "p2pcircuit") return 3;
            return -1;
        }
};

class CISCOIETFISISMIB::CiiPacketCounterTable::CiiPacketCounterEntry::CiiPacketCountLevel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level1;
        static const ydk::Enum::YLeaf level2;

        static int get_enum_value(const std::string & name) {
            if (name == "level1") return 1;
            if (name == "level2") return 2;
            return -1;
        }
};

class CISCOIETFISISMIB::CiiPacketCounterTable::CiiPacketCounterEntry::CiiPacketCountDirection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sending;
        static const ydk::Enum::YLeaf receiving;

        static int get_enum_value(const std::string & name) {
            if (name == "sending") return 1;
            if (name == "receiving") return 2;
            return -1;
        }
};

class CISCOIETFISISMIB::CiiISAdjTable::CiiISAdjEntry::CiiISAdjState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf initializing;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf failed;

        static int get_enum_value(const std::string & name) {
            if (name == "down") return 1;
            if (name == "initializing") return 2;
            if (name == "up") return 3;
            if (name == "failed") return 4;
            return -1;
        }
};

class CISCOIETFISISMIB::CiiISAdjTable::CiiISAdjEntry::CiiISAdj3WayState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf initializing;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf failed;

        static int get_enum_value(const std::string & name) {
            if (name == "up") return 0;
            if (name == "initializing") return 1;
            if (name == "down") return 2;
            if (name == "failed") return 3;
            return -1;
        }
};

class CISCOIETFISISMIB::CiiISAdjTable::CiiISAdjEntry::CiiISAdjNeighSysType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l1IntermediateSystem;
        static const ydk::Enum::YLeaf l2IntermediateSystem;
        static const ydk::Enum::YLeaf l1L2IntermediateSystem;
        static const ydk::Enum::YLeaf unknown;

        static int get_enum_value(const std::string & name) {
            if (name == "l1IntermediateSystem") return 1;
            if (name == "l2IntermediateSystem") return 2;
            if (name == "l1L2IntermediateSystem") return 3;
            if (name == "unknown") return 4;
            return -1;
        }
};

class CISCOIETFISISMIB::CiiISAdjTable::CiiISAdjEntry::CiiISAdjUsage : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level1;
        static const ydk::Enum::YLeaf level2;
        static const ydk::Enum::YLeaf level1and2;

        static int get_enum_value(const std::string & name) {
            if (name == "level1") return 1;
            if (name == "level2") return 2;
            if (name == "level1and2") return 3;
            return -1;
        }
};

class CISCOIETFISISMIB::CiiRATable::CiiRAEntry::CiiRAMapType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf explicit_;
        static const ydk::Enum::YLeaf extractIDI;
        static const ydk::Enum::YLeaf extractDSP;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 1;
            if (name == "explicit") return 2;
            if (name == "extractIDI") return 3;
            if (name == "extractDSP") return 4;
            return -1;
        }
};

class CISCOIETFISISMIB::CiiRATable::CiiRAEntry::CiiRAType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf manual;
        static const ydk::Enum::YLeaf automatic;

        static int get_enum_value(const std::string & name) {
            if (name == "manual") return 1;
            if (name == "automatic") return 2;
            return -1;
        }
};

class CISCOIETFISISMIB::CiiIPRATable::CiiIPRAEntry::CiiIPRAType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf manual;
        static const ydk::Enum::YLeaf automatic;

        static int get_enum_value(const std::string & name) {
            if (name == "manual") return 1;
            if (name == "automatic") return 2;
            return -1;
        }
};

class CISCOIETFISISMIB::CiiIPRATable::CiiIPRAEntry::CiiIPRASourceType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf static_;
        static const ydk::Enum::YLeaf direct;
        static const ydk::Enum::YLeaf ospfv2;
        static const ydk::Enum::YLeaf ospfv3;
        static const ydk::Enum::YLeaf isis;
        static const ydk::Enum::YLeaf rip;
        static const ydk::Enum::YLeaf igrp;
        static const ydk::Enum::YLeaf eigrp;
        static const ydk::Enum::YLeaf bgp;
        static const ydk::Enum::YLeaf other;

        static int get_enum_value(const std::string & name) {
            if (name == "static") return 1;
            if (name == "direct") return 2;
            if (name == "ospfv2") return 3;
            if (name == "ospfv3") return 4;
            if (name == "isis") return 5;
            if (name == "rip") return 6;
            if (name == "igrp") return 7;
            if (name == "eigrp") return 8;
            if (name == "bgp") return 9;
            if (name == "other") return 10;
            return -1;
        }
};


}
}

#endif /* _CISCO_IETF_ISIS_MIB_ */

