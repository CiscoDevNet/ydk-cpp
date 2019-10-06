#ifndef _DOCS_QOS_MIB_
#define _DOCS_QOS_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace DOCS_QOS_MIB {

class DOCSQOSMIB : public ydk::Entity
{
    public:
        DOCSQOSMIB();
        ~DOCSQOSMIB();

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

        class DocsQosPktClassTable; //type: DOCSQOSMIB::DocsQosPktClassTable
        class DocsQosParamSetTable; //type: DOCSQOSMIB::DocsQosParamSetTable
        class DocsQosServiceFlowTable; //type: DOCSQOSMIB::DocsQosServiceFlowTable
        class DocsQosServiceFlowStatsTable; //type: DOCSQOSMIB::DocsQosServiceFlowStatsTable
        class DocsQosUpstreamStatsTable; //type: DOCSQOSMIB::DocsQosUpstreamStatsTable
        class DocsQosDynamicServiceStatsTable; //type: DOCSQOSMIB::DocsQosDynamicServiceStatsTable
        class DocsQosServiceFlowLogTable; //type: DOCSQOSMIB::DocsQosServiceFlowLogTable
        class DocsQosServiceClassTable; //type: DOCSQOSMIB::DocsQosServiceClassTable
        class DocsQosServiceClassPolicyTable; //type: DOCSQOSMIB::DocsQosServiceClassPolicyTable
        class DocsQosPHSTable; //type: DOCSQOSMIB::DocsQosPHSTable
        class DocsQosCmtsMacToSrvFlowTable; //type: DOCSQOSMIB::DocsQosCmtsMacToSrvFlowTable

        std::shared_ptr<cisco_ios_xe::DOCS_QOS_MIB::DOCSQOSMIB::DocsQosPktClassTable> docsqospktclasstable;
        std::shared_ptr<cisco_ios_xe::DOCS_QOS_MIB::DOCSQOSMIB::DocsQosParamSetTable> docsqosparamsettable;
        std::shared_ptr<cisco_ios_xe::DOCS_QOS_MIB::DOCSQOSMIB::DocsQosServiceFlowTable> docsqosserviceflowtable;
        std::shared_ptr<cisco_ios_xe::DOCS_QOS_MIB::DOCSQOSMIB::DocsQosServiceFlowStatsTable> docsqosserviceflowstatstable;
        std::shared_ptr<cisco_ios_xe::DOCS_QOS_MIB::DOCSQOSMIB::DocsQosUpstreamStatsTable> docsqosupstreamstatstable;
        std::shared_ptr<cisco_ios_xe::DOCS_QOS_MIB::DOCSQOSMIB::DocsQosDynamicServiceStatsTable> docsqosdynamicservicestatstable;
        std::shared_ptr<cisco_ios_xe::DOCS_QOS_MIB::DOCSQOSMIB::DocsQosServiceFlowLogTable> docsqosserviceflowlogtable;
        std::shared_ptr<cisco_ios_xe::DOCS_QOS_MIB::DOCSQOSMIB::DocsQosServiceClassTable> docsqosserviceclasstable;
        std::shared_ptr<cisco_ios_xe::DOCS_QOS_MIB::DOCSQOSMIB::DocsQosServiceClassPolicyTable> docsqosserviceclasspolicytable;
        std::shared_ptr<cisco_ios_xe::DOCS_QOS_MIB::DOCSQOSMIB::DocsQosPHSTable> docsqosphstable;
        std::shared_ptr<cisco_ios_xe::DOCS_QOS_MIB::DOCSQOSMIB::DocsQosCmtsMacToSrvFlowTable> docsqoscmtsmactosrvflowtable;
        
}; // DOCSQOSMIB


class DOCSQOSMIB::DocsQosPktClassTable : public ydk::Entity
{
    public:
        DocsQosPktClassTable();
        ~DocsQosPktClassTable();

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

        class DocsQosPktClassEntry; //type: DOCSQOSMIB::DocsQosPktClassTable::DocsQosPktClassEntry

