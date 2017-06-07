#ifndef _MPLS_LDP_STD_MIB_
#define _MPLS_LDP_STD_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace MPLS_LDP_STD_MIB {

class MplsLdpStdMib : public Entity
{
    public:
        MplsLdpStdMib();
        ~MplsLdpStdMib();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

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


class MplsLdpStdMib::Mplsldplsrobjects : public Entity
{
    public:
        Mplsldplsrobjects();
        ~Mplsldplsrobjects();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mplsldplsrid; //type: binary
        YLeaf mplsldplsrloopdetectioncapable; //type: MplsldplsrloopdetectioncapableEnum
        class MplsldplsrloopdetectioncapableEnum;

}; // MplsLdpStdMib::Mplsldplsrobjects


class MplsLdpStdMib::Mplsldpentityobjects : public Entity
{
    public:
        Mplsldpentityobjects();
        ~Mplsldpentityobjects();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mplsldpentitylastchange; //type: uint32
        YLeaf mplsldpentityindexnext; //type: uint32

}; // MplsLdpStdMib::Mplsldpentityobjects


class MplsLdpStdMib::Mplsldpsessionobjects : public Entity
{
    public:
        Mplsldpsessionobjects();
        ~Mplsldpsessionobjects();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mplsldppeerlastchange; //type: uint32
        YLeaf mplsldplspfeclastchange; //type: uint32

}; // MplsLdpStdMib::Mplsldpsessionobjects


class MplsLdpStdMib::Mplsfecobjects : public Entity
{
    public:
        Mplsfecobjects();
        ~Mplsfecobjects();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mplsfeclastchange; //type: uint32
        YLeaf mplsfecindexnext; //type: uint32

}; // MplsLdpStdMib::Mplsfecobjects


class MplsLdpStdMib::Mplsldpentitytable : public Entity
{
    public:
        Mplsldpentitytable();
        ~Mplsldpentitytable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Mplsldpentityentry; //type: MplsLdpStdMib::Mplsldpentitytable::Mplsldpentityentry

        std::vector<std::shared_ptr<MPLS_LDP_STD_MIB::MplsLdpStdMib::Mplsldpentitytable::Mplsldpentityentry> > mplsldpentityentry;
        
}; // MplsLdpStdMib::Mplsldpentitytable


class MplsLdpStdMib::Mplsldpentitytable::Mplsldpentityentry : public Entity
{
    public:
        Mplsldpentityentry();
        ~Mplsldpentityentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mplsldpentityldpid; //type: string
        YLeaf mplsldpentityindex; //type: uint32
        YLeaf mplsldpentityprotocolversion; //type: uint32
        YLeaf mplsldpentityadminstatus; //type: MplsldpentityadminstatusEnum
        YLeaf mplsldpentityoperstatus; //type: MplsldpentityoperstatusEnum
        YLeaf mplsldpentitytcpport; //type: uint16
        YLeaf mplsldpentityudpdscport; //type: uint16
        YLeaf mplsldpentitymaxpdulength; //type: uint32
        YLeaf mplsldpentitykeepaliveholdtimer; //type: uint32
        YLeaf mplsldpentityhelloholdtimer; //type: uint32
        YLeaf mplsldpentityinitsessionthreshold; //type: int32
        YLeaf mplsldpentitylabeldistmethod; //type: MplslabeldistributionmethodEnum
        YLeaf mplsldpentitylabelretentionmode; //type: MplsretentionmodeEnum
        YLeaf mplsldpentitypathvectorlimit; //type: int32
        YLeaf mplsldpentityhopcountlimit; //type: int32
        YLeaf mplsldpentitytransportaddrkind; //type: MplsldpentitytransportaddrkindEnum
        YLeaf mplsldpentitytargetpeer; //type: boolean
        YLeaf mplsldpentitytargetpeeraddrtype; //type: InetaddresstypeEnum
        YLeaf mplsldpentitytargetpeeraddr; //type: binary
        YLeaf mplsldpentitylabeltype; //type: MplsldplabeltypeEnum
        YLeaf mplsldpentitydiscontinuitytime; //type: uint32
        YLeaf mplsldpentitystoragetype; //type: StoragetypeEnum
        YLeaf mplsldpentityrowstatus; //type: RowstatusEnum
        YLeaf mplsldpentitystatssessionattempts; //type: uint32
        YLeaf mplsldpentitystatssessionrejectednohelloerrors; //type: uint32
        YLeaf mplsldpentitystatssessionrejectedaderrors; //type: uint32
        YLeaf mplsldpentitystatssessionrejectedmaxpduerrors; //type: uint32
        YLeaf mplsldpentitystatssessionrejectedlrerrors; //type: uint32
        YLeaf mplsldpentitystatsbadldpidentifiererrors; //type: uint32
        YLeaf mplsldpentitystatsbadpdulengtherrors; //type: uint32
        YLeaf mplsldpentitystatsbadmessagelengtherrors; //type: uint32
        YLeaf mplsldpentitystatsbadtlvlengtherrors; //type: uint32
        YLeaf mplsldpentitystatsmalformedtlvvalueerrors; //type: uint32
        YLeaf mplsldpentitystatskeepalivetimerexperrors; //type: uint32
        YLeaf mplsldpentitystatsshutdownreceivednotifications; //type: uint32
        YLeaf mplsldpentitystatsshutdownsentnotifications; //type: uint32
        class MplsldpentityadminstatusEnum;
        class MplsldpentityoperstatusEnum;
        class MplsldpentitytransportaddrkindEnum;

}; // MplsLdpStdMib::Mplsldpentitytable::Mplsldpentityentry


class MplsLdpStdMib::Mplsldppeertable : public Entity
{
    public:
        Mplsldppeertable();
        ~Mplsldppeertable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Mplsldppeerentry; //type: MplsLdpStdMib::Mplsldppeertable::Mplsldppeerentry

