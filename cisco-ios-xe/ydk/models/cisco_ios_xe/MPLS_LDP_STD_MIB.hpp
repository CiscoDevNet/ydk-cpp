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

        class Mplsldplsrobjects; //type: MPLSLDPSTDMIB::Mplsldplsrobjects
        class Mplsldpentityobjects; //type: MPLSLDPSTDMIB::Mplsldpentityobjects
        class Mplsldpsessionobjects; //type: MPLSLDPSTDMIB::Mplsldpsessionobjects
        class Mplsfecobjects; //type: MPLSLDPSTDMIB::Mplsfecobjects
        class Mplsldpentitytable; //type: MPLSLDPSTDMIB::Mplsldpentitytable
        class Mplsldppeertable; //type: MPLSLDPSTDMIB::Mplsldppeertable
        class Mplsldphelloadjacencytable; //type: MPLSLDPSTDMIB::Mplsldphelloadjacencytable
        class Mplsinsegmentldplsptable; //type: MPLSLDPSTDMIB::Mplsinsegmentldplsptable
        class Mplsoutsegmentldplsptable; //type: MPLSLDPSTDMIB::Mplsoutsegmentldplsptable
        class Mplsfectable; //type: MPLSLDPSTDMIB::Mplsfectable
        class Mplsldplspfectable; //type: MPLSLDPSTDMIB::Mplsldplspfectable
        class Mplsldpsessionpeeraddrtable; //type: MPLSLDPSTDMIB::Mplsldpsessionpeeraddrtable

        std::shared_ptr<cisco_ios_xe::MPLS_LDP_STD_MIB::MPLSLDPSTDMIB::Mplsldplsrobjects> mplsldplsrobjects;
        std::shared_ptr<cisco_ios_xe::MPLS_LDP_STD_MIB::MPLSLDPSTDMIB::Mplsldpentityobjects> mplsldpentityobjects;
        std::shared_ptr<cisco_ios_xe::MPLS_LDP_STD_MIB::MPLSLDPSTDMIB::Mplsldpsessionobjects> mplsldpsessionobjects;
        std::shared_ptr<cisco_ios_xe::MPLS_LDP_STD_MIB::MPLSLDPSTDMIB::Mplsfecobjects> mplsfecobjects;
        std::shared_ptr<cisco_ios_xe::MPLS_LDP_STD_MIB::MPLSLDPSTDMIB::Mplsldpentitytable> mplsldpentitytable;
        std::shared_ptr<cisco_ios_xe::MPLS_LDP_STD_MIB::MPLSLDPSTDMIB::Mplsldppeertable> mplsldppeertable;
        std::shared_ptr<cisco_ios_xe::MPLS_LDP_STD_MIB::MPLSLDPSTDMIB::Mplsldphelloadjacencytable> mplsldphelloadjacencytable;
        std::shared_ptr<cisco_ios_xe::MPLS_LDP_STD_MIB::MPLSLDPSTDMIB::Mplsinsegmentldplsptable> mplsinsegmentldplsptable;
        std::shared_ptr<cisco_ios_xe::MPLS_LDP_STD_MIB::MPLSLDPSTDMIB::Mplsoutsegmentldplsptable> mplsoutsegmentldplsptable;
        std::shared_ptr<cisco_ios_xe::MPLS_LDP_STD_MIB::MPLSLDPSTDMIB::Mplsfectable> mplsfectable;
        std::shared_ptr<cisco_ios_xe::MPLS_LDP_STD_MIB::MPLSLDPSTDMIB::Mplsldplspfectable> mplsldplspfectable;
        std::shared_ptr<cisco_ios_xe::MPLS_LDP_STD_MIB::MPLSLDPSTDMIB::Mplsldpsessionpeeraddrtable> mplsldpsessionpeeraddrtable;
        
}; // MPLSLDPSTDMIB


