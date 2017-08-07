#ifndef _MPLS_LDP_STD_MIB_
#define _MPLS_LDP_STD_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace MPLS_LDP_STD_MIB {

class MplsLdpStdMib : public ydk::Entity
{
    public:
        MplsLdpStdMib();
        ~MplsLdpStdMib();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        class Mplsldplsrobjects; //type: MplsLdpStdMib::Mplsldplsrobjects
        class Mplsldpentityobjects; //type: MplsLdpStdMib::Mplsldpentityobjects
        class Mplsldpsessionobjects; //type: MplsLdpStdMib::Mplsldpsessionobjects
        class Mplsfecobjects; //type: MplsLdpStdMib::Mplsfecobjects
        class Mplsldpentitytable; //type: MplsLdpStdMib::Mplsldpentitytable
        class Mplsldppeertable; //type: MplsLdpStdMib::Mplsldppeertable
        class Mplsldphelloadjacencytable; //type: MplsLdpStdMib::Mplsldphelloadjacencytable
        class Mplsinsegmentldplsptable; //type: MplsLdpStdMib::Mplsinsegmentldplsptable
        class Mplsoutsegmentldplsptable; //type: MplsLdpStdMib::Mplsoutsegmentldplsptable
        class Mplsfectable; //type: MplsLdpStdMib::Mplsfectable
        class Mplsldplspfectable; //type: MplsLdpStdMib::Mplsldplspfectable
        class Mplsldpsessionpeeraddrtable; //type: MplsLdpStdMib::Mplsldpsessionpeeraddrtable

        std::shared_ptr<MPLS_LDP_STD_MIB::MplsLdpStdMib::Mplsfecobjects> mplsfecobjects;
        std::shared_ptr<MPLS_LDP_STD_MIB::MplsLdpStdMib::Mplsfectable> mplsfectable;
        std::shared_ptr<MPLS_LDP_STD_MIB::MplsLdpStdMib::Mplsinsegmentldplsptable> mplsinsegmentldplsptable;
        std::shared_ptr<MPLS_LDP_STD_MIB::MplsLdpStdMib::Mplsldpentityobjects> mplsldpentityobjects;
        std::shared_ptr<MPLS_LDP_STD_MIB::MplsLdpStdMib::Mplsldpentitytable> mplsldpentitytable;
        std::shared_ptr<MPLS_LDP_STD_MIB::MplsLdpStdMib::Mplsldphelloadjacencytable> mplsldphelloadjacencytable;
        std::shared_ptr<MPLS_LDP_STD_MIB::MplsLdpStdMib::Mplsldplspfectable> mplsldplspfectable;
        std::shared_ptr<MPLS_LDP_STD_MIB::MplsLdpStdMib::Mplsldplsrobjects> mplsldplsrobjects;
        std::shared_ptr<MPLS_LDP_STD_MIB::MplsLdpStdMib::Mplsldppeertable> mplsldppeertable;
        std::shared_ptr<MPLS_LDP_STD_MIB::MplsLdpStdMib::Mplsldpsessionobjects> mplsldpsessionobjects;
        std::shared_ptr<MPLS_LDP_STD_MIB::MplsLdpStdMib::Mplsldpsessionpeeraddrtable> mplsldpsessionpeeraddrtable;
        std::shared_ptr<MPLS_LDP_STD_MIB::MplsLdpStdMib::Mplsoutsegmentldplsptable> mplsoutsegmentldplsptable;
        
}; // MplsLdpStdMib


class MplsLdpStdMib::Mplsldplsrobjects : public ydk::Entity
{
    public:
        Mplsldplsrobjects();
        ~Mplsldplsrobjects();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mplsldplsrid; //type: binary
        ydk::YLeaf mplsldplsrloopdetectioncapable; //type: Mplsldplsrloopdetectioncapable
        class Mplsldplsrloopdetectioncapable;

}; // MplsLdpStdMib::Mplsldplsrobjects


class MplsLdpStdMib::Mplsldpentityobjects : public ydk::Entity
{
    public:
        Mplsldpentityobjects();
        ~Mplsldpentityobjects();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mplsldpentitylastchange; //type: uint32
        ydk::YLeaf mplsldpentityindexnext; //type: uint32

}; // MplsLdpStdMib::Mplsldpentityobjects


