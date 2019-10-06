#ifndef _MPLS_LDP_STD_MIB_
#define _MPLS_LDP_STD_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace MPLS_LDP_STD_MIB {

class MPLSLDPSTDMIB : public ydk::Entity
{
    public:
        MPLSLDPSTDMIB();
        ~MPLSLDPSTDMIB();

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

        class MplsLdpLsrObjects; //type: MPLSLDPSTDMIB::MplsLdpLsrObjects
        class MplsLdpEntityObjects; //type: MPLSLDPSTDMIB::MplsLdpEntityObjects
        class MplsLdpSessionObjects; //type: MPLSLDPSTDMIB::MplsLdpSessionObjects
        class MplsFecObjects; //type: MPLSLDPSTDMIB::MplsFecObjects
        class MplsLdpEntityTable; //type: MPLSLDPSTDMIB::MplsLdpEntityTable
        class MplsLdpPeerTable; //type: MPLSLDPSTDMIB::MplsLdpPeerTable
        class MplsLdpHelloAdjacencyTable; //type: MPLSLDPSTDMIB::MplsLdpHelloAdjacencyTable
        class MplsInSegmentLdpLspTable; //type: MPLSLDPSTDMIB::MplsInSegmentLdpLspTable
        class MplsOutSegmentLdpLspTable; //type: MPLSLDPSTDMIB::MplsOutSegmentLdpLspTable
        class MplsFecTable; //type: MPLSLDPSTDMIB::MplsFecTable
        class MplsLdpLspFecTable; //type: MPLSLDPSTDMIB::MplsLdpLspFecTable
        class MplsLdpSessionPeerAddrTable; //type: MPLSLDPSTDMIB::MplsLdpSessionPeerAddrTable

        std::shared_ptr<cisco_ios_xe::MPLS_LDP_STD_MIB::MPLSLDPSTDMIB::MplsLdpLsrObjects> mplsldplsrobjects;
        std::shared_ptr<cisco_ios_xe::MPLS_LDP_STD_MIB::MPLSLDPSTDMIB::MplsLdpEntityObjects> mplsldpentityobjects;
        std::shared_ptr<cisco_ios_xe::MPLS_LDP_STD_MIB::MPLSLDPSTDMIB::MplsLdpSessionObjects> mplsldpsessionobjects;
        std::shared_ptr<cisco_ios_xe::MPLS_LDP_STD_MIB::MPLSLDPSTDMIB::MplsFecObjects> mplsfecobjects;
        std::shared_ptr<cisco_ios_xe::MPLS_LDP_STD_MIB::MPLSLDPSTDMIB::MplsLdpEntityTable> mplsldpentitytable;
        std::shared_ptr<cisco_ios_xe::MPLS_LDP_STD_MIB::MPLSLDPSTDMIB::MplsLdpPeerTable> mplsldppeertable;
        std::shared_ptr<cisco_ios_xe::MPLS_LDP_STD_MIB::MPLSLDPSTDMIB::MplsLdpHelloAdjacencyTable> mplsldphelloadjacencytable;
        std::shared_ptr<cisco_ios_xe::MPLS_LDP_STD_MIB::MPLSLDPSTDMIB::MplsInSegmentLdpLspTable> mplsinsegmentldplsptable;
        std::shared_ptr<cisco_ios_xe::MPLS_LDP_STD_MIB::MPLSLDPSTDMIB::MplsOutSegmentLdpLspTable> mplsoutsegmentldplsptable;
        std::shared_ptr<cisco_ios_xe::MPLS_LDP_STD_MIB::MPLSLDPSTDMIB::MplsFecTable> mplsfectable;
        std::shared_ptr<cisco_ios_xe::MPLS_LDP_STD_MIB::MPLSLDPSTDMIB::MplsLdpLspFecTable> mplsldplspfectable;
        std::shared_ptr<cisco_ios_xe::MPLS_LDP_STD_MIB::MPLSLDPSTDMIB::MplsLdpSessionPeerAddrTable> mplsldpsessionpeeraddrtable;
        
}; // MPLSLDPSTDMIB