        std::vector<std::shared_ptr<MPLS_LDP_STD_MIB::MplsLdpStdMib::Mplsldppeertable::Mplsldppeerentry> > mplsldppeerentry;
        
}; // MplsLdpStdMib::Mplsldppeertable


class MplsLdpStdMib::Mplsldppeertable::Mplsldppeerentry : public Entity
{
    public:
        Mplsldppeerentry();
        ~Mplsldppeerentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: string (refers to MPLS_LDP_STD_MIB::MplsLdpStdMib::Mplsldpentitytable::Mplsldpentityentry::mplsldpentityldpid)
        YLeaf mplsldpentityldpid;
        //type: uint32 (refers to MPLS_LDP_STD_MIB::MplsLdpStdMib::Mplsldpentitytable::Mplsldpentityentry::mplsldpentityindex)
        YLeaf mplsldpentityindex;
        YLeaf mplsldppeerldpid; //type: string
        YLeaf mplsldppeerlabeldistmethod; //type: MplslabeldistributionmethodEnum
        YLeaf mplsldppeerpathvectorlimit; //type: int32
        YLeaf mplsldppeertransportaddrtype; //type: InetaddresstypeEnum
        YLeaf mplsldppeertransportaddr; //type: binary
        YLeaf mplsldpsessionstatelastchange; //type: uint32
        YLeaf mplsldpsessionstate; //type: MplsldpsessionstateEnum
        YLeaf mplsldpsessionrole; //type: MplsldpsessionroleEnum
        YLeaf mplsldpsessionprotocolversion; //type: uint32
        YLeaf mplsldpsessionkeepaliveholdtimerem; //type: int32
        YLeaf mplsldpsessionkeepalivetime; //type: uint32
        YLeaf mplsldpsessionmaxpdulength; //type: uint32
        YLeaf mplsldpsessiondiscontinuitytime; //type: uint32
        YLeaf mplsldpsessionstatsunknownmestypeerrors; //type: uint32
        YLeaf mplsldpsessionstatsunknowntlverrors; //type: uint32
        class MplsldpsessionstateEnum;
        class MplsldpsessionroleEnum;

}; // MplsLdpStdMib::Mplsldppeertable::Mplsldppeerentry


class MplsLdpStdMib::Mplsldphelloadjacencytable : public Entity
{
    public:
        Mplsldphelloadjacencytable();
        ~Mplsldphelloadjacencytable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Mplsldphelloadjacencyentry; //type: MplsLdpStdMib::Mplsldphelloadjacencytable::Mplsldphelloadjacencyentry