class MplsLdpStdMib::Mplsldpsessionobjects : public ydk::Entity
{
    public:
        Mplsldpsessionobjects();
        ~Mplsldpsessionobjects();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mplsldppeerlastchange; //type: uint32
        ydk::YLeaf mplsldplspfeclastchange; //type: uint32

}; // MplsLdpStdMib::Mplsldpsessionobjects


class MplsLdpStdMib::Mplsfecobjects : public ydk::Entity
{
    public:
        Mplsfecobjects();
        ~Mplsfecobjects();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mplsfeclastchange; //type: uint32
        ydk::YLeaf mplsfecindexnext; //type: uint32

}; // MplsLdpStdMib::Mplsfecobjects


class MplsLdpStdMib::Mplsldpentitytable : public ydk::Entity
{
    public:
        Mplsldpentitytable();
        ~Mplsldpentitytable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Mplsldpentityentry; //type: MplsLdpStdMib::Mplsldpentitytable::Mplsldpentityentry

        std::vector<std::shared_ptr<MPLS_LDP_STD_MIB::MplsLdpStdMib::Mplsldpentitytable::Mplsldpentityentry> > mplsldpentityentry;
        
}; // MplsLdpStdMib::Mplsldpentitytable


class MplsLdpStdMib::Mplsldpentitytable::Mplsldpentityentry : public ydk::Entity
{
    public:
        Mplsldpentityentry();
        ~Mplsldpentityentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

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
        ydk::YLeaf mplsldpentitylabeldistmethod; //type: Mplslabeldistributionmethod
        ydk::YLeaf mplsldpentitylabelretentionmode; //type: Mplsretentionmode
        ydk::YLeaf mplsldpentitypathvectorlimit; //type: int32
        ydk::YLeaf mplsldpentityhopcountlimit; //type: int32
        ydk::YLeaf mplsldpentitytransportaddrkind; //type: Mplsldpentitytransportaddrkind
        ydk::YLeaf mplsldpentitytargetpeer; //type: boolean
        ydk::YLeaf mplsldpentitytargetpeeraddrtype; //type: Inetaddresstype
        ydk::YLeaf mplsldpentitytargetpeeraddr; //type: binary
        ydk::YLeaf mplsldpentitylabeltype; //type: Mplsldplabeltype
        ydk::YLeaf mplsldpentitydiscontinuitytime; //type: uint32
        ydk::YLeaf mplsldpentitystoragetype; //type: Storagetype
        ydk::YLeaf mplsldpentityrowstatus; //type: Rowstatus
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

}; // MplsLdpStdMib::Mplsldpentitytable::Mplsldpentityentry


class MplsLdpStdMib::Mplsldppeertable : public ydk::Entity
{
    public:
        Mplsldppeertable();
        ~Mplsldppeertable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Mplsldppeerentry; //type: MplsLdpStdMib::Mplsldppeertable::Mplsldppeerentry

        std::vector<std::shared_ptr<MPLS_LDP_STD_MIB::MplsLdpStdMib::Mplsldppeertable::Mplsldppeerentry> > mplsldppeerentry;
        
}; // MplsLdpStdMib::Mplsldppeertable


class MplsLdpStdMib::Mplsldppeertable::Mplsldppeerentry : public ydk::Entity
{
    public:
        Mplsldppeerentry();
        ~Mplsldppeerentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to MPLS_LDP_STD_MIB::MplsLdpStdMib::Mplsldpentitytable::Mplsldpentityentry::mplsldpentityldpid)
        ydk::YLeaf mplsldpentityldpid;
        //type: uint32 (refers to MPLS_LDP_STD_MIB::MplsLdpStdMib::Mplsldpentitytable::Mplsldpentityentry::mplsldpentityindex)
        ydk::YLeaf mplsldpentityindex;
        ydk::YLeaf mplsldppeerldpid; //type: string
        ydk::YLeaf mplsldppeerlabeldistmethod; //type: Mplslabeldistributionmethod
        ydk::YLeaf mplsldppeerpathvectorlimit; //type: int32
        ydk::YLeaf mplsldppeertransportaddrtype; //type: Inetaddresstype
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

}; // MplsLdpStdMib::Mplsldppeertable::Mplsldppeerentry