        ydk::YList docsqospktclassentry;
        
}; // DOCSQOSMIB::DocsQosPktClassTable


class DOCSQOSMIB::DocsQosPktClassTable::DocsQosPktClassEntry : public ydk::Entity
{
    public:
        DocsQosPktClassEntry();
        ~DocsQosPktClassEntry();

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
        ydk::YLeaf docsqospktclassid; //type: int32
        ydk::YLeaf docsqospktclassdirection; //type: IfDirection
        ydk::YLeaf docsqospktclasspriority; //type: int32
        ydk::YLeaf docsqospktclassiptoslow; //type: binary
        ydk::YLeaf docsqospktclassiptoshigh; //type: binary
        ydk::YLeaf docsqospktclassiptosmask; //type: binary
        ydk::YLeaf docsqospktclassipprotocol; //type: int32
        ydk::YLeaf docsqospktclassipsourceaddr; //type: string
        ydk::YLeaf docsqospktclassipsourcemask; //type: string
        ydk::YLeaf docsqospktclassipdestaddr; //type: string
        ydk::YLeaf docsqospktclassipdestmask; //type: string
        ydk::YLeaf docsqospktclasssourceportstart; //type: int32
        ydk::YLeaf docsqospktclasssourceportend; //type: int32
        ydk::YLeaf docsqospktclassdestportstart; //type: int32
        ydk::YLeaf docsqospktclassdestportend; //type: int32
        ydk::YLeaf docsqospktclassdestmacaddr; //type: string
        ydk::YLeaf docsqospktclassdestmacmask; //type: string
        ydk::YLeaf docsqospktclasssourcemacaddr; //type: string
        ydk::YLeaf docsqospktclassenetprotocoltype; //type: DocsQosPktClassEnetProtocolType
        ydk::YLeaf docsqospktclassenetprotocol; //type: int32
        ydk::YLeaf docsqospktclassuserpriapplies; //type: int32
        ydk::YLeaf docsqospktclassuserprilow; //type: int32
        ydk::YLeaf docsqospktclassuserprihigh; //type: int32
        ydk::YLeaf docsqospktclassvlanid; //type: int32
        ydk::YLeaf docsqospktclassstate; //type: DocsQosPktClassState
        ydk::YLeaf docsqospktclasspkts; //type: uint32
        ydk::YLeaf docsqospktclassbitmap; //type: DocsQosPktClassBitMap
        ydk::YLeaf docsqospktclassinetsourceaddrtype; //type: InetAddressType
        ydk::YLeaf docsqospktclassinetsourceaddr; //type: binary
        ydk::YLeaf docsqospktclassinetsourcemasktype; //type: InetAddressType
        ydk::YLeaf docsqospktclassinetsourcemask; //type: binary
        ydk::YLeaf docsqospktclassinetdestaddrtype; //type: InetAddressType
        ydk::YLeaf docsqospktclassinetdestaddr; //type: binary
        ydk::YLeaf docsqospktclassinetdestmasktype; //type: InetAddressType
        ydk::YLeaf docsqospktclassinetdestmask; //type: binary
        class DocsQosPktClassEnetProtocolType;
        class DocsQosPktClassState;

}; // DOCSQOSMIB::DocsQosPktClassTable::DocsQosPktClassEntry


class DOCSQOSMIB::DocsQosParamSetTable : public ydk::Entity
{
    public:
        DocsQosParamSetTable();
        ~DocsQosParamSetTable();

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

        class DocsQosParamSetEntry; //type: DOCSQOSMIB::DocsQosParamSetTable::DocsQosParamSetEntry

        ydk::YList docsqosparamsetentry;
        
}; // DOCSQOSMIB::DocsQosParamSetTable