class MPLSLDPSTDMIB::MplsLdpLsrObjects : public ydk::Entity
{
    public:
        MplsLdpLsrObjects();
        ~MplsLdpLsrObjects();

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

        ydk::YLeaf mplsldplsrid; //type: binary
        ydk::YLeaf mplsldplsrloopdetectioncapable; //type: MplsLdpLsrLoopDetectionCapable
        class MplsLdpLsrLoopDetectionCapable;

}; // MPLSLDPSTDMIB::MplsLdpLsrObjects


class MPLSLDPSTDMIB::MplsLdpEntityObjects : public ydk::Entity
{
    public:
        MplsLdpEntityObjects();
        ~MplsLdpEntityObjects();

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

        ydk::YLeaf mplsldpentitylastchange; //type: uint32
        ydk::YLeaf mplsldpentityindexnext; //type: uint32

}; // MPLSLDPSTDMIB::MplsLdpEntityObjects


class MPLSLDPSTDMIB::MplsLdpSessionObjects : public ydk::Entity
{
    public:
        MplsLdpSessionObjects();
        ~MplsLdpSessionObjects();

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

        ydk::YLeaf mplsldppeerlastchange; //type: uint32
        ydk::YLeaf mplsldplspfeclastchange; //type: uint32

}; // MPLSLDPSTDMIB::MplsLdpSessionObjects


class MPLSLDPSTDMIB::MplsFecObjects : public ydk::Entity
{
    public:
        MplsFecObjects();
        ~MplsFecObjects();

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

        ydk::YLeaf mplsfeclastchange; //type: uint32
        ydk::YLeaf mplsfecindexnext; //type: uint32

}; // MPLSLDPSTDMIB::MplsFecObjects


class MPLSLDPSTDMIB::MplsLdpEntityTable : public ydk::Entity
{
    public:
        MplsLdpEntityTable();
        ~MplsLdpEntityTable();

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

        class MplsLdpEntityEntry; //type: MPLSLDPSTDMIB::MplsLdpEntityTable::MplsLdpEntityEntry

        ydk::YList mplsldpentityentry;
        
}; // MPLSLDPSTDMIB::MplsLdpEntityTable


class MPLSLDPSTDMIB::MplsLdpEntityTable::MplsLdpEntityEntry : public ydk::Entity
{
    public:
        MplsLdpEntityEntry();
        ~MplsLdpEntityEntry();

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