        std::vector<std::shared_ptr<MPLS_LDP_STD_MIB::MplsLdpStdMib::Mplsldphelloadjacencytable::Mplsldphelloadjacencyentry> > mplsldphelloadjacencyentry;
        
}; // MplsLdpStdMib::Mplsldphelloadjacencytable


class MplsLdpStdMib::Mplsldphelloadjacencytable::Mplsldphelloadjacencyentry : public Entity
{
    public:
        Mplsldphelloadjacencyentry();
        ~Mplsldphelloadjacencyentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: string (refers to MPLS_LDP_STD_MIB::MplsLdpStdMib::Mplsldpentitytable::Mplsldpentityentry::mplsldpentityldpid)
        YLeaf mplsldpentityldpid;
        //type: uint32 (refers to MPLS_LDP_STD_MIB::MplsLdpStdMib::Mplsldpentitytable::Mplsldpentityentry::mplsldpentityindex)
        YLeaf mplsldpentityindex;
        //type: string (refers to MPLS_LDP_STD_MIB::MplsLdpStdMib::Mplsldppeertable::Mplsldppeerentry::mplsldppeerldpid)
        YLeaf mplsldppeerldpid;
        YLeaf mplsldphelloadjacencyindex; //type: uint32
        YLeaf mplsldphelloadjacencyholdtimerem; //type: int32
        YLeaf mplsldphelloadjacencyholdtime; //type: uint32
        YLeaf mplsldphelloadjacencytype; //type: MplsldphelloadjacencytypeEnum
        class MplsldphelloadjacencytypeEnum;

}; // MplsLdpStdMib::Mplsldphelloadjacencytable::Mplsldphelloadjacencyentry


class MplsLdpStdMib::Mplsinsegmentldplsptable : public Entity
{
    public:
        Mplsinsegmentldplsptable();
        ~Mplsinsegmentldplsptable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Mplsinsegmentldplspentry; //type: MplsLdpStdMib::Mplsinsegmentldplsptable::Mplsinsegmentldplspentry

        std::vector<std::shared_ptr<MPLS_LDP_STD_MIB::MplsLdpStdMib::Mplsinsegmentldplsptable::Mplsinsegmentldplspentry> > mplsinsegmentldplspentry;
        
}; // MplsLdpStdMib::Mplsinsegmentldplsptable


class MplsLdpStdMib::Mplsinsegmentldplsptable::Mplsinsegmentldplspentry : public Entity
{
    public:
        Mplsinsegmentldplspentry();
        ~Mplsinsegmentldplspentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: string (refers to MPLS_LDP_STD_MIB::MplsLdpStdMib::Mplsldpentitytable::Mplsldpentityentry::mplsldpentityldpid)
        YLeaf mplsldpentityldpid;
        //type: uint32 (refers to MPLS_LDP_STD_MIB::MplsLdpStdMib::Mplsldpentitytable::Mplsldpentityentry::mplsldpentityindex)
        YLeaf mplsldpentityindex;
        //type: string (refers to MPLS_LDP_STD_MIB::MplsLdpStdMib::Mplsldppeertable::Mplsldppeerentry::mplsldppeerldpid)
        YLeaf mplsldppeerldpid;
        YLeaf mplsinsegmentldplspindex; //type: binary
        YLeaf mplsinsegmentldplsplabeltype; //type: MplsldplabeltypeEnum
        YLeaf mplsinsegmentldplsptype; //type: MplslsptypeEnum

}; // MplsLdpStdMib::Mplsinsegmentldplsptable::Mplsinsegmentldplspentry


class MplsLdpStdMib::Mplsoutsegmentldplsptable : public Entity
{
    public:
        Mplsoutsegmentldplsptable();
        ~Mplsoutsegmentldplsptable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Mplsoutsegmentldplspentry; //type: MplsLdpStdMib::Mplsoutsegmentldplsptable::Mplsoutsegmentldplspentry

