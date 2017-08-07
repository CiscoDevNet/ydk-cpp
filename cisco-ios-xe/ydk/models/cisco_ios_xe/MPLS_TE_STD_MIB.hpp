#ifndef _MPLS_TE_STD_MIB_
#define _MPLS_TE_STD_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace MPLS_TE_STD_MIB {

class MplsTeStdMib : public ydk::Entity
{
    public:
        MplsTeStdMib();
        ~MplsTeStdMib();

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

        class Mplstescalars; //type: MplsTeStdMib::Mplstescalars
        class Mplsteobjects; //type: MplsTeStdMib::Mplsteobjects
        class Mplstunneltable; //type: MplsTeStdMib::Mplstunneltable
        class Mplstunnelhoptable; //type: MplsTeStdMib::Mplstunnelhoptable
        class Mplstunnelresourcetable; //type: MplsTeStdMib::Mplstunnelresourcetable
        class Mplstunnelarhoptable; //type: MplsTeStdMib::Mplstunnelarhoptable
        class Mplstunnelchoptable; //type: MplsTeStdMib::Mplstunnelchoptable
        class Mplstunnelcrldprestable; //type: MplsTeStdMib::Mplstunnelcrldprestable

        std::shared_ptr<MPLS_TE_STD_MIB::MplsTeStdMib::Mplsteobjects> mplsteobjects;
        std::shared_ptr<MPLS_TE_STD_MIB::MplsTeStdMib::Mplstescalars> mplstescalars;
        std::shared_ptr<MPLS_TE_STD_MIB::MplsTeStdMib::Mplstunnelarhoptable> mplstunnelarhoptable;
        std::shared_ptr<MPLS_TE_STD_MIB::MplsTeStdMib::Mplstunnelchoptable> mplstunnelchoptable;
        std::shared_ptr<MPLS_TE_STD_MIB::MplsTeStdMib::Mplstunnelcrldprestable> mplstunnelcrldprestable;
        std::shared_ptr<MPLS_TE_STD_MIB::MplsTeStdMib::Mplstunnelhoptable> mplstunnelhoptable;
        std::shared_ptr<MPLS_TE_STD_MIB::MplsTeStdMib::Mplstunnelresourcetable> mplstunnelresourcetable;
        std::shared_ptr<MPLS_TE_STD_MIB::MplsTeStdMib::Mplstunneltable> mplstunneltable;
        
}; // MplsTeStdMib


class MplsTeStdMib::Mplstescalars : public ydk::Entity
{
    public:
        Mplstescalars();
        ~Mplstescalars();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mplstunnelconfigured; //type: uint32
        ydk::YLeaf mplstunnelactive; //type: uint32
        ydk::YLeaf mplstunneltedistproto; //type: Mplstunneltedistproto
        ydk::YLeaf mplstunnelmaxhops; //type: uint32
        ydk::YLeaf mplstunnelnotificationmaxrate; //type: uint32

}; // MplsTeStdMib::Mplstescalars


class MplsTeStdMib::Mplsteobjects : public ydk::Entity
{
    public:
        Mplsteobjects();
        ~Mplsteobjects();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mplstunnelindexnext; //type: uint32
        ydk::YLeaf mplstunnelhoplistindexnext; //type: uint32
        ydk::YLeaf mplstunnelresourceindexnext; //type: uint32
        ydk::YLeaf mplstunnelnotificationenable; //type: boolean

}; // MplsTeStdMib::Mplsteobjects


class MplsTeStdMib::Mplstunneltable : public ydk::Entity
{
    public:
        Mplstunneltable();
        ~Mplstunneltable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Mplstunnelentry; //type: MplsTeStdMib::Mplstunneltable::Mplstunnelentry

        std::vector<std::shared_ptr<MPLS_TE_STD_MIB::MplsTeStdMib::Mplstunneltable::Mplstunnelentry> > mplstunnelentry;
        
}; // MplsTeStdMib::Mplstunneltable