class DOCSQOSMIB::DocsQosParamSetTable::DocsQosParamSetEntry : public ydk::Entity
{
    public:
        DocsQosParamSetEntry();
        ~DocsQosParamSetEntry();

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
        ydk::YLeaf docsqosparamsettype; //type: DocsQosParamSetType
        ydk::YLeaf docsqosparamsetserviceclassname; //type: string
        ydk::YLeaf docsqosparamsetpriority; //type: int32
        ydk::YLeaf docsqosparamsetmaxtrafficrate; //type: uint32
        ydk::YLeaf docsqosparamsetmaxtrafficburst; //type: uint32
        ydk::YLeaf docsqosparamsetminreservedrate; //type: uint32
        ydk::YLeaf docsqosparamsetminreservedpkt; //type: int32
        ydk::YLeaf docsqosparamsetactivetimeout; //type: int32
        ydk::YLeaf docsqosparamsetadmittedtimeout; //type: int32
        ydk::YLeaf docsqosparamsetmaxconcatburst; //type: int32
        ydk::YLeaf docsqosparamsetschedulingtype; //type: SchedulingType
        ydk::YLeaf docsqosparamsetnompollinterval; //type: uint32
        ydk::YLeaf docsqosparamsettolpolljitter; //type: uint32
        ydk::YLeaf docsqosparamsetunsolicitgrantsize; //type: int32
        ydk::YLeaf docsqosparamsetnomgrantinterval; //type: uint32
        ydk::YLeaf docsqosparamsettolgrantjitter; //type: uint32
        ydk::YLeaf docsqosparamsetgrantsperinterval; //type: int32
        ydk::YLeaf docsqosparamsettosandmask; //type: binary
        ydk::YLeaf docsqosparamsettosormask; //type: binary
        ydk::YLeaf docsqosparamsetmaxlatency; //type: uint32
        ydk::YLeaf docsqosparamsetrequestpolicyoct; //type: binary
        ydk::YLeaf docsqosparamsetbitmap; //type: DocsQosParamSetBitMap
        class DocsQosParamSetType;

}; // DOCSQOSMIB::DocsQosParamSetTable::DocsQosParamSetEntry


class DOCSQOSMIB::DocsQosServiceFlowTable : public ydk::Entity
{
    public:
        DocsQosServiceFlowTable();
        ~DocsQosServiceFlowTable();

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

        class DocsQosServiceFlowEntry; //type: DOCSQOSMIB::DocsQosServiceFlowTable::DocsQosServiceFlowEntry

        ydk::YList docsqosserviceflowentry;
        
}; // DOCSQOSMIB::DocsQosServiceFlowTable


class DOCSQOSMIB::DocsQosServiceFlowTable::DocsQosServiceFlowEntry : public ydk::Entity
{
    public:
        DocsQosServiceFlowEntry();
        ~DocsQosServiceFlowEntry();

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
        ydk::YLeaf docsqosserviceflowid; //type: uint32
        ydk::YLeaf docsqosserviceflowprovisionedparamsetindex; //type: uint32
        ydk::YLeaf docsqosserviceflowadmittedparamsetindex; //type: uint32
        ydk::YLeaf docsqosserviceflowactiveparamsetindex; //type: uint32
        ydk::YLeaf docsqosserviceflowsid; //type: uint32
        ydk::YLeaf docsqosserviceflowdirection; //type: IfDirection
        ydk::YLeaf docsqosserviceflowprimary; //type: boolean
        ydk::YLeaf docsqosserviceflowactivetimeout; //type: int32
        ydk::YLeaf docsqosserviceflowadmittedtimeout; //type: int32
        ydk::YLeaf docsqosserviceflowschedulingtype; //type: SchedulingType
        ydk::YLeaf docsqosserviceflowrequestpolicy; //type: binary
        ydk::YLeaf docsqosserviceflowtosandmask; //type: binary
        ydk::YLeaf docsqosserviceflowtosormask; //type: binary

}; // DOCSQOSMIB::DocsQosServiceFlowTable::DocsQosServiceFlowEntry


class DOCSQOSMIB::DocsQosServiceFlowStatsTable : public ydk::Entity
{
    public:
        DocsQosServiceFlowStatsTable();
        ~DocsQosServiceFlowStatsTable();

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