class MPLSLDPSTDMIB::Mplsldplsrobjects : public ydk::Entity
{
    public:
        Mplsldplsrobjects();
        ~Mplsldplsrobjects();

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
        ydk::YLeaf mplsldplsrloopdetectioncapable; //type: Mplsldplsrloopdetectioncapable
        class Mplsldplsrloopdetectioncapable;

}; // MPLSLDPSTDMIB::Mplsldplsrobjects


class MPLSLDPSTDMIB::Mplsldpentityobjects : public ydk::Entity
{
    public:
        Mplsldpentityobjects();
        ~Mplsldpentityobjects();

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

}; // MPLSLDPSTDMIB::Mplsldpentityobjects


class MPLSLDPSTDMIB::Mplsldpsessionobjects : public ydk::Entity
{
    public:
        Mplsldpsessionobjects();
        ~Mplsldpsessionobjects();

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

}; // MPLSLDPSTDMIB::Mplsldpsessionobjects


class MPLSLDPSTDMIB::Mplsfecobjects : public ydk::Entity
{
    public:
        Mplsfecobjects();
        ~Mplsfecobjects();

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

}; // MPLSLDPSTDMIB::Mplsfecobjects


class MPLSLDPSTDMIB::Mplsldpentitytable : public ydk::Entity
{
    public:
        Mplsldpentitytable();
        ~Mplsldpentitytable();

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

        class Mplsldpentityentry; //type: MPLSLDPSTDMIB::Mplsldpentitytable::Mplsldpentityentry

        std::vector<std::shared_ptr<cisco_ios_xe::MPLS_LDP_STD_MIB::MPLSLDPSTDMIB::Mplsldpentitytable::Mplsldpentityentry> > mplsldpentityentry;
        
}; // MPLSLDPSTDMIB::Mplsldpentitytable


class MPLSLDPSTDMIB::Mplsldpentitytable::Mplsldpentityentry : public ydk::Entity
{
    public:
        Mplsldpentityentry();
        ~Mplsldpentityentry();

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
        ydk::YLeaf mplsldpentityadminstatus; //type: Mplsldpentityadminstatus
        ydk::YLeaf mplsldpentityoperstatus; //type: Mplsldpentityoperstatus
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
        ydk::YLeaf mplsldpentitytransportaddrkind; //type: Mplsldpentitytransportaddrkind
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
        class Mplsldpentityadminstatus;
        class Mplsldpentityoperstatus;
        class Mplsldpentitytransportaddrkind;

}; // MPLSLDPSTDMIB::Mplsldpentitytable::Mplsldpentityentry


class MPLSLDPSTDMIB::Mplsldppeertable : public ydk::Entity
{
    public:
        Mplsldppeertable();
        ~Mplsldppeertable();

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

        class Mplsldppeerentry; //type: MPLSLDPSTDMIB::Mplsldppeertable::Mplsldppeerentry

        std::vector<std::shared_ptr<cisco_ios_xe::MPLS_LDP_STD_MIB::MPLSLDPSTDMIB::Mplsldppeertable::Mplsldppeerentry> > mplsldppeerentry;
        
}; // MPLSLDPSTDMIB::Mplsldppeertable


class MPLSLDPSTDMIB::Mplsldppeertable::Mplsldppeerentry : public ydk::Entity
{
    public:
        Mplsldppeerentry();
        ~Mplsldppeerentry();

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