        ydk::YLeaf mplsldpentityldpid; //type: string
        ydk::YLeaf mplsldpentityindex; //type: uint32
        ydk::YLeaf mplsldpentityprotocolversion; //type: uint32
        ydk::YLeaf mplsldpentityadminstatus; //type: MplsLdpEntityAdminStatus
        ydk::YLeaf mplsldpentityoperstatus; //type: MplsLdpEntityOperStatus
        ydk::YLeaf mplsldpentitytcpport; //type: uint16
        ydk::YLeaf mplsldpentityudpdscport; //type: uint16
        ydk::YLeaf mplsldpentitymaxpdulength; //type: uint32
        ydk::YLeaf mplsldpentitykeepaliveholdtimer; //type: uint32
        ydk::YLeaf mplsldpentityhelloholdtimer; //type: uint32
        ydk::YLeaf mplsldpentityinitsessionthreshold; //type: int32
        ydk::YLeaf mplsldpentitylabeldistmethod; //type: MplsLabelDistributionMethod
        ydk::YLeaf mplsldpentitylabelretentionmode; //type: MplsRetentionMode
        ydk::YLeaf mplsldpentitypathvectorlimit; //type: int32
        ydk::YLeaf mplsldpentityhopcountlimit; //type: int32
        ydk::YLeaf mplsldpentitytransportaddrkind; //type: MplsLdpEntityTransportAddrKind
        ydk::YLeaf mplsldpentitytargetpeer; //type: boolean
        ydk::YLeaf mplsldpentitytargetpeeraddrtype; //type: InetAddressType
        ydk::YLeaf mplsldpentitytargetpeeraddr; //type: binary
        ydk::YLeaf mplsldpentitylabeltype; //type: MplsLdpLabelType
        ydk::YLeaf mplsldpentitydiscontinuitytime; //type: uint32
        ydk::YLeaf mplsldpentitystoragetype; //type: StorageType
        ydk::YLeaf mplsldpentityrowstatus; //type: RowStatus
        ydk::YLeaf mplsldpentitystatssessionattempts; //type: uint32
        ydk::YLeaf mplsldpentitystatssessionrejectednohelloerrors; //type: uint32
        ydk::YLeaf mplsldpentitystatssessionrejectedaderrors; //type: uint32
        ydk::YLeaf mplsldpentitystatssessionrejectedmaxpduerrors; //type: uint32
        ydk::YLeaf mplsldpentitystatssessionrejectedlrerrors; //type: uint32
        ydk::YLeaf mplsldpentitystatsbadldpidentifiererrors; //type: uint32
        ydk::YLeaf mplsldpentitystatsbadpdulengtherrors; //type: uint32
        ydk::YLeaf mplsldpentitystatsbadmessagelengtherrors; //type: uint32
        ydk::YLeaf mplsldpentitystatsbadtlvlengtherrors; //type: uint32
        ydk::YLeaf mplsldpentitystatsmalformedtlvvalueerrors; //type: uint32
        ydk::YLeaf mplsldpentitystatskeepalivetimerexperrors; //type: uint32
        ydk::YLeaf mplsldpentitystatsshutdownreceivednotifications; //type: uint32
        ydk::YLeaf mplsldpentitystatsshutdownsentnotifications; //type: uint32
        class MplsLdpEntityAdminStatus;
        class MplsLdpEntityOperStatus;
        class MplsLdpEntityTransportAddrKind;

}; // MPLSLDPSTDMIB::MplsLdpEntityTable::MplsLdpEntityEntry


class MPLSLDPSTDMIB::MplsLdpPeerTable : public ydk::Entity
{
    public:
        MplsLdpPeerTable();
        ~MplsLdpPeerTable();

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

        class MplsLdpPeerEntry; //type: MPLSLDPSTDMIB::MplsLdpPeerTable::MplsLdpPeerEntry

        ydk::YList mplsldppeerentry;
        
}; // MPLSLDPSTDMIB::MplsLdpPeerTable


class MPLSLDPSTDMIB::MplsLdpPeerTable::MplsLdpPeerEntry : public ydk::Entity
{
    public:
        MplsLdpPeerEntry();
        ~MplsLdpPeerEntry();

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

        //type: string (refers to cisco_ios_xe::MPLS_LDP_STD_MIB::MPLSLDPSTDMIB::MplsLdpEntityTable::MplsLdpEntityEntry::mplsldpentityldpid)
        ydk::YLeaf mplsldpentityldpid;
        //type: uint32 (refers to cisco_ios_xe::MPLS_LDP_STD_MIB::MPLSLDPSTDMIB::MplsLdpEntityTable::MplsLdpEntityEntry::mplsldpentityindex)
        ydk::YLeaf mplsldpentityindex;
        ydk::YLeaf mplsldppeerldpid; //type: string
        ydk::YLeaf mplsldppeerlabeldistmethod; //type: MplsLabelDistributionMethod
        ydk::YLeaf mplsldppeerpathvectorlimit; //type: int32
        ydk::YLeaf mplsldppeertransportaddrtype; //type: InetAddressType
        ydk::YLeaf mplsldppeertransportaddr; //type: binary
        ydk::YLeaf mplsldpsessionstatelastchange; //type: uint32
        ydk::YLeaf mplsldpsessionstate; //type: MplsLdpSessionState
        ydk::YLeaf mplsldpsessionrole; //type: MplsLdpSessionRole
        ydk::YLeaf mplsldpsessionprotocolversion; //type: uint32
        ydk::YLeaf mplsldpsessionkeepaliveholdtimerem; //type: int32
        ydk::YLeaf mplsldpsessionkeepalivetime; //type: uint32
        ydk::YLeaf mplsldpsessionmaxpdulength; //type: uint32
        ydk::YLeaf mplsldpsessiondiscontinuitytime; //type: uint32
        ydk::YLeaf mplsldpsessionstatsunknownmestypeerrors; //type: uint32
        ydk::YLeaf mplsldpsessionstatsunknowntlverrors; //type: uint32
        class MplsLdpSessionState;
        class MplsLdpSessionRole;

}; // MPLSLDPSTDMIB::MplsLdpPeerTable::MplsLdpPeerEntry