class MplsTeStdMib::Mplstunneltable::Mplstunnelentry : public ydk::Entity
{
    public:
        Mplstunnelentry();
        ~Mplstunnelentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mplstunnelindex; //type: uint32
        ydk::YLeaf mplstunnelinstance; //type: uint32
        ydk::YLeaf mplstunnelingresslsrid; //type: uint32
        ydk::YLeaf mplstunnelegresslsrid; //type: uint32
        ydk::YLeaf mplstunnelname; //type: string
        ydk::YLeaf mplstunneldescr; //type: string
        ydk::YLeaf mplstunnelisif; //type: boolean
        ydk::YLeaf mplstunnelifindex; //type: int32
        ydk::YLeaf mplstunnelowner; //type: Mplsowner
        ydk::YLeaf mplstunnelrole; //type: Mplstunnelrole
        ydk::YLeaf mplstunnelxcpointer; //type: string
        ydk::YLeaf mplstunnelsignallingproto; //type: Mplstunnelsignallingproto
        ydk::YLeaf mplstunnelsetupprio; //type: int32
        ydk::YLeaf mplstunnelholdingprio; //type: int32
        ydk::YLeaf mplstunnelsessionattributes; //type: Mplstunnelsessionattributes
        ydk::YLeaf mplstunnellocalprotectinuse; //type: boolean
        ydk::YLeaf mplstunnelresourcepointer; //type: string
        ydk::YLeaf mplstunnelprimaryinstance; //type: uint32
        ydk::YLeaf mplstunnelinstancepriority; //type: uint32
        ydk::YLeaf mplstunnelhoptableindex; //type: uint32
        ydk::YLeaf mplstunnelpathinuse; //type: uint32
        ydk::YLeaf mplstunnelarhoptableindex; //type: uint32
        ydk::YLeaf mplstunnelchoptableindex; //type: uint32
        ydk::YLeaf mplstunnelincludeanyaffinity; //type: uint32
        ydk::YLeaf mplstunnelincludeallaffinity; //type: uint32
        ydk::YLeaf mplstunnelexcludeanyaffinity; //type: uint32
        ydk::YLeaf mplstunneltotaluptime; //type: uint32
        ydk::YLeaf mplstunnelinstanceuptime; //type: uint32
        ydk::YLeaf mplstunnelprimaryuptime; //type: uint32
        ydk::YLeaf mplstunnelpathchanges; //type: uint32
        ydk::YLeaf mplstunnellastpathchange; //type: uint32
        ydk::YLeaf mplstunnelcreationtime; //type: uint32
        ydk::YLeaf mplstunnelstatetransitions; //type: uint32
        ydk::YLeaf mplstunneladminstatus; //type: Mplstunneladminstatus
        ydk::YLeaf mplstunneloperstatus; //type: Mplstunneloperstatus
        ydk::YLeaf mplstunnelrowstatus; //type: Rowstatus
        ydk::YLeaf mplstunnelstoragetype; //type: Storagetype
        ydk::YLeaf mplstunnelperfpackets; //type: uint32
        ydk::YLeaf mplstunnelperfhcpackets; //type: uint64
        ydk::YLeaf mplstunnelperferrors; //type: uint32
        ydk::YLeaf mplstunnelperfbytes; //type: uint32
        ydk::YLeaf mplstunnelperfhcbytes; //type: uint64
        class Mplstunnelrole;
        class Mplstunnelsignallingproto;
        class Mplstunneladminstatus;
        class Mplstunneloperstatus;

}; // MplsTeStdMib::Mplstunneltable::Mplstunnelentry


class MplsTeStdMib::Mplstunnelhoptable : public ydk::Entity
{
    public:
        Mplstunnelhoptable();
        ~Mplstunnelhoptable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Mplstunnelhopentry; //type: MplsTeStdMib::Mplstunnelhoptable::Mplstunnelhopentry

        std::vector<std::shared_ptr<MPLS_TE_STD_MIB::MplsTeStdMib::Mplstunnelhoptable::Mplstunnelhopentry> > mplstunnelhopentry;
        
}; // MplsTeStdMib::Mplstunnelhoptable


class MplsTeStdMib::Mplstunnelhoptable::Mplstunnelhopentry : public ydk::Entity
{
    public:
        Mplstunnelhopentry();
        ~Mplstunnelhopentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mplstunnelhoplistindex; //type: uint32
        ydk::YLeaf mplstunnelhoppathoptionindex; //type: uint32
        ydk::YLeaf mplstunnelhopindex; //type: uint32
        ydk::YLeaf mplstunnelhopaddrtype; //type: Tehopaddresstype
        ydk::YLeaf mplstunnelhopipaddr; //type: binary
        ydk::YLeaf mplstunnelhopipprefixlen; //type: uint32
        ydk::YLeaf mplstunnelhopasnumber; //type: binary
        ydk::YLeaf mplstunnelhopaddrunnum; //type: binary
        ydk::YLeaf mplstunnelhoplspid; //type: binary
        ydk::YLeaf mplstunnelhoptype; //type: Mplstunnelhoptype
        ydk::YLeaf mplstunnelhopinclude; //type: boolean
        ydk::YLeaf mplstunnelhoppathoptionname; //type: string
        ydk::YLeaf mplstunnelhopentrypathcomp; //type: Mplstunnelhopentrypathcomp
        ydk::YLeaf mplstunnelhoprowstatus; //type: Rowstatus
        ydk::YLeaf mplstunnelhopstoragetype; //type: Storagetype
        class Mplstunnelhoptype;
        class Mplstunnelhopentrypathcomp;

}; // MplsTeStdMib::Mplstunnelhoptable::Mplstunnelhopentry