class MplsLdpStdMib::Mplsldphelloadjacencytable : public ydk::Entity
{
    public:
        Mplsldphelloadjacencytable();
        ~Mplsldphelloadjacencytable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Mplsldphelloadjacencyentry; //type: MplsLdpStdMib::Mplsldphelloadjacencytable::Mplsldphelloadjacencyentry

        std::vector<std::shared_ptr<MPLS_LDP_STD_MIB::MplsLdpStdMib::Mplsldphelloadjacencytable::Mplsldphelloadjacencyentry> > mplsldphelloadjacencyentry;
        
}; // MplsLdpStdMib::Mplsldphelloadjacencytable


class MplsLdpStdMib::Mplsldphelloadjacencytable::Mplsldphelloadjacencyentry : public ydk::Entity
{
    public:
        Mplsldphelloadjacencyentry();
        ~Mplsldphelloadjacencyentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to MPLS_LDP_STD_MIB::MplsLdpStdMib::Mplsldpentitytable::Mplsldpentityentry::mplsldpentityldpid)
        ydk::YLeaf mplsldpentityldpid;
        //type: uint32 (refers to MPLS_LDP_STD_MIB::MplsLdpStdMib::Mplsldpentitytable::Mplsldpentityentry::mplsldpentityindex)
        ydk::YLeaf mplsldpentityindex;
        //type: string (refers to MPLS_LDP_STD_MIB::MplsLdpStdMib::Mplsldppeertable::Mplsldppeerentry::mplsldppeerldpid)
        ydk::YLeaf mplsldppeerldpid;
        ydk::YLeaf mplsldphelloadjacencyindex; //type: uint32
        ydk::YLeaf mplsldphelloadjacencyholdtimerem; //type: int32
        ydk::YLeaf mplsldphelloadjacencyholdtime; //type: uint32
        ydk::YLeaf mplsldphelloadjacencytype; //type: Mplsldphelloadjacencytype
        class Mplsldphelloadjacencytype;

}; // MplsLdpStdMib::Mplsldphelloadjacencytable::Mplsldphelloadjacencyentry


class MplsLdpStdMib::Mplsinsegmentldplsptable : public ydk::Entity
{
    public:
        Mplsinsegmentldplsptable();
        ~Mplsinsegmentldplsptable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Mplsinsegmentldplspentry; //type: MplsLdpStdMib::Mplsinsegmentldplsptable::Mplsinsegmentldplspentry

        std::vector<std::shared_ptr<MPLS_LDP_STD_MIB::MplsLdpStdMib::Mplsinsegmentldplsptable::Mplsinsegmentldplspentry> > mplsinsegmentldplspentry;
        
}; // MplsLdpStdMib::Mplsinsegmentldplsptable


class MplsLdpStdMib::Mplsinsegmentldplsptable::Mplsinsegmentldplspentry : public ydk::Entity
{
    public:
        Mplsinsegmentldplspentry();
        ~Mplsinsegmentldplspentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to MPLS_LDP_STD_MIB::MplsLdpStdMib::Mplsldpentitytable::Mplsldpentityentry::mplsldpentityldpid)
        ydk::YLeaf mplsldpentityldpid;
        //type: uint32 (refers to MPLS_LDP_STD_MIB::MplsLdpStdMib::Mplsldpentitytable::Mplsldpentityentry::mplsldpentityindex)
        ydk::YLeaf mplsldpentityindex;
        //type: string (refers to MPLS_LDP_STD_MIB::MplsLdpStdMib::Mplsldppeertable::Mplsldppeerentry::mplsldppeerldpid)
        ydk::YLeaf mplsldppeerldpid;
        ydk::YLeaf mplsinsegmentldplspindex; //type: binary
        ydk::YLeaf mplsinsegmentldplsplabeltype; //type: Mplsldplabeltype
        ydk::YLeaf mplsinsegmentldplsptype; //type: Mplslsptype

}; // MplsLdpStdMib::Mplsinsegmentldplsptable::Mplsinsegmentldplspentry


class MplsLdpStdMib::Mplsoutsegmentldplsptable : public ydk::Entity
{
    public:
        Mplsoutsegmentldplsptable();
        ~Mplsoutsegmentldplsptable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Mplsoutsegmentldplspentry; //type: MplsLdpStdMib::Mplsoutsegmentldplsptable::Mplsoutsegmentldplspentry