class MPLSLDPSTDMIB::MplsLdpHelloAdjacencyTable : public ydk::Entity
{
    public:
        MplsLdpHelloAdjacencyTable();
        ~MplsLdpHelloAdjacencyTable();

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

        class MplsLdpHelloAdjacencyEntry; //type: MPLSLDPSTDMIB::MplsLdpHelloAdjacencyTable::MplsLdpHelloAdjacencyEntry

        ydk::YList mplsldphelloadjacencyentry;
        
}; // MPLSLDPSTDMIB::MplsLdpHelloAdjacencyTable


class MPLSLDPSTDMIB::MplsLdpHelloAdjacencyTable::MplsLdpHelloAdjacencyEntry : public ydk::Entity
{
    public:
        MplsLdpHelloAdjacencyEntry();
        ~MplsLdpHelloAdjacencyEntry();

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

        //type: string (refers to cisco_ios_xe::MPLS_LDP_STD_MIB::MPLSLDPSTDMIB::MplsLdpEntityTable::MplsLdpEntityEntry::mplsldpentityldpid)
        ydk::YLeaf mplsldpentityldpid;
        //type: uint32 (refers to cisco_ios_xe::MPLS_LDP_STD_MIB::MPLSLDPSTDMIB::MplsLdpEntityTable::MplsLdpEntityEntry::mplsldpentityindex)
        ydk::YLeaf mplsldpentityindex;
        //type: string (refers to cisco_ios_xe::MPLS_LDP_STD_MIB::MPLSLDPSTDMIB::MplsLdpPeerTable::MplsLdpPeerEntry::mplsldppeerldpid)
        ydk::YLeaf mplsldppeerldpid;
        ydk::YLeaf mplsldphelloadjacencyindex; //type: uint32
        ydk::YLeaf mplsldphelloadjacencyholdtimerem; //type: int32
        ydk::YLeaf mplsldphelloadjacencyholdtime; //type: uint32
        ydk::YLeaf mplsldphelloadjacencytype; //type: MplsLdpHelloAdjacencyType
        class MplsLdpHelloAdjacencyType;

}; // MPLSLDPSTDMIB::MplsLdpHelloAdjacencyTable::MplsLdpHelloAdjacencyEntry


class MPLSLDPSTDMIB::MplsInSegmentLdpLspTable : public ydk::Entity
{
    public:
        MplsInSegmentLdpLspTable();
        ~MplsInSegmentLdpLspTable();

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

        class MplsInSegmentLdpLspEntry; //type: MPLSLDPSTDMIB::MplsInSegmentLdpLspTable::MplsInSegmentLdpLspEntry

        ydk::YList mplsinsegmentldplspentry;
        
}; // MPLSLDPSTDMIB::MplsInSegmentLdpLspTable


class MPLSLDPSTDMIB::MplsInSegmentLdpLspTable::MplsInSegmentLdpLspEntry : public ydk::Entity
{
    public:
        MplsInSegmentLdpLspEntry();
        ~MplsInSegmentLdpLspEntry();

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