class MplsTeStdMib::Mplstunnelresourcetable : public ydk::Entity
{
    public:
        Mplstunnelresourcetable();
        ~Mplstunnelresourcetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Mplstunnelresourceentry; //type: MplsTeStdMib::Mplstunnelresourcetable::Mplstunnelresourceentry

        std::vector<std::shared_ptr<MPLS_TE_STD_MIB::MplsTeStdMib::Mplstunnelresourcetable::Mplstunnelresourceentry> > mplstunnelresourceentry;
        
}; // MplsTeStdMib::Mplstunnelresourcetable


class MplsTeStdMib::Mplstunnelresourcetable::Mplstunnelresourceentry : public ydk::Entity
{
    public:
        Mplstunnelresourceentry();
        ~Mplstunnelresourceentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mplstunnelresourceindex; //type: uint32
        ydk::YLeaf mplstunnelresourcemaxrate; //type: uint32
        ydk::YLeaf mplstunnelresourcemeanrate; //type: uint32
        ydk::YLeaf mplstunnelresourcemaxburstsize; //type: uint32
        ydk::YLeaf mplstunnelresourcemeanburstsize; //type: uint32
        ydk::YLeaf mplstunnelresourceexburstsize; //type: uint32
        ydk::YLeaf mplstunnelresourcefrequency; //type: Mplstunnelresourcefrequency
        ydk::YLeaf mplstunnelresourceweight; //type: uint32
        ydk::YLeaf mplstunnelresourcerowstatus; //type: Rowstatus
        ydk::YLeaf mplstunnelresourcestoragetype; //type: Storagetype
        class Mplstunnelresourcefrequency;

}; // MplsTeStdMib::Mplstunnelresourcetable::Mplstunnelresourceentry


class MplsTeStdMib::Mplstunnelarhoptable : public ydk::Entity
{
    public:
        Mplstunnelarhoptable();
        ~Mplstunnelarhoptable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Mplstunnelarhopentry; //type: MplsTeStdMib::Mplstunnelarhoptable::Mplstunnelarhopentry

        std::vector<std::shared_ptr<MPLS_TE_STD_MIB::MplsTeStdMib::Mplstunnelarhoptable::Mplstunnelarhopentry> > mplstunnelarhopentry;
        
}; // MplsTeStdMib::Mplstunnelarhoptable


class MplsTeStdMib::Mplstunnelarhoptable::Mplstunnelarhopentry : public ydk::Entity
{
    public:
        Mplstunnelarhopentry();
        ~Mplstunnelarhopentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mplstunnelarhoplistindex; //type: uint32
        ydk::YLeaf mplstunnelarhopindex; //type: uint32
        ydk::YLeaf mplstunnelarhopaddrtype; //type: Tehopaddresstype
        ydk::YLeaf mplstunnelarhopipaddr; //type: binary
        ydk::YLeaf mplstunnelarhopaddrunnum; //type: binary
        ydk::YLeaf mplstunnelarhoplspid; //type: binary

}; // MplsTeStdMib::Mplstunnelarhoptable::Mplstunnelarhopentry


class MplsTeStdMib::Mplstunnelchoptable : public ydk::Entity
{
    public:
        Mplstunnelchoptable();
        ~Mplstunnelchoptable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Mplstunnelchopentry; //type: MplsTeStdMib::Mplstunnelchoptable::Mplstunnelchopentry

        std::vector<std::shared_ptr<MPLS_TE_STD_MIB::MplsTeStdMib::Mplstunnelchoptable::Mplstunnelchopentry> > mplstunnelchopentry;
        
}; // MplsTeStdMib::Mplstunnelchoptable


