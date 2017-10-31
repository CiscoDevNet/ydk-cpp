#ifndef _MPLS_TE_STD_MIB_
#define _MPLS_TE_STD_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace MPLS_TE_STD_MIB {

class MPLSTESTDMIB : public ydk::Entity
{
    public:
        MPLSTESTDMIB();
        ~MPLSTESTDMIB();

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

        class Mplstescalars; //type: MPLSTESTDMIB::Mplstescalars
        class Mplsteobjects; //type: MPLSTESTDMIB::Mplsteobjects
        class Mplstunneltable; //type: MPLSTESTDMIB::Mplstunneltable
        class Mplstunnelhoptable; //type: MPLSTESTDMIB::Mplstunnelhoptable
        class Mplstunnelresourcetable; //type: MPLSTESTDMIB::Mplstunnelresourcetable
        class Mplstunnelarhoptable; //type: MPLSTESTDMIB::Mplstunnelarhoptable
        class Mplstunnelchoptable; //type: MPLSTESTDMIB::Mplstunnelchoptable
        class Mplstunnelcrldprestable; //type: MPLSTESTDMIB::Mplstunnelcrldprestable

        std::shared_ptr<cisco_ios_xe::MPLS_TE_STD_MIB::MPLSTESTDMIB::Mplstescalars> mplstescalars;
        std::shared_ptr<cisco_ios_xe::MPLS_TE_STD_MIB::MPLSTESTDMIB::Mplsteobjects> mplsteobjects;
        std::shared_ptr<cisco_ios_xe::MPLS_TE_STD_MIB::MPLSTESTDMIB::Mplstunneltable> mplstunneltable;
        std::shared_ptr<cisco_ios_xe::MPLS_TE_STD_MIB::MPLSTESTDMIB::Mplstunnelhoptable> mplstunnelhoptable;
        std::shared_ptr<cisco_ios_xe::MPLS_TE_STD_MIB::MPLSTESTDMIB::Mplstunnelresourcetable> mplstunnelresourcetable;
        std::shared_ptr<cisco_ios_xe::MPLS_TE_STD_MIB::MPLSTESTDMIB::Mplstunnelarhoptable> mplstunnelarhoptable;
        std::shared_ptr<cisco_ios_xe::MPLS_TE_STD_MIB::MPLSTESTDMIB::Mplstunnelchoptable> mplstunnelchoptable;
        std::shared_ptr<cisco_ios_xe::MPLS_TE_STD_MIB::MPLSTESTDMIB::Mplstunnelcrldprestable> mplstunnelcrldprestable;
        
}; // MPLSTESTDMIB


class MPLSTESTDMIB::Mplstescalars : public ydk::Entity
{
    public:
        Mplstescalars();
        ~Mplstescalars();

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

        ydk::YLeaf mplstunnelconfigured; //type: uint32
        ydk::YLeaf mplstunnelactive; //type: uint32
        ydk::YLeaf mplstunneltedistproto; //type: Mplstunneltedistproto
        ydk::YLeaf mplstunnelmaxhops; //type: uint32
        ydk::YLeaf mplstunnelnotificationmaxrate; //type: uint32

}; // MPLSTESTDMIB::Mplstescalars


class MPLSTESTDMIB::Mplsteobjects : public ydk::Entity
{
    public:
        Mplsteobjects();
        ~Mplsteobjects();

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

        ydk::YLeaf mplstunnelindexnext; //type: uint32
        ydk::YLeaf mplstunnelhoplistindexnext; //type: uint32
        ydk::YLeaf mplstunnelresourceindexnext; //type: uint32
        ydk::YLeaf mplstunnelnotificationenable; //type: boolean

}; // MPLSTESTDMIB::Mplsteobjects


class MPLSTESTDMIB::Mplstunneltable : public ydk::Entity
{
    public:
        Mplstunneltable();
        ~Mplstunneltable();

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

        class Mplstunnelentry; //type: MPLSTESTDMIB::Mplstunneltable::Mplstunnelentry

        std::vector<std::shared_ptr<cisco_ios_xe::MPLS_TE_STD_MIB::MPLSTESTDMIB::Mplstunneltable::Mplstunnelentry> > mplstunnelentry;
        
}; // MPLSTESTDMIB::Mplstunneltable