        //type: string (refers to cisco_ios_xe::MPLS_LDP_STD_MIB::MPLSLDPSTDMIB::Mplsldpentitytable::Mplsldpentityentry::mplsldpentityldpid)
        ydk::YLeaf mplsldpentityldpid;
        //type: uint32 (refers to cisco_ios_xe::MPLS_LDP_STD_MIB::MPLSLDPSTDMIB::Mplsldpentitytable::Mplsldpentityentry::mplsldpentityindex)
        ydk::YLeaf mplsldpentityindex;
        ydk::YLeaf mplsldppeerldpid; //type: string
        ydk::YLeaf mplsldppeerlabeldistmethod; //type: MplsLabelDistributionMethod
        ydk::YLeaf mplsldppeerpathvectorlimit; //type: int32
        ydk::YLeaf mplsldppeertransportaddrtype; //type: InetAddressType
        ydk::YLeaf mplsldppeertransportaddr; //type: binary
        ydk::YLeaf mplsldpsessionstatelastchange; //type: uint32
        ydk::YLeaf mplsldpsessionstate; //type: Mplsldpsessionstate
        ydk::YLeaf mplsldpsessionrole; //type: Mplsldpsessionrole
        ydk::YLeaf mplsldpsessionprotocolversion; //type: uint32
        ydk::YLeaf mplsldpsessionkeepaliveholdtimerem; //type: int32
        ydk::YLeaf mplsldpsessionkeepalivetime; //type: uint32
        ydk::YLeaf mplsldpsessionmaxpdulength; //type: uint32
        ydk::YLeaf mplsldpsessiondiscontinuitytime; //type: uint32
        ydk::YLeaf mplsldpsessionstatsunknownmestypeerrors; //type: uint32
        ydk::YLeaf mplsldpsessionstatsunknowntlverrors; //type: uint32
        class Mplsldpsessionstate;
        class Mplsldpsessionrole;

}; // MPLSLDPSTDMIB::Mplsldppeertable::Mplsldppeerentry


class MPLSLDPSTDMIB::Mplsldphelloadjacencytable : public ydk::Entity
{
    public:
        Mplsldphelloadjacencytable();
        ~Mplsldphelloadjacencytable();

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

        class Mplsldphelloadjacencyentry; //type: MPLSLDPSTDMIB::Mplsldphelloadjacencytable::Mplsldphelloadjacencyentry

        std::vector<std::shared_ptr<cisco_ios_xe::MPLS_LDP_STD_MIB::MPLSLDPSTDMIB::Mplsldphelloadjacencytable::Mplsldphelloadjacencyentry> > mplsldphelloadjacencyentry;
        
}; // MPLSLDPSTDMIB::Mplsldphelloadjacencytable


class MPLSLDPSTDMIB::Mplsldphelloadjacencytable::Mplsldphelloadjacencyentry : public ydk::Entity
{
    public:
        Mplsldphelloadjacencyentry();
        ~Mplsldphelloadjacencyentry();

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

        //type: string (refers to cisco_ios_xe::MPLS_LDP_STD_MIB::MPLSLDPSTDMIB::Mplsldpentitytable::Mplsldpentityentry::mplsldpentityldpid)
        ydk::YLeaf mplsldpentityldpid;
        //type: uint32 (refers to cisco_ios_xe::MPLS_LDP_STD_MIB::MPLSLDPSTDMIB::Mplsldpentitytable::Mplsldpentityentry::mplsldpentityindex)
        ydk::YLeaf mplsldpentityindex;
        //type: string (refers to cisco_ios_xe::MPLS_LDP_STD_MIB::MPLSLDPSTDMIB::Mplsldppeertable::Mplsldppeerentry::mplsldppeerldpid)
        ydk::YLeaf mplsldppeerldpid;
        ydk::YLeaf mplsldphelloadjacencyindex; //type: uint32
        ydk::YLeaf mplsldphelloadjacencyholdtimerem; //type: int32
        ydk::YLeaf mplsldphelloadjacencyholdtime; //type: uint32
        ydk::YLeaf mplsldphelloadjacencytype; //type: Mplsldphelloadjacencytype
        class Mplsldphelloadjacencytype;

}; // MPLSLDPSTDMIB::Mplsldphelloadjacencytable::Mplsldphelloadjacencyentry


class MPLSLDPSTDMIB::Mplsinsegmentldplsptable : public ydk::Entity
{
    public:
        Mplsinsegmentldplsptable();
        ~Mplsinsegmentldplsptable();

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