        std::vector<std::shared_ptr<MPLS_LDP_STD_MIB::MplsLdpStdMib::Mplsoutsegmentldplsptable::Mplsoutsegmentldplspentry> > mplsoutsegmentldplspentry;
        
}; // MplsLdpStdMib::Mplsoutsegmentldplsptable


class MplsLdpStdMib::Mplsoutsegmentldplsptable::Mplsoutsegmentldplspentry : public Entity
{
    public:
        Mplsoutsegmentldplspentry();
        ~Mplsoutsegmentldplspentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: string (refers to MPLS_LDP_STD_MIB::MplsLdpStdMib::Mplsldpentitytable::Mplsldpentityentry::mplsldpentityldpid)
        YLeaf mplsldpentityldpid;
        //type: uint32 (refers to MPLS_LDP_STD_MIB::MplsLdpStdMib::Mplsldpentitytable::Mplsldpentityentry::mplsldpentityindex)
        YLeaf mplsldpentityindex;
        //type: string (refers to MPLS_LDP_STD_MIB::MplsLdpStdMib::Mplsldppeertable::Mplsldppeerentry::mplsldppeerldpid)
        YLeaf mplsldppeerldpid;
        YLeaf mplsoutsegmentldplspindex; //type: binary
        YLeaf mplsoutsegmentldplsplabeltype; //type: MplsldplabeltypeEnum
        YLeaf mplsoutsegmentldplsptype; //type: MplslsptypeEnum

}; // MplsLdpStdMib::Mplsoutsegmentldplsptable::Mplsoutsegmentldplspentry


class MplsLdpStdMib::Mplsfectable : public Entity
{
    public:
        Mplsfectable();
        ~Mplsfectable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Mplsfecentry; //type: MplsLdpStdMib::Mplsfectable::Mplsfecentry

        std::vector<std::shared_ptr<MPLS_LDP_STD_MIB::MplsLdpStdMib::Mplsfectable::Mplsfecentry> > mplsfecentry;
        
}; // MplsLdpStdMib::Mplsfectable


class MplsLdpStdMib::Mplsfectable::Mplsfecentry : public Entity
{
    public:
        Mplsfecentry();
        ~Mplsfecentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mplsfecindex; //type: uint32
        YLeaf mplsfectype; //type: MplsfectypeEnum
        YLeaf mplsfecaddrprefixlength; //type: uint32
        YLeaf mplsfecaddrtype; //type: InetaddresstypeEnum
        YLeaf mplsfecaddr; //type: binary
        YLeaf mplsfecstoragetype; //type: StoragetypeEnum
        YLeaf mplsfecrowstatus; //type: RowstatusEnum
        class MplsfectypeEnum;

}; // MplsLdpStdMib::Mplsfectable::Mplsfecentry


class MplsLdpStdMib::Mplsldplspfectable : public Entity
{
    public:
        Mplsldplspfectable();
        ~Mplsldplspfectable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Mplsldplspfecentry; //type: MplsLdpStdMib::Mplsldplspfectable::Mplsldplspfecentry

        std::vector<std::shared_ptr<MPLS_LDP_STD_MIB::MplsLdpStdMib::Mplsldplspfectable::Mplsldplspfecentry> > mplsldplspfecentry;
        
}; // MplsLdpStdMib::Mplsldplspfectable


class MplsLdpStdMib::Mplsldplspfectable::Mplsldplspfecentry : public Entity
{
    public:
        Mplsldplspfecentry();
        ~Mplsldplspfecentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: string (refers to MPLS_LDP_STD_MIB::MplsLdpStdMib::Mplsldpentitytable::Mplsldpentityentry::mplsldpentityldpid)
        YLeaf mplsldpentityldpid;
        //type: uint32 (refers to MPLS_LDP_STD_MIB::MplsLdpStdMib::Mplsldpentitytable::Mplsldpentityentry::mplsldpentityindex)
        YLeaf mplsldpentityindex;
        //type: string (refers to MPLS_LDP_STD_MIB::MplsLdpStdMib::Mplsldppeertable::Mplsldppeerentry::mplsldppeerldpid)
        YLeaf mplsldppeerldpid;
        YLeaf mplsldplspfecsegment; //type: MplsldplspfecsegmentEnum
        YLeaf mplsldplspfecsegmentindex; //type: binary
        YLeaf mplsldplspfecindex; //type: uint32
        YLeaf mplsldplspfecstoragetype; //type: StoragetypeEnum
        YLeaf mplsldplspfecrowstatus; //type: RowstatusEnum
        class MplsldplspfecsegmentEnum;

}; // MplsLdpStdMib::Mplsldplspfectable::Mplsldplspfecentry


class MplsLdpStdMib::Mplsldpsessionpeeraddrtable : public Entity
{
    public:
        Mplsldpsessionpeeraddrtable();
        ~Mplsldpsessionpeeraddrtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Mplsldpsessionpeeraddrentry; //type: MplsLdpStdMib::Mplsldpsessionpeeraddrtable::Mplsldpsessionpeeraddrentry