        class DocsQosServiceFlowStatsEntry; //type: DOCSQOSMIB::DocsQosServiceFlowStatsTable::DocsQosServiceFlowStatsEntry

        ydk::YList docsqosserviceflowstatsentry;
        
}; // DOCSQOSMIB::DocsQosServiceFlowStatsTable


class DOCSQOSMIB::DocsQosServiceFlowStatsTable::DocsQosServiceFlowStatsEntry : public ydk::Entity
{
    public:
        DocsQosServiceFlowStatsEntry();
        ~DocsQosServiceFlowStatsEntry();

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
        ydk::YLeaf docsqosserviceflowpkts; //type: uint32
        ydk::YLeaf docsqosserviceflowoctets; //type: uint32
        ydk::YLeaf docsqosserviceflowtimecreated; //type: uint32
        ydk::YLeaf docsqosserviceflowtimeactive; //type: uint32
        ydk::YLeaf docsqosserviceflowphsunknowns; //type: uint32
        ydk::YLeaf docsqosserviceflowpoliceddroppkts; //type: uint32
        ydk::YLeaf docsqosserviceflowpoliceddelaypkts; //type: uint32

}; // DOCSQOSMIB::DocsQosServiceFlowStatsTable::DocsQosServiceFlowStatsEntry


class DOCSQOSMIB::DocsQosUpstreamStatsTable : public ydk::Entity
{
    public:
        DocsQosUpstreamStatsTable();
        ~DocsQosUpstreamStatsTable();

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

        class DocsQosUpstreamStatsEntry; //type: DOCSQOSMIB::DocsQosUpstreamStatsTable::DocsQosUpstreamStatsEntry

        ydk::YList docsqosupstreamstatsentry;
        
}; // DOCSQOSMIB::DocsQosUpstreamStatsTable


class DOCSQOSMIB::DocsQosUpstreamStatsTable::DocsQosUpstreamStatsEntry : public ydk::Entity
{
    public:
        DocsQosUpstreamStatsEntry();
        ~DocsQosUpstreamStatsEntry();

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
        ydk::YLeaf docsqossid; //type: int32
        ydk::YLeaf docsqosupstreamfragments; //type: uint32
        ydk::YLeaf docsqosupstreamfragdiscards; //type: uint32
        ydk::YLeaf docsqosupstreamconcatbursts; //type: uint32

}; // DOCSQOSMIB::DocsQosUpstreamStatsTable::DocsQosUpstreamStatsEntry


class DOCSQOSMIB::DocsQosDynamicServiceStatsTable : public ydk::Entity
{
    public:
        DocsQosDynamicServiceStatsTable();
        ~DocsQosDynamicServiceStatsTable();

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

        class DocsQosDynamicServiceStatsEntry; //type: DOCSQOSMIB::DocsQosDynamicServiceStatsTable::DocsQosDynamicServiceStatsEntry

        ydk::YList docsqosdynamicservicestatsentry;
        
}; // DOCSQOSMIB::DocsQosDynamicServiceStatsTable


class DOCSQOSMIB::DocsQosDynamicServiceStatsTable::DocsQosDynamicServiceStatsEntry : public ydk::Entity
{
    public:
        DocsQosDynamicServiceStatsEntry();
        ~DocsQosDynamicServiceStatsEntry();

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
        ydk::YLeaf docsqosifdirection; //type: IfDirection
        ydk::YLeaf docsqosdsareqs; //type: uint32
        ydk::YLeaf docsqosdsarsps; //type: uint32
        ydk::YLeaf docsqosdsaacks; //type: uint32
        ydk::YLeaf docsqosdscreqs; //type: uint32
        ydk::YLeaf docsqosdscrsps; //type: uint32
        ydk::YLeaf docsqosdscacks; //type: uint32
        ydk::YLeaf docsqosdsdreqs; //type: uint32
        ydk::YLeaf docsqosdsdrsps; //type: uint32
        ydk::YLeaf docsqosdynamicadds; //type: uint32
        ydk::YLeaf docsqosdynamicaddfails; //type: uint32
        ydk::YLeaf docsqosdynamicchanges; //type: uint32
        ydk::YLeaf docsqosdynamicchangefails; //type: uint32
        ydk::YLeaf docsqosdynamicdeletes; //type: uint32
        ydk::YLeaf docsqosdynamicdeletefails; //type: uint32
        ydk::YLeaf docsqosdccreqs; //type: uint32
        ydk::YLeaf docsqosdccrsps; //type: uint32
        ydk::YLeaf docsqosdccacks; //type: uint32
        ydk::YLeaf docsqosdccs; //type: uint32
        ydk::YLeaf docsqosdccfails; //type: uint32
        ydk::YLeaf docsqosdccrspdeparts; //type: uint32
        ydk::YLeaf docsqosdccrsparrives; //type: uint32

}; // DOCSQOSMIB::DocsQosDynamicServiceStatsTable::DocsQosDynamicServiceStatsEntry