class MplsTeStdMib::Mplstunnelchoptable::Mplstunnelchopentry : public ydk::Entity
{
    public:
        Mplstunnelchopentry();
        ~Mplstunnelchopentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mplstunnelchoplistindex; //type: uint32
        ydk::YLeaf mplstunnelchopindex; //type: uint32
        ydk::YLeaf mplstunnelchopaddrtype; //type: Tehopaddresstype
        ydk::YLeaf mplstunnelchopipaddr; //type: binary
        ydk::YLeaf mplstunnelchopipprefixlen; //type: uint32
        ydk::YLeaf mplstunnelchopasnumber; //type: binary
        ydk::YLeaf mplstunnelchopaddrunnum; //type: binary
        ydk::YLeaf mplstunnelchoplspid; //type: binary
        ydk::YLeaf mplstunnelchoptype; //type: Mplstunnelchoptype
        class Mplstunnelchoptype;

}; // MplsTeStdMib::Mplstunnelchoptable::Mplstunnelchopentry


class MplsTeStdMib::Mplstunnelcrldprestable : public ydk::Entity
{
    public:
        Mplstunnelcrldprestable();
        ~Mplstunnelcrldprestable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Mplstunnelcrldpresentry; //type: MplsTeStdMib::Mplstunnelcrldprestable::Mplstunnelcrldpresentry

        std::vector<std::shared_ptr<MPLS_TE_STD_MIB::MplsTeStdMib::Mplstunnelcrldprestable::Mplstunnelcrldpresentry> > mplstunnelcrldpresentry;
        
}; // MplsTeStdMib::Mplstunnelcrldprestable


class MplsTeStdMib::Mplstunnelcrldprestable::Mplstunnelcrldpresentry : public ydk::Entity
{
    public:
        Mplstunnelcrldpresentry();
        ~Mplstunnelcrldpresentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint32 (refers to MPLS_TE_STD_MIB::MplsTeStdMib::Mplstunnelresourcetable::Mplstunnelresourceentry::mplstunnelresourceindex)
        ydk::YLeaf mplstunnelresourceindex;
        ydk::YLeaf mplstunnelcrldpresmeanburstsize; //type: uint32
        ydk::YLeaf mplstunnelcrldpresexburstsize; //type: uint32
        ydk::YLeaf mplstunnelcrldpresfrequency; //type: Mplstunnelcrldpresfrequency
        ydk::YLeaf mplstunnelcrldpresweight; //type: uint32
        ydk::YLeaf mplstunnelcrldpresflags; //type: uint32
        ydk::YLeaf mplstunnelcrldpresrowstatus; //type: Rowstatus
        ydk::YLeaf mplstunnelcrldpresstoragetype; //type: Storagetype
        class Mplstunnelcrldpresfrequency;

}; // MplsTeStdMib::Mplstunnelcrldprestable::Mplstunnelcrldpresentry

class MplsTeStdMib::Mplstunneltable::Mplstunnelentry::Mplstunnelrole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf head;
        static const ydk::Enum::YLeaf transit;
        static const ydk::Enum::YLeaf tail;
        static const ydk::Enum::YLeaf headTail;

};

class MplsTeStdMib::Mplstunneltable::Mplstunnelentry::Mplstunnelsignallingproto : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf rsvp;
        static const ydk::Enum::YLeaf crldp;
        static const ydk::Enum::YLeaf other;

};

class MplsTeStdMib::Mplstunneltable::Mplstunnelentry::Mplstunneladminstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf testing;

};

class MplsTeStdMib::Mplstunneltable::Mplstunnelentry::Mplstunneloperstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf testing;
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf dormant;
        static const ydk::Enum::YLeaf notPresent;
        static const ydk::Enum::YLeaf lowerLayerDown;

};

class MplsTeStdMib::Mplstunnelhoptable::Mplstunnelhopentry::Mplstunnelhoptype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf strict;
        static const ydk::Enum::YLeaf loose;

};

class MplsTeStdMib::Mplstunnelhoptable::Mplstunnelhopentry::Mplstunnelhopentrypathcomp : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dynamic;
        static const ydk::Enum::YLeaf explicit_;

};

class MplsTeStdMib::Mplstunnelresourcetable::Mplstunnelresourceentry::Mplstunnelresourcefrequency : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf frequent;
        static const ydk::Enum::YLeaf veryFrequent;

};

class MplsTeStdMib::Mplstunnelchoptable::Mplstunnelchopentry::Mplstunnelchoptype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf strict;
        static const ydk::Enum::YLeaf loose;

};

class MplsTeStdMib::Mplstunnelcrldprestable::Mplstunnelcrldpresentry::Mplstunnelcrldpresfrequency : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf frequent;
        static const ydk::Enum::YLeaf veryFrequent;

};


}
}

#endif /* _MPLS_TE_STD_MIB_ */