        std::vector<std::shared_ptr<MPLS_LDP_STD_MIB::MplsLdpStdMib::Mplsldpsessionpeeraddrtable::Mplsldpsessionpeeraddrentry> > mplsldpsessionpeeraddrentry;
        
}; // MplsLdpStdMib::Mplsldpsessionpeeraddrtable


class MplsLdpStdMib::Mplsldpsessionpeeraddrtable::Mplsldpsessionpeeraddrentry : public Entity
{
    public:
        Mplsldpsessionpeeraddrentry();
        ~Mplsldpsessionpeeraddrentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: string (refers to MPLS_LDP_STD_MIB::MplsLdpStdMib::Mplsldpentitytable::Mplsldpentityentry::mplsldpentityldpid)
        YLeaf mplsldpentityldpid;
        //type: uint32 (refers to MPLS_LDP_STD_MIB::MplsLdpStdMib::Mplsldpentitytable::Mplsldpentityentry::mplsldpentityindex)
        YLeaf mplsldpentityindex;
        //type: string (refers to MPLS_LDP_STD_MIB::MplsLdpStdMib::Mplsldppeertable::Mplsldppeerentry::mplsldppeerldpid)
        YLeaf mplsldppeerldpid;
        YLeaf mplsldpsessionpeeraddrindex; //type: uint32
        YLeaf mplsldpsessionpeernexthopaddrtype; //type: InetaddresstypeEnum
        YLeaf mplsldpsessionpeernexthopaddr; //type: binary

}; // MplsLdpStdMib::Mplsldpsessionpeeraddrtable::Mplsldpsessionpeeraddrentry

class MplsLdpStdMib::Mplsldplsrobjects::MplsldplsrloopdetectioncapableEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf other;
        static const Enum::YLeaf hopCount;
        static const Enum::YLeaf pathVector;
        static const Enum::YLeaf hopCountAndPathVector;

};

class MplsLdpStdMib::Mplsldpentitytable::Mplsldpentityentry::MplsldpentityadminstatusEnum : public Enum
{
    public:
        static const Enum::YLeaf enable;
        static const Enum::YLeaf disable;

};

class MplsLdpStdMib::Mplsldpentitytable::Mplsldpentityentry::MplsldpentityoperstatusEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf enabled;
        static const Enum::YLeaf disabled;

};

class MplsLdpStdMib::Mplsldpentitytable::Mplsldpentityentry::MplsldpentitytransportaddrkindEnum : public Enum
{
    public:
        static const Enum::YLeaf interface;
        static const Enum::YLeaf loopback;

};

class MplsLdpStdMib::Mplsldppeertable::Mplsldppeerentry::MplsldpsessionstateEnum : public Enum
{
    public:
        static const Enum::YLeaf nonexistent;
        static const Enum::YLeaf initialized;
        static const Enum::YLeaf openrec;
        static const Enum::YLeaf opensent;
        static const Enum::YLeaf operational;

};

class MplsLdpStdMib::Mplsldppeertable::Mplsldppeerentry::MplsldpsessionroleEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf active;
        static const Enum::YLeaf passive;

};

class MplsLdpStdMib::Mplsldphelloadjacencytable::Mplsldphelloadjacencyentry::MplsldphelloadjacencytypeEnum : public Enum
{
    public:
        static const Enum::YLeaf link;
        static const Enum::YLeaf targeted;

};

class MplsLdpStdMib::Mplsfectable::Mplsfecentry::MplsfectypeEnum : public Enum
{
    public:
        static const Enum::YLeaf prefix;
        static const Enum::YLeaf hostAddress;

};

class MplsLdpStdMib::Mplsldplspfectable::Mplsldplspfecentry::MplsldplspfecsegmentEnum : public Enum
{
    public:
        static const Enum::YLeaf inSegment;
        static const Enum::YLeaf outSegment;

};


}
}

#endif /* _MPLS_LDP_STD_MIB_ */