        class Mplsinsegmentldplspentry; //type: MPLSLDPSTDMIB::Mplsinsegmentldplsptable::Mplsinsegmentldplspentry

        std::vector<std::shared_ptr<cisco_ios_xe::MPLS_LDP_STD_MIB::MPLSLDPSTDMIB::Mplsinsegmentldplsptable::Mplsinsegmentldplspentry> > mplsinsegmentldplspentry;
        
}; // MPLSLDPSTDMIB::Mplsinsegmentldplsptable


class MPLSLDPSTDMIB::Mplsinsegmentldplsptable::Mplsinsegmentldplspentry : public ydk::Entity
{
    public:
        Mplsinsegmentldplspentry();
        ~Mplsinsegmentldplspentry();

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

        //type: string (refers to cisco_ios_xe::MPLS_LDP_STD_MIB::MPLSLDPSTDMIB::Mplsldpentitytable::Mplsldpentityentry::mplsldpentityldpid)
        ydk::YLeaf mplsldpentityldpid;
        //type: uint32 (refers to cisco_ios_xe::MPLS_LDP_STD_MIB::MPLSLDPSTDMIB::Mplsldpentitytable::Mplsldpentityentry::mplsldpentityindex)
        ydk::YLeaf mplsldpentityindex;
        //type: string (refers to cisco_ios_xe::MPLS_LDP_STD_MIB::MPLSLDPSTDMIB::Mplsldppeertable::Mplsldppeerentry::mplsldppeerldpid)
        ydk::YLeaf mplsldppeerldpid;
        ydk::YLeaf mplsinsegmentldplspindex; //type: binary
        ydk::YLeaf mplsinsegmentldplsplabeltype; //type: MplsLdpLabelType
        ydk::YLeaf mplsinsegmentldplsptype; //type: MplsLspType

}; // MPLSLDPSTDMIB::Mplsinsegmentldplsptable::Mplsinsegmentldplspentry


class MPLSLDPSTDMIB::Mplsoutsegmentldplsptable : public ydk::Entity
{
    public:
        Mplsoutsegmentldplsptable();
        ~Mplsoutsegmentldplsptable();

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

        class Mplsoutsegmentldplspentry; //type: MPLSLDPSTDMIB::Mplsoutsegmentldplsptable::Mplsoutsegmentldplspentry

        std::vector<std::shared_ptr<cisco_ios_xe::MPLS_LDP_STD_MIB::MPLSLDPSTDMIB::Mplsoutsegmentldplsptable::Mplsoutsegmentldplspentry> > mplsoutsegmentldplspentry;
        
}; // MPLSLDPSTDMIB::Mplsoutsegmentldplsptable


class MPLSLDPSTDMIB::Mplsoutsegmentldplsptable::Mplsoutsegmentldplspentry : public ydk::Entity
{
    public:
        Mplsoutsegmentldplspentry();
        ~Mplsoutsegmentldplspentry();

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

        //type: string (refers to cisco_ios_xe::MPLS_LDP_STD_MIB::MPLSLDPSTDMIB::Mplsldpentitytable::Mplsldpentityentry::mplsldpentityldpid)
        ydk::YLeaf mplsldpentityldpid;
        //type: uint32 (refers to cisco_ios_xe::MPLS_LDP_STD_MIB::MPLSLDPSTDMIB::Mplsldpentitytable::Mplsldpentityentry::mplsldpentityindex)
        ydk::YLeaf mplsldpentityindex;
        //type: string (refers to cisco_ios_xe::MPLS_LDP_STD_MIB::MPLSLDPSTDMIB::Mplsldppeertable::Mplsldppeerentry::mplsldppeerldpid)
        ydk::YLeaf mplsldppeerldpid;
        ydk::YLeaf mplsoutsegmentldplspindex; //type: binary
        ydk::YLeaf mplsoutsegmentldplsplabeltype; //type: MplsLdpLabelType
        ydk::YLeaf mplsoutsegmentldplsptype; //type: MplsLspType

}; // MPLSLDPSTDMIB::Mplsoutsegmentldplsptable::Mplsoutsegmentldplspentry