class MPLSTESTDMIB::Mplstunneltable::Mplstunnelentry : public ydk::Entity
{
    public:
        Mplstunnelentry();
        ~Mplstunnelentry();

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

        ydk::YLeaf mplstunnelindex; //type: uint32
        ydk::YLeaf mplstunnelinstance; //type: uint32
        ydk::YLeaf mplstunnelingresslsrid; //type: uint32
        ydk::YLeaf mplstunnelegresslsrid; //type: uint32
        ydk::YLeaf mplstunnelname; //type: string
        ydk::YLeaf mplstunneldescr; //type: string
        ydk::YLeaf mplstunnelisif; //type: boolean
        ydk::YLeaf mplstunnelifindex; //type: int32
        ydk::YLeaf mplstunnelowner; //type: MplsOwner
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
        ydk::YLeaf mplstunnelrowstatus; //type: RowStatus
        ydk::YLeaf mplstunnelstoragetype; //type: StorageType
        ydk::YLeaf mplstunnelperfpackets; //type: uint32
        ydk::YLeaf mplstunnelperfhcpackets; //type: uint64
        ydk::YLeaf mplstunnelperferrors; //type: uint32
        ydk::YLeaf mplstunnelperfbytes; //type: uint32
        ydk::YLeaf mplstunnelperfhcbytes; //type: uint64
        class Mplstunnelrole;
        class Mplstunnelsignallingproto;
        class Mplstunneladminstatus;
        class Mplstunneloperstatus;

}; // MPLSTESTDMIB::Mplstunneltable::Mplstunnelentry


class MPLSTESTDMIB::Mplstunnelhoptable : public ydk::Entity
{
    public:
        Mplstunnelhoptable();
        ~Mplstunnelhoptable();

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

        class Mplstunnelhopentry; //type: MPLSTESTDMIB::Mplstunnelhoptable::Mplstunnelhopentry

        std::vector<std::shared_ptr<cisco_ios_xe::MPLS_TE_STD_MIB::MPLSTESTDMIB::Mplstunnelhoptable::Mplstunnelhopentry> > mplstunnelhopentry;
        
}; // MPLSTESTDMIB::Mplstunnelhoptable


class MPLSTESTDMIB::Mplstunnelhoptable::Mplstunnelhopentry : public ydk::Entity
{
    public:
        Mplstunnelhopentry();
        ~Mplstunnelhopentry();

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

        ydk::YLeaf mplstunnelhoplistindex; //type: uint32
        ydk::YLeaf mplstunnelhoppathoptionindex; //type: uint32
        ydk::YLeaf mplstunnelhopindex; //type: uint32
        ydk::YLeaf mplstunnelhopaddrtype; //type: TeHopAddressType
        ydk::YLeaf mplstunnelhopipaddr; //type: binary
        ydk::YLeaf mplstunnelhopipprefixlen; //type: uint32
        ydk::YLeaf mplstunnelhopasnumber; //type: binary
        ydk::YLeaf mplstunnelhopaddrunnum; //type: binary
        ydk::YLeaf mplstunnelhoplspid; //type: binary
        ydk::YLeaf mplstunnelhoptype; //type: Mplstunnelhoptype
        ydk::YLeaf mplstunnelhopinclude; //type: boolean
        ydk::YLeaf mplstunnelhoppathoptionname; //type: string
        ydk::YLeaf mplstunnelhopentrypathcomp; //type: Mplstunnelhopentrypathcomp
        ydk::YLeaf mplstunnelhoprowstatus; //type: RowStatus
        ydk::YLeaf mplstunnelhopstoragetype; //type: StorageType
        class Mplstunnelhoptype;
        class Mplstunnelhopentrypathcomp;

}; // MPLSTESTDMIB::Mplstunnelhoptable::Mplstunnelhopentry


class MPLSTESTDMIB::Mplstunnelresourcetable : public ydk::Entity
{
    public:
        Mplstunnelresourcetable();
        ~Mplstunnelresourcetable();

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

        class Mplstunnelresourceentry; //type: MPLSTESTDMIB::Mplstunnelresourcetable::Mplstunnelresourceentry