        std::vector<std::shared_ptr<MPLS_LDP_STD_MIB::MplsLdpStdMib::Mplsoutsegmentldplsptable::Mplsoutsegmentldplspentry> > mplsoutsegmentldplspentry;
        
}; // MplsLdpStdMib::Mplsoutsegmentldplsptable


class MplsLdpStdMib::Mplsoutsegmentldplsptable::Mplsoutsegmentldplspentry : public ydk::Entity
{
    public:
        Mplsoutsegmentldplspentry();
        ~Mplsoutsegmentldplspentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to MPLS_LDP_STD_MIB::MplsLdpStdMib::Mplsldpentitytable::Mplsldpentityentry::mplsldpentityldpid)
        ydk::YLeaf mplsldpentityldpid;
        //type: uint32 (refers to MPLS_LDP_STD_MIB::MplsLdpStdMib::Mplsldpentitytable::Mplsldpentityentry::mplsldpentityindex)
        ydk::YLeaf mplsldpentityindex;
        //type: string (refers to MPLS_LDP_STD_MIB::MplsLdpStdMib::Mplsldppeertable::Mplsldppeerentry::mplsldppeerldpid)
        ydk::YLeaf mplsldppeerldpid;
        ydk::YLeaf mplsoutsegmentldplspindex; //type: binary
        ydk::YLeaf mplsoutsegmentldplsplabeltype; //type: Mplsldplabeltype
        ydk::YLeaf mplsoutsegmentldplsptype; //type: Mplslsptype

}; // MplsLdpStdMib::Mplsoutsegmentldplsptable::Mplsoutsegmentldplspentry


class MplsLdpStdMib::Mplsfectable : public ydk::Entity
{
    public:
        Mplsfectable();
        ~Mplsfectable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Mplsfecentry; //type: MplsLdpStdMib::Mplsfectable::Mplsfecentry

        std::vector<std::shared_ptr<MPLS_LDP_STD_MIB::MplsLdpStdMib::Mplsfectable::Mplsfecentry> > mplsfecentry;
        
}; // MplsLdpStdMib::Mplsfectable


class MplsLdpStdMib::Mplsfectable::Mplsfecentry : public ydk::Entity
{
    public:
        Mplsfecentry();
        ~Mplsfecentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mplsfecindex; //type: uint32
        ydk::YLeaf mplsfectype; //type: Mplsfectype
        ydk::YLeaf mplsfecaddrprefixlength; //type: uint32
        ydk::YLeaf mplsfecaddrtype; //type: Inetaddresstype
        ydk::YLeaf mplsfecaddr; //type: binary
        ydk::YLeaf mplsfecstoragetype; //type: Storagetype
        ydk::YLeaf mplsfecrowstatus; //type: Rowstatus
        class Mplsfectype;

}; // MplsLdpStdMib::Mplsfectable::Mplsfecentry


class MplsLdpStdMib::Mplsldplspfectable : public ydk::Entity
{
    public:
        Mplsldplspfectable();
        ~Mplsldplspfectable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Mplsldplspfecentry; //type: MplsLdpStdMib::Mplsldplspfectable::Mplsldplspfecentry

        std::vector<std::shared_ptr<MPLS_LDP_STD_MIB::MplsLdpStdMib::Mplsldplspfectable::Mplsldplspfecentry> > mplsldplspfecentry;
        
}; // MplsLdpStdMib::Mplsldplspfectable


class MplsLdpStdMib::Mplsldplspfectable::Mplsldplspfecentry : public ydk::Entity
{
    public:
        Mplsldplspfecentry();
        ~Mplsldplspfecentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to MPLS_LDP_STD_MIB::MplsLdpStdMib::Mplsldpentitytable::Mplsldpentityentry::mplsldpentityldpid)
        ydk::YLeaf mplsldpentityldpid;
        //type: uint32 (refers to MPLS_LDP_STD_MIB::MplsLdpStdMib::Mplsldpentitytable::Mplsldpentityentry::mplsldpentityindex)
        ydk::YLeaf mplsldpentityindex;
        //type: string (refers to MPLS_LDP_STD_MIB::MplsLdpStdMib::Mplsldppeertable::Mplsldppeerentry::mplsldppeerldpid)
        ydk::YLeaf mplsldppeerldpid;
        ydk::YLeaf mplsldplspfecsegment; //type: Mplsldplspfecsegment
        ydk::YLeaf mplsldplspfecsegmentindex; //type: binary
        ydk::YLeaf mplsldplspfecindex; //type: uint32
        ydk::YLeaf mplsldplspfecstoragetype; //type: Storagetype
        ydk::YLeaf mplsldplspfecrowstatus; //type: Rowstatus
        class Mplsldplspfecsegment;

}; // MplsLdpStdMib::Mplsldplspfectable::Mplsldplspfecentry