class MPLSLDPSTDMIB::Mplsfectable : public ydk::Entity
{
    public:
        Mplsfectable();
        ~Mplsfectable();

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

        class Mplsfecentry; //type: MPLSLDPSTDMIB::Mplsfectable::Mplsfecentry

        std::vector<std::shared_ptr<cisco_ios_xe::MPLS_LDP_STD_MIB::MPLSLDPSTDMIB::Mplsfectable::Mplsfecentry> > mplsfecentry;
        
}; // MPLSLDPSTDMIB::Mplsfectable


class MPLSLDPSTDMIB::Mplsfectable::Mplsfecentry : public ydk::Entity
{
    public:
        Mplsfecentry();
        ~Mplsfecentry();

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
        ydk::YLeaf mplsfectype; //type: Mplsfectype
        ydk::YLeaf mplsfecaddrprefixlength; //type: uint32
        ydk::YLeaf mplsfecaddrtype; //type: InetAddressType
        ydk::YLeaf mplsfecaddr; //type: binary
        ydk::YLeaf mplsfecstoragetype; //type: StorageType
        ydk::YLeaf mplsfecrowstatus; //type: RowStatus
        class Mplsfectype;

}; // MPLSLDPSTDMIB::Mplsfectable::Mplsfecentry


class MPLSLDPSTDMIB::Mplsldplspfectable : public ydk::Entity
{
    public:
        Mplsldplspfectable();
        ~Mplsldplspfectable();

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

        class Mplsldplspfecentry; //type: MPLSLDPSTDMIB::Mplsldplspfectable::Mplsldplspfecentry

        std::vector<std::shared_ptr<cisco_ios_xe::MPLS_LDP_STD_MIB::MPLSLDPSTDMIB::Mplsldplspfectable::Mplsldplspfecentry> > mplsldplspfecentry;
        
}; // MPLSLDPSTDMIB::Mplsldplspfectable


class MPLSLDPSTDMIB::Mplsldplspfectable::Mplsldplspfecentry : public ydk::Entity
{
    public:
        Mplsldplspfecentry();
        ~Mplsldplspfecentry();

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

        //type: string (refers to cisco_ios_xe::MPLS_LDP_STD_MIB::MPLSLDPSTDMIB::Mplsldpentitytable::Mplsldpentityentry::mplsldpentityldpid)
        ydk::YLeaf mplsldpentityldpid;
        //type: uint32 (refers to cisco_ios_xe::MPLS_LDP_STD_MIB::MPLSLDPSTDMIB::Mplsldpentitytable::Mplsldpentityentry::mplsldpentityindex)
        ydk::YLeaf mplsldpentityindex;
        //type: string (refers to cisco_ios_xe::MPLS_LDP_STD_MIB::MPLSLDPSTDMIB::Mplsldppeertable::Mplsldppeerentry::mplsldppeerldpid)
        ydk::YLeaf mplsldppeerldpid;
        ydk::YLeaf mplsldplspfecsegment; //type: Mplsldplspfecsegment
        ydk::YLeaf mplsldplspfecsegmentindex; //type: binary
        ydk::YLeaf mplsldplspfecindex; //type: uint32
        ydk::YLeaf mplsldplspfecstoragetype; //type: StorageType
        ydk::YLeaf mplsldplspfecrowstatus; //type: RowStatus
        class Mplsldplspfecsegment;

}; // MPLSLDPSTDMIB::Mplsldplspfectable::Mplsldplspfecentry


class MPLSLDPSTDMIB::Mplsldpsessionpeeraddrtable : public ydk::Entity
{
    public:
        Mplsldpsessionpeeraddrtable();
        ~Mplsldpsessionpeeraddrtable();

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