        std::vector<std::shared_ptr<cisco_ios_xe::MPLS_TE_STD_MIB::MPLSTESTDMIB::Mplstunnelresourcetable::Mplstunnelresourceentry> > mplstunnelresourceentry;
        
}; // MPLSTESTDMIB::Mplstunnelresourcetable


class MPLSTESTDMIB::Mplstunnelresourcetable::Mplstunnelresourceentry : public ydk::Entity
{
    public:
        Mplstunnelresourceentry();
        ~Mplstunnelresourceentry();

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

        ydk::YLeaf mplstunnelresourceindex; //type: uint32
        ydk::YLeaf mplstunnelresourcemaxrate; //type: uint32
        ydk::YLeaf mplstunnelresourcemeanrate; //type: uint32
        ydk::YLeaf mplstunnelresourcemaxburstsize; //type: uint32
        ydk::YLeaf mplstunnelresourcemeanburstsize; //type: uint32
        ydk::YLeaf mplstunnelresourceexburstsize; //type: uint32
        ydk::YLeaf mplstunnelresourcefrequency; //type: Mplstunnelresourcefrequency
        ydk::YLeaf mplstunnelresourceweight; //type: uint32
        ydk::YLeaf mplstunnelresourcerowstatus; //type: RowStatus
        ydk::YLeaf mplstunnelresourcestoragetype; //type: StorageType
        class Mplstunnelresourcefrequency;

}; // MPLSTESTDMIB::Mplstunnelresourcetable::Mplstunnelresourceentry


class MPLSTESTDMIB::Mplstunnelarhoptable : public ydk::Entity
{
    public:
        Mplstunnelarhoptable();
        ~Mplstunnelarhoptable();

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

        class Mplstunnelarhopentry; //type: MPLSTESTDMIB::Mplstunnelarhoptable::Mplstunnelarhopentry

        std::vector<std::shared_ptr<cisco_ios_xe::MPLS_TE_STD_MIB::MPLSTESTDMIB::Mplstunnelarhoptable::Mplstunnelarhopentry> > mplstunnelarhopentry;
        
}; // MPLSTESTDMIB::Mplstunnelarhoptable


class MPLSTESTDMIB::Mplstunnelarhoptable::Mplstunnelarhopentry : public ydk::Entity
{
    public:
        Mplstunnelarhopentry();
        ~Mplstunnelarhopentry();

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

        ydk::YLeaf mplstunnelarhoplistindex; //type: uint32
        ydk::YLeaf mplstunnelarhopindex; //type: uint32
        ydk::YLeaf mplstunnelarhopaddrtype; //type: TeHopAddressType
        ydk::YLeaf mplstunnelarhopipaddr; //type: binary
        ydk::YLeaf mplstunnelarhopaddrunnum; //type: binary
        ydk::YLeaf mplstunnelarhoplspid; //type: binary

}; // MPLSTESTDMIB::Mplstunnelarhoptable::Mplstunnelarhopentry


class MPLSTESTDMIB::Mplstunnelchoptable : public ydk::Entity
{
    public:
        Mplstunnelchoptable();
        ~Mplstunnelchoptable();

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

        class Mplstunnelchopentry; //type: MPLSTESTDMIB::Mplstunnelchoptable::Mplstunnelchopentry

        std::vector<std::shared_ptr<cisco_ios_xe::MPLS_TE_STD_MIB::MPLSTESTDMIB::Mplstunnelchoptable::Mplstunnelchopentry> > mplstunnelchopentry;
        
}; // MPLSTESTDMIB::Mplstunnelchoptable


class MPLSTESTDMIB::Mplstunnelchoptable::Mplstunnelchopentry : public ydk::Entity
{
    public:
        Mplstunnelchopentry();
        ~Mplstunnelchopentry();

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

        ydk::YLeaf mplstunnelchoplistindex; //type: uint32
        ydk::YLeaf mplstunnelchopindex; //type: uint32
        ydk::YLeaf mplstunnelchopaddrtype; //type: TeHopAddressType
        ydk::YLeaf mplstunnelchopipaddr; //type: binary
        ydk::YLeaf mplstunnelchopipprefixlen; //type: uint32
        ydk::YLeaf mplstunnelchopasnumber; //type: binary
        ydk::YLeaf mplstunnelchopaddrunnum; //type: binary
        ydk::YLeaf mplstunnelchoplspid; //type: binary
        ydk::YLeaf mplstunnelchoptype; //type: Mplstunnelchoptype
        class Mplstunnelchoptype;

}; // MPLSTESTDMIB::Mplstunnelchoptable::Mplstunnelchopentry