        //type: string (refers to cisco_ios_xe::MPLS_LDP_STD_MIB::MPLSLDPSTDMIB::MplsLdpEntityTable::MplsLdpEntityEntry::mplsldpentityldpid)
        ydk::YLeaf mplsldpentityldpid;
        //type: uint32 (refers to cisco_ios_xe::MPLS_LDP_STD_MIB::MPLSLDPSTDMIB::MplsLdpEntityTable::MplsLdpEntityEntry::mplsldpentityindex)
        ydk::YLeaf mplsldpentityindex;
        //type: string (refers to cisco_ios_xe::MPLS_LDP_STD_MIB::MPLSLDPSTDMIB::MplsLdpPeerTable::MplsLdpPeerEntry::mplsldppeerldpid)
        ydk::YLeaf mplsldppeerldpid;
        ydk::YLeaf mplsinsegmentldplspindex; //type: binary
        ydk::YLeaf mplsinsegmentldplsplabeltype; //type: MplsLdpLabelType
        ydk::YLeaf mplsinsegmentldplsptype; //type: MplsLspType

}; // MPLSLDPSTDMIB::MplsInSegmentLdpLspTable::MplsInSegmentLdpLspEntry


class MPLSLDPSTDMIB::MplsOutSegmentLdpLspTable : public ydk::Entity
{
    public:
        MplsOutSegmentLdpLspTable();
        ~MplsOutSegmentLdpLspTable();

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

        class MplsOutSegmentLdpLspEntry; //type: MPLSLDPSTDMIB::MplsOutSegmentLdpLspTable::MplsOutSegmentLdpLspEntry

        ydk::YList mplsoutsegmentldplspentry;
        
}; // MPLSLDPSTDMIB::MplsOutSegmentLdpLspTable


class MPLSLDPSTDMIB::MplsOutSegmentLdpLspTable::MplsOutSegmentLdpLspEntry : public ydk::Entity
{
    public:
        MplsOutSegmentLdpLspEntry();
        ~MplsOutSegmentLdpLspEntry();

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

        //type: string (refers to cisco_ios_xe::MPLS_LDP_STD_MIB::MPLSLDPSTDMIB::MplsLdpEntityTable::MplsLdpEntityEntry::mplsldpentityldpid)
        ydk::YLeaf mplsldpentityldpid;
        //type: uint32 (refers to cisco_ios_xe::MPLS_LDP_STD_MIB::MPLSLDPSTDMIB::MplsLdpEntityTable::MplsLdpEntityEntry::mplsldpentityindex)
        ydk::YLeaf mplsldpentityindex;
        //type: string (refers to cisco_ios_xe::MPLS_LDP_STD_MIB::MPLSLDPSTDMIB::MplsLdpPeerTable::MplsLdpPeerEntry::mplsldppeerldpid)
        ydk::YLeaf mplsldppeerldpid;
        ydk::YLeaf mplsoutsegmentldplspindex; //type: binary
        ydk::YLeaf mplsoutsegmentldplsplabeltype; //type: MplsLdpLabelType
        ydk::YLeaf mplsoutsegmentldplsptype; //type: MplsLspType

}; // MPLSLDPSTDMIB::MplsOutSegmentLdpLspTable::MplsOutSegmentLdpLspEntry


class MPLSLDPSTDMIB::MplsFecTable : public ydk::Entity
{
    public:
        MplsFecTable();
        ~MplsFecTable();

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

        class MplsFecEntry; //type: MPLSLDPSTDMIB::MplsFecTable::MplsFecEntry

        ydk::YList mplsfecentry;
        
}; // MPLSLDPSTDMIB::MplsFecTable


class MPLSLDPSTDMIB::MplsFecTable::MplsFecEntry : public ydk::Entity
{
    public:
        MplsFecEntry();
        ~MplsFecEntry();

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