        class Mplsldpsessionpeeraddrentry; //type: MPLSLDPSTDMIB::Mplsldpsessionpeeraddrtable::Mplsldpsessionpeeraddrentry

        std::vector<std::shared_ptr<cisco_ios_xe::MPLS_LDP_STD_MIB::MPLSLDPSTDMIB::Mplsldpsessionpeeraddrtable::Mplsldpsessionpeeraddrentry> > mplsldpsessionpeeraddrentry;
        
}; // MPLSLDPSTDMIB::Mplsldpsessionpeeraddrtable


class MPLSLDPSTDMIB::Mplsldpsessionpeeraddrtable::Mplsldpsessionpeeraddrentry : public ydk::Entity
{
    public:
        Mplsldpsessionpeeraddrentry();
        ~Mplsldpsessionpeeraddrentry();

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

        //type: string (refers to cisco_ios_xe::MPLS_LDP_STD_MIB::MPLSLDPSTDMIB::Mplsldpentitytable::Mplsldpentityentry::mplsldpentityldpid)
        ydk::YLeaf mplsldpentityldpid;
        //type: uint32 (refers to cisco_ios_xe::MPLS_LDP_STD_MIB::MPLSLDPSTDMIB::Mplsldpentitytable::Mplsldpentityentry::mplsldpentityindex)
        ydk::YLeaf mplsldpentityindex;
        //type: string (refers to cisco_ios_xe::MPLS_LDP_STD_MIB::MPLSLDPSTDMIB::Mplsldppeertable::Mplsldppeerentry::mplsldppeerldpid)
        ydk::YLeaf mplsldppeerldpid;
        ydk::YLeaf mplsldpsessionpeeraddrindex; //type: uint32
        ydk::YLeaf mplsldpsessionpeernexthopaddrtype; //type: InetAddressType
        ydk::YLeaf mplsldpsessionpeernexthopaddr; //type: binary

}; // MPLSLDPSTDMIB::Mplsldpsessionpeeraddrtable::Mplsldpsessionpeeraddrentry

class MPLSLDPSTDMIB::Mplsldplsrobjects::Mplsldplsrloopdetectioncapable : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf hopCount;
        static const ydk::Enum::YLeaf pathVector;
        static const ydk::Enum::YLeaf hopCountAndPathVector;

};

class MPLSLDPSTDMIB::Mplsldpentitytable::Mplsldpentityentry::Mplsldpentityadminstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

};

class MPLSLDPSTDMIB::Mplsldpentitytable::Mplsldpentityentry::Mplsldpentityoperstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class MPLSLDPSTDMIB::Mplsldpentitytable::Mplsldpentityentry::Mplsldpentitytransportaddrkind : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf interface;
        static const ydk::Enum::YLeaf loopback;

};

class MPLSLDPSTDMIB::Mplsldppeertable::Mplsldppeerentry::Mplsldpsessionstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf nonexistent;
        static const ydk::Enum::YLeaf initialized;
        static const ydk::Enum::YLeaf openrec;
        static const ydk::Enum::YLeaf opensent;
        static const ydk::Enum::YLeaf operational;

};

class MPLSLDPSTDMIB::Mplsldppeertable::Mplsldppeerentry::Mplsldpsessionrole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf passive;

};

class MPLSLDPSTDMIB::Mplsldphelloadjacencytable::Mplsldphelloadjacencyentry::Mplsldphelloadjacencytype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf link;
        static const ydk::Enum::YLeaf targeted;

};

class MPLSLDPSTDMIB::Mplsfectable::Mplsfecentry::Mplsfectype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf prefix;
        static const ydk::Enum::YLeaf hostAddress;

};

class MPLSLDPSTDMIB::Mplsldplspfectable::Mplsldplspfecentry::Mplsldplspfecsegment : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inSegment;
        static const ydk::Enum::YLeaf outSegment;

};


}
}

#endif /* _MPLS_LDP_STD_MIB_ */