class MPLSTESTDMIB::Mplstunnelcrldprestable : public ydk::Entity
{
    public:
        Mplstunnelcrldprestable();
        ~Mplstunnelcrldprestable();

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

        class Mplstunnelcrldpresentry; //type: MPLSTESTDMIB::Mplstunnelcrldprestable::Mplstunnelcrldpresentry

        std::vector<std::shared_ptr<cisco_ios_xe::MPLS_TE_STD_MIB::MPLSTESTDMIB::Mplstunnelcrldprestable::Mplstunnelcrldpresentry> > mplstunnelcrldpresentry;
        
}; // MPLSTESTDMIB::Mplstunnelcrldprestable


class MPLSTESTDMIB::Mplstunnelcrldprestable::Mplstunnelcrldpresentry : public ydk::Entity
{
    public:
        Mplstunnelcrldpresentry();
        ~Mplstunnelcrldpresentry();

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

        //type: uint32 (refers to cisco_ios_xe::MPLS_TE_STD_MIB::MPLSTESTDMIB::Mplstunnelresourcetable::Mplstunnelresourceentry::mplstunnelresourceindex)
        ydk::YLeaf mplstunnelresourceindex;
        ydk::YLeaf mplstunnelcrldpresmeanburstsize; //type: uint32
        ydk::YLeaf mplstunnelcrldpresexburstsize; //type: uint32
        ydk::YLeaf mplstunnelcrldpresfrequency; //type: Mplstunnelcrldpresfrequency
        ydk::YLeaf mplstunnelcrldpresweight; //type: uint32
        ydk::YLeaf mplstunnelcrldpresflags; //type: uint32
        ydk::YLeaf mplstunnelcrldpresrowstatus; //type: RowStatus
        ydk::YLeaf mplstunnelcrldpresstoragetype; //type: StorageType
        class Mplstunnelcrldpresfrequency;

}; // MPLSTESTDMIB::Mplstunnelcrldprestable::Mplstunnelcrldpresentry

class MPLSTESTDMIB::Mplstunneltable::Mplstunnelentry::Mplstunnelrole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf head;
        static const ydk::Enum::YLeaf transit;
        static const ydk::Enum::YLeaf tail;
        static const ydk::Enum::YLeaf headTail;

};

class MPLSTESTDMIB::Mplstunneltable::Mplstunnelentry::Mplstunnelsignallingproto : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf rsvp;
        static const ydk::Enum::YLeaf crldp;
        static const ydk::Enum::YLeaf other;

};

class MPLSTESTDMIB::Mplstunneltable::Mplstunnelentry::Mplstunneladminstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf testing;

};

class MPLSTESTDMIB::Mplstunneltable::Mplstunnelentry::Mplstunneloperstatus : public ydk::Enum
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

class MPLSTESTDMIB::Mplstunnelhoptable::Mplstunnelhopentry::Mplstunnelhoptype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf strict;
        static const ydk::Enum::YLeaf loose;

};

class MPLSTESTDMIB::Mplstunnelhoptable::Mplstunnelhopentry::Mplstunnelhopentrypathcomp : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dynamic;
        static const ydk::Enum::YLeaf explicit_;

};

class MPLSTESTDMIB::Mplstunnelresourcetable::Mplstunnelresourceentry::Mplstunnelresourcefrequency : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf frequent;
        static const ydk::Enum::YLeaf veryFrequent;

};

class MPLSTESTDMIB::Mplstunnelchoptable::Mplstunnelchopentry::Mplstunnelchoptype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf strict;
        static const ydk::Enum::YLeaf loose;

};

class MPLSTESTDMIB::Mplstunnelcrldprestable::Mplstunnelcrldpresentry::Mplstunnelcrldpresfrequency : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf frequent;
        static const ydk::Enum::YLeaf veryFrequent;

};


}
}

#endif /* _MPLS_TE_STD_MIB_ */