        ydk::YLeaf mplsfecindex; //type: uint32
        ydk::YLeaf mplsfectype; //type: MplsFecType
        ydk::YLeaf mplsfecaddrprefixlength; //type: uint32
        ydk::YLeaf mplsfecaddrtype; //type: InetAddressType
        ydk::YLeaf mplsfecaddr; //type: binary
        ydk::YLeaf mplsfecstoragetype; //type: StorageType
        ydk::YLeaf mplsfecrowstatus; //type: RowStatus
        class MplsFecType;

}; // MPLSLDPSTDMIB::MplsFecTable::MplsFecEntry


class MPLSLDPSTDMIB::MplsLdpLspFecTable : public ydk::Entity
{
    public:
        MplsLdpLspFecTable();
        ~MplsLdpLspFecTable();

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

        class MplsLdpLspFecEntry; //type: MPLSLDPSTDMIB::MplsLdpLspFecTable::MplsLdpLspFecEntry

        ydk::YList mplsldplspfecentry;
        
}; // MPLSLDPSTDMIB::MplsLdpLspFecTable


class MPLSLDPSTDMIB::MplsLdpLspFecTable::MplsLdpLspFecEntry : public ydk::Entity
{
    public:
        MplsLdpLspFecEntry();
        ~MplsLdpLspFecEntry();

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

        //type: string (refers to cisco_ios_xe::MPLS_LDP_STD_MIB::MPLSLDPSTDMIB::MplsLdpEntityTable::MplsLdpEntityEntry::mplsldpentityldpid)
        ydk::YLeaf mplsldpentityldpid;
        //type: uint32 (refers to cisco_ios_xe::MPLS_LDP_STD_MIB::MPLSLDPSTDMIB::MplsLdpEntityTable::MplsLdpEntityEntry::mplsldpentityindex)
        ydk::YLeaf mplsldpentityindex;
        //type: string (refers to cisco_ios_xe::MPLS_LDP_STD_MIB::MPLSLDPSTDMIB::MplsLdpPeerTable::MplsLdpPeerEntry::mplsldppeerldpid)
        ydk::YLeaf mplsldppeerldpid;
        ydk::YLeaf mplsldplspfecsegment; //type: MplsLdpLspFecSegment
        ydk::YLeaf mplsldplspfecsegmentindex; //type: binary
        ydk::YLeaf mplsldplspfecindex; //type: uint32
        ydk::YLeaf mplsldplspfecstoragetype; //type: StorageType
        ydk::YLeaf mplsldplspfecrowstatus; //type: RowStatus
        class MplsLdpLspFecSegment;

}; // MPLSLDPSTDMIB::MplsLdpLspFecTable::MplsLdpLspFecEntry


class MPLSLDPSTDMIB::MplsLdpSessionPeerAddrTable : public ydk::Entity
{
    public:
        MplsLdpSessionPeerAddrTable();
        ~MplsLdpSessionPeerAddrTable();

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

        class MplsLdpSessionPeerAddrEntry; //type: MPLSLDPSTDMIB::MplsLdpSessionPeerAddrTable::MplsLdpSessionPeerAddrEntry

        ydk::YList mplsldpsessionpeeraddrentry;
        
}; // MPLSLDPSTDMIB::MplsLdpSessionPeerAddrTable


class MPLSLDPSTDMIB::MplsLdpSessionPeerAddrTable::MplsLdpSessionPeerAddrEntry : public ydk::Entity
{
    public:
        MplsLdpSessionPeerAddrEntry();
        ~MplsLdpSessionPeerAddrEntry();

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

        //type: string (refers to cisco_ios_xe::MPLS_LDP_STD_MIB::MPLSLDPSTDMIB::MplsLdpEntityTable::MplsLdpEntityEntry::mplsldpentityldpid)
        ydk::YLeaf mplsldpentityldpid;
        //type: uint32 (refers to cisco_ios_xe::MPLS_LDP_STD_MIB::MPLSLDPSTDMIB::MplsLdpEntityTable::MplsLdpEntityEntry::mplsldpentityindex)
        ydk::YLeaf mplsldpentityindex;
        //type: string (refers to cisco_ios_xe::MPLS_LDP_STD_MIB::MPLSLDPSTDMIB::MplsLdpPeerTable::MplsLdpPeerEntry::mplsldppeerldpid)
        ydk::YLeaf mplsldppeerldpid;
        ydk::YLeaf mplsldpsessionpeeraddrindex; //type: uint32
        ydk::YLeaf mplsldpsessionpeernexthopaddrtype; //type: InetAddressType
        ydk::YLeaf mplsldpsessionpeernexthopaddr; //type: binary

}; // MPLSLDPSTDMIB::MplsLdpSessionPeerAddrTable::MplsLdpSessionPeerAddrEntry