class DOCSQOSMIB::DocsQosServiceFlowLogTable : public ydk::Entity
{
    public:
        DocsQosServiceFlowLogTable();
        ~DocsQosServiceFlowLogTable();

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

        class DocsQosServiceFlowLogEntry; //type: DOCSQOSMIB::DocsQosServiceFlowLogTable::DocsQosServiceFlowLogEntry

        ydk::YList docsqosserviceflowlogentry;
        
}; // DOCSQOSMIB::DocsQosServiceFlowLogTable


class DOCSQOSMIB::DocsQosServiceFlowLogTable::DocsQosServiceFlowLogEntry : public ydk::Entity
{
    public:
        DocsQosServiceFlowLogEntry();
        ~DocsQosServiceFlowLogEntry();

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

        ydk::YLeaf docsqosserviceflowlogindex; //type: uint32
        ydk::YLeaf docsqosserviceflowlogifindex; //type: int32
        ydk::YLeaf docsqosserviceflowlogsfid; //type: uint32
        ydk::YLeaf docsqosserviceflowlogcmmac; //type: string
        ydk::YLeaf docsqosserviceflowlogpkts; //type: uint32
        ydk::YLeaf docsqosserviceflowlogoctets; //type: uint32
        ydk::YLeaf docsqosserviceflowlogtimedeleted; //type: uint32
        ydk::YLeaf docsqosserviceflowlogtimecreated; //type: uint32
        ydk::YLeaf docsqosserviceflowlogtimeactive; //type: uint32
        ydk::YLeaf docsqosserviceflowlogdirection; //type: IfDirection
        ydk::YLeaf docsqosserviceflowlogprimary; //type: boolean
        ydk::YLeaf docsqosserviceflowlogserviceclassname; //type: string
        ydk::YLeaf docsqosserviceflowlogpoliceddroppkts; //type: uint32
        ydk::YLeaf docsqosserviceflowlogpoliceddelaypkts; //type: uint32
        ydk::YLeaf docsqosserviceflowlogcontrol; //type: DocsQosServiceFlowLogControl
        class DocsQosServiceFlowLogControl;

}; // DOCSQOSMIB::DocsQosServiceFlowLogTable::DocsQosServiceFlowLogEntry


class DOCSQOSMIB::DocsQosServiceClassTable : public ydk::Entity
{
    public:
        DocsQosServiceClassTable();
        ~DocsQosServiceClassTable();

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

        class DocsQosServiceClassEntry; //type: DOCSQOSMIB::DocsQosServiceClassTable::DocsQosServiceClassEntry

        ydk::YList docsqosserviceclassentry;
        
}; // DOCSQOSMIB::DocsQosServiceClassTable


class DOCSQOSMIB::DocsQosServiceClassTable::DocsQosServiceClassEntry : public ydk::Entity
{
    public:
        DocsQosServiceClassEntry();
        ~DocsQosServiceClassEntry();

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