class MplsLdpStdMib::Mplsldpsessionpeeraddrtable : public ydk::Entity
{
    public:
        Mplsldpsessionpeeraddrtable();
        ~Mplsldpsessionpeeraddrtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Mplsldpsessionpeeraddrentry; //type: MplsLdpStdMib::Mplsldpsessionpeeraddrtable::Mplsldpsessionpeeraddrentry

        std::vector<std::shared_ptr<MPLS_LDP_STD_MIB::MplsLdpStdMib::Mplsldpsessionpeeraddrtable::Mplsldpsessionpeeraddrentry> > mplsldpsessionpeeraddrentry;
        
}; // MplsLdpStdMib::Mplsldpsessionpeeraddrtable


class MplsLdpStdMib::Mplsldpsessionpeeraddrtable::Mplsldpsessionpeeraddrentry : public ydk::Entity
{
    public:
        Mplsldpsessionpeeraddrentry();
        ~Mplsldpsessionpeeraddrentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to MPLS_LDP_STD_MIB::MplsLdpStdMib::Mplsldpentitytable::Mplsldpentityentry::mplsldpentityldpid)
        ydk::YLeaf mplsldpentityldpid;
        //type: uint32 (refers to MPLS_LDP_STD_MIB::MplsLdpStdMib::Mplsldpentitytable::Mplsldpentityentry::mplsldpentityindex)
        ydk::YLeaf mplsldpentityindex;
        //type: string (refers to MPLS_LDP_STD_MIB::MplsLdpStdMib::Mplsldppeertable::Mplsldppeerentry::mplsldppeerldpid)
        ydk::YLeaf mplsldppeerldpid;
        ydk::YLeaf mplsldpsessionpeeraddrindex; //type: uint32
        ydk::YLeaf mplsldpsessionpeernexthopaddrtype; //type: Inetaddresstype
        ydk::YLeaf mplsldpsessionpeernexthopaddr; //type: binary

}; // MplsLdpStdMib::Mplsldpsessionpeeraddrtable::Mplsldpsessionpeeraddrentry

class MplsLdpStdMib::Mplsldplsrobjects::Mplsldplsrloopdetectioncapable : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf hopCount;
        static const ydk::Enum::YLeaf pathVector;
        static const ydk::Enum::YLeaf hopCountAndPathVector;

};

class MplsLdpStdMib::Mplsldpentitytable::Mplsldpentityentry::Mplsldpentityadminstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

};

class MplsLdpStdMib::Mplsldpentitytable::Mplsldpentityentry::Mplsldpentityoperstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class MplsLdpStdMib::Mplsldpentitytable::Mplsldpentityentry::Mplsldpentitytransportaddrkind : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf interface;
        static const ydk::Enum::YLeaf loopback;

};

class MplsLdpStdMib::Mplsldppeertable::Mplsldppeerentry::Mplsldpsessionstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf nonexistent;
        static const ydk::Enum::YLeaf initialized;
        static const ydk::Enum::YLeaf openrec;
        static const ydk::Enum::YLeaf opensent;
        static const ydk::Enum::YLeaf operational;

};

class MplsLdpStdMib::Mplsldppeertable::Mplsldppeerentry::Mplsldpsessionrole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf passive;

};

class MplsLdpStdMib::Mplsldphelloadjacencytable::Mplsldphelloadjacencyentry::Mplsldphelloadjacencytype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf link;
        static const ydk::Enum::YLeaf targeted;

};

class MplsLdpStdMib::Mplsfectable::Mplsfecentry::Mplsfectype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf prefix;
        static const ydk::Enum::YLeaf hostAddress;

};

class MplsLdpStdMib::Mplsldplspfectable::Mplsldplspfecentry::Mplsldplspfecsegment : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inSegment;
        static const ydk::Enum::YLeaf outSegment;

};


}
}

#endif /* _MPLS_LDP_STD_MIB_ */