class MPLSLDPSTDMIB::MplsLdpLsrObjects::MplsLdpLsrLoopDetectionCapable : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf hopCount;
        static const ydk::Enum::YLeaf pathVector;
        static const ydk::Enum::YLeaf hopCountAndPathVector;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 1;
            if (name == "other") return 2;
            if (name == "hopCount") return 3;
            if (name == "pathVector") return 4;
            if (name == "hopCountAndPathVector") return 5;
            return -1;
        }
};

class MPLSLDPSTDMIB::MplsLdpEntityTable::MplsLdpEntityEntry::MplsLdpEntityAdminStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

        static int get_enum_value(const std::string & name) {
            if (name == "enable") return 1;
            if (name == "disable") return 2;
            return -1;
        }
};

class MPLSLDPSTDMIB::MplsLdpEntityTable::MplsLdpEntityEntry::MplsLdpEntityOperStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 1;
            if (name == "enabled") return 2;
            if (name == "disabled") return 3;
            return -1;
        }
};

class MPLSLDPSTDMIB::MplsLdpEntityTable::MplsLdpEntityEntry::MplsLdpEntityTransportAddrKind : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf interface;
        static const ydk::Enum::YLeaf loopback;

        static int get_enum_value(const std::string & name) {
            if (name == "interface") return 1;
            if (name == "loopback") return 2;
            return -1;
        }
};

class MPLSLDPSTDMIB::MplsLdpPeerTable::MplsLdpPeerEntry::MplsLdpSessionState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf nonexistent;
        static const ydk::Enum::YLeaf initialized;
        static const ydk::Enum::YLeaf openrec;
        static const ydk::Enum::YLeaf opensent;
        static const ydk::Enum::YLeaf operational;

        static int get_enum_value(const std::string & name) {
            if (name == "nonexistent") return 1;
            if (name == "initialized") return 2;
            if (name == "openrec") return 3;
            if (name == "opensent") return 4;
            if (name == "operational") return 5;
            return -1;
        }
};

class MPLSLDPSTDMIB::MplsLdpPeerTable::MplsLdpPeerEntry::MplsLdpSessionRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf passive;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 1;
            if (name == "active") return 2;
            if (name == "passive") return 3;
            return -1;
        }
};

class MPLSLDPSTDMIB::MplsLdpHelloAdjacencyTable::MplsLdpHelloAdjacencyEntry::MplsLdpHelloAdjacencyType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf link;
        static const ydk::Enum::YLeaf targeted;

        static int get_enum_value(const std::string & name) {
            if (name == "link") return 1;
            if (name == "targeted") return 2;
            return -1;
        }
};

class MPLSLDPSTDMIB::MplsFecTable::MplsFecEntry::MplsFecType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf prefix;
        static const ydk::Enum::YLeaf hostAddress;

        static int get_enum_value(const std::string & name) {
            if (name == "prefix") return 1;
            if (name == "hostAddress") return 2;
            return -1;
        }
};

class MPLSLDPSTDMIB::MplsLdpLspFecTable::MplsLdpLspFecEntry::MplsLdpLspFecSegment : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inSegment;
        static const ydk::Enum::YLeaf outSegment;

        static int get_enum_value(const std::string & name) {
            if (name == "inSegment") return 1;
            if (name == "outSegment") return 2;
            return -1;
        }
};


}
}

#endif /* _MPLS_LDP_STD_MIB_ */