        ydk::YLeaf docsqosserviceclassname; //type: string
        ydk::YLeaf docsqosserviceclassparamsetindex; //type: uint32
        ydk::YLeaf docsqosserviceclassstatus; //type: RowStatus
        ydk::YLeaf docsqosserviceclasspriority; //type: int32
        ydk::YLeaf docsqosserviceclassmaxtrafficrate; //type: uint32
        ydk::YLeaf docsqosserviceclassmaxtrafficburst; //type: uint32
        ydk::YLeaf docsqosserviceclassminreservedrate; //type: uint32
        ydk::YLeaf docsqosserviceclassminreservedpkt; //type: int32
        ydk::YLeaf docsqosserviceclassmaxconcatburst; //type: int32
        ydk::YLeaf docsqosserviceclassnompollinterval; //type: uint32
        ydk::YLeaf docsqosserviceclasstolpolljitter; //type: uint32
        ydk::YLeaf docsqosserviceclassunsolicitgrantsize; //type: int32
        ydk::YLeaf docsqosserviceclassnomgrantinterval; //type: uint32
        ydk::YLeaf docsqosserviceclasstolgrantjitter; //type: uint32
        ydk::YLeaf docsqosserviceclassgrantsperinterval; //type: int32
        ydk::YLeaf docsqosserviceclassmaxlatency; //type: uint32
        ydk::YLeaf docsqosserviceclassactivetimeout; //type: int32
        ydk::YLeaf docsqosserviceclassadmittedtimeout; //type: int32
        ydk::YLeaf docsqosserviceclassschedulingtype; //type: SchedulingType
        ydk::YLeaf docsqosserviceclassrequestpolicy; //type: binary
        ydk::YLeaf docsqosserviceclasstosandmask; //type: binary
        ydk::YLeaf docsqosserviceclasstosormask; //type: binary
        ydk::YLeaf docsqosserviceclassdirection; //type: IfDirection

}; // DOCSQOSMIB::DocsQosServiceClassTable::DocsQosServiceClassEntry


class DOCSQOSMIB::DocsQosServiceClassPolicyTable : public ydk::Entity
{
    public:
        DocsQosServiceClassPolicyTable();
        ~DocsQosServiceClassPolicyTable();

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

        class DocsQosServiceClassPolicyEntry; //type: DOCSQOSMIB::DocsQosServiceClassPolicyTable::DocsQosServiceClassPolicyEntry

        ydk::YList docsqosserviceclasspolicyentry;
        
}; // DOCSQOSMIB::DocsQosServiceClassPolicyTable


class DOCSQOSMIB::DocsQosServiceClassPolicyTable::DocsQosServiceClassPolicyEntry : public ydk::Entity
{
    public:
        DocsQosServiceClassPolicyEntry();
        ~DocsQosServiceClassPolicyEntry();

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

        ydk::YLeaf docsqosserviceclasspolicyindex; //type: int32
        ydk::YLeaf docsqosserviceclasspolicyname; //type: string
        ydk::YLeaf docsqosserviceclasspolicyrulepriority; //type: int32
        ydk::YLeaf docsqosserviceclasspolicystatus; //type: RowStatus

}; // DOCSQOSMIB::DocsQosServiceClassPolicyTable::DocsQosServiceClassPolicyEntry


class DOCSQOSMIB::DocsQosPHSTable : public ydk::Entity
{
    public:
        DocsQosPHSTable();
        ~DocsQosPHSTable();

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

        class DocsQosPHSEntry; //type: DOCSQOSMIB::DocsQosPHSTable::DocsQosPHSEntry

        ydk::YList docsqosphsentry;
        
}; // DOCSQOSMIB::DocsQosPHSTable


class DOCSQOSMIB::DocsQosPHSTable::DocsQosPHSEntry : public ydk::Entity
{
    public:
        DocsQosPHSEntry();
        ~DocsQosPHSEntry();

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
        ydk::YLeaf docsqosphsfield; //type: binary
        ydk::YLeaf docsqosphsmask; //type: binary
        ydk::YLeaf docsqosphssize; //type: int32
        ydk::YLeaf docsqosphsverify; //type: boolean
        ydk::YLeaf docsqosphsclassifierindex; //type: int32
        ydk::YLeaf docsqosphsindex; //type: int32

}; // DOCSQOSMIB::DocsQosPHSTable::DocsQosPHSEntry


class DOCSQOSMIB::DocsQosCmtsMacToSrvFlowTable : public ydk::Entity
{
    public:
        DocsQosCmtsMacToSrvFlowTable();
        ~DocsQosCmtsMacToSrvFlowTable();

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

        class DocsQosCmtsMacToSrvFlowEntry; //type: DOCSQOSMIB::DocsQosCmtsMacToSrvFlowTable::DocsQosCmtsMacToSrvFlowEntry

        ydk::YList docsqoscmtsmactosrvflowentry;
        
}; // DOCSQOSMIB::DocsQosCmtsMacToSrvFlowTable


class DOCSQOSMIB::DocsQosCmtsMacToSrvFlowTable::DocsQosCmtsMacToSrvFlowEntry : public ydk::Entity
{
    public:
        DocsQosCmtsMacToSrvFlowEntry();
        ~DocsQosCmtsMacToSrvFlowEntry();

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

        ydk::YLeaf docsqoscmtscmmac; //type: string
        ydk::YLeaf docsqoscmtsserviceflowid; //type: uint32
        ydk::YLeaf docsqoscmtsifindex; //type: int32

}; // DOCSQOSMIB::DocsQosCmtsMacToSrvFlowTable::DocsQosCmtsMacToSrvFlowEntry

class IfDirection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf downstream;
        static const ydk::Enum::YLeaf upstream;

        static int get_enum_value(const std::string & name) {
            if (name == "downstream") return 1;
            if (name == "upstream") return 2;
            return -1;
        }
};

class SchedulingType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf undefined;
        static const ydk::Enum::YLeaf bestEffort;
        static const ydk::Enum::YLeaf nonRealTimePollingService;
        static const ydk::Enum::YLeaf realTimePollingService;
        static const ydk::Enum::YLeaf unsolictedGrantServiceWithAD;
        static const ydk::Enum::YLeaf unsolictedGrantService;

        static int get_enum_value(const std::string & name) {
            if (name == "undefined") return 1;
            if (name == "bestEffort") return 2;
            if (name == "nonRealTimePollingService") return 3;
            if (name == "realTimePollingService") return 4;
            if (name == "unsolictedGrantServiceWithAD") return 5;
            if (name == "unsolictedGrantService") return 6;
            return -1;
        }
};

class DOCSQOSMIB::DocsQosPktClassTable::DocsQosPktClassEntry::DocsQosPktClassEnetProtocolType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf ethertype;
        static const ydk::Enum::YLeaf dsap;
        static const ydk::Enum::YLeaf mac;
        static const ydk::Enum::YLeaf all;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "ethertype") return 1;
            if (name == "dsap") return 2;
            if (name == "mac") return 3;
            if (name == "all") return 4;
            return -1;
        }
};

class DOCSQOSMIB::DocsQosPktClassTable::DocsQosPktClassEntry::DocsQosPktClassState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf inactive;

        static int get_enum_value(const std::string & name) {
            if (name == "active") return 1;
            if (name == "inactive") return 2;
            return -1;
        }
};

class DOCSQOSMIB::DocsQosParamSetTable::DocsQosParamSetEntry::DocsQosParamSetType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf admitted;
        static const ydk::Enum::YLeaf provisioned;

        static int get_enum_value(const std::string & name) {
            if (name == "active") return 1;
            if (name == "admitted") return 2;
            if (name == "provisioned") return 3;
            return -1;
        }
};

class DOCSQOSMIB::DocsQosServiceFlowLogTable::DocsQosServiceFlowLogEntry::DocsQosServiceFlowLogControl : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf destroy;

        static int get_enum_value(const std::string & name) {
            if (name == "active") return 1;
            if (name == "destroy") return 6;
            return -1;
        }
};


}
}

#endif /* _DOCS_QOS_MIB_ */

