#ifndef _MPLS_TE_STD_MIB_
#define _MPLS_TE_STD_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace MPLS_TE_STD_MIB {

class MplsTeStdMib : public Entity
{
    public:
        MplsTeStdMib();
        ~MplsTeStdMib();

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


class MplsTeStdMib::Mplstescalars : public Entity
{
    public:
        Mplstescalars();
        ~Mplstescalars();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mplstunnelconfigured; //type: uint32
        YLeaf mplstunnelactive; //type: uint32
        YLeaf mplstunneltedistproto; //type: Mplstunneltedistproto
        YLeaf mplstunnelmaxhops; //type: uint32
        YLeaf mplstunnelnotificationmaxrate; //type: uint32

}; // MplsTeStdMib::Mplstescalars


class MplsTeStdMib::Mplsteobjects : public Entity
{
    public:
        Mplsteobjects();
        ~Mplsteobjects();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mplstunnelindexnext; //type: uint32
        YLeaf mplstunnelhoplistindexnext; //type: uint32
        YLeaf mplstunnelresourceindexnext; //type: uint32
        YLeaf mplstunnelnotificationenable; //type: boolean

}; // MplsTeStdMib::Mplsteobjects


class MplsTeStdMib::Mplstunneltable : public Entity
{
    public:
        Mplstunneltable();
        ~Mplstunneltable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Mplstunnelentry; //type: MplsTeStdMib::Mplstunneltable::Mplstunnelentry

        std::vector<std::shared_ptr<MPLS_TE_STD_MIB::MplsTeStdMib::Mplstunneltable::Mplstunnelentry> > mplstunnelentry;
        
}; // MplsTeStdMib::Mplstunneltable


class MplsTeStdMib::Mplstunneltable::Mplstunnelentry : public Entity
{
    public:
        Mplstunnelentry();
        ~Mplstunnelentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mplstunnelindex; //type: uint32
        YLeaf mplstunnelinstance; //type: uint32
        YLeaf mplstunnelingresslsrid; //type: uint32
        YLeaf mplstunnelegresslsrid; //type: uint32
        YLeaf mplstunnelname; //type: string
        YLeaf mplstunneldescr; //type: string
        YLeaf mplstunnelisif; //type: boolean
        YLeaf mplstunnelifindex; //type: int32
        YLeaf mplstunnelowner; //type: MplsownerEnum
        YLeaf mplstunnelrole; //type: MplstunnelroleEnum
        YLeaf mplstunnelxcpointer; //type: string
        YLeaf mplstunnelsignallingproto; //type: MplstunnelsignallingprotoEnum
        YLeaf mplstunnelsetupprio; //type: int32
        YLeaf mplstunnelholdingprio; //type: int32
        YLeaf mplstunnelsessionattributes; //type: Mplstunnelsessionattributes
        YLeaf mplstunnellocalprotectinuse; //type: boolean
        YLeaf mplstunnelresourcepointer; //type: string
        YLeaf mplstunnelprimaryinstance; //type: uint32
        YLeaf mplstunnelinstancepriority; //type: uint32
        YLeaf mplstunnelhoptableindex; //type: uint32
        YLeaf mplstunnelpathinuse; //type: uint32
        YLeaf mplstunnelarhoptableindex; //type: uint32
        YLeaf mplstunnelchoptableindex; //type: uint32
        YLeaf mplstunnelincludeanyaffinity; //type: uint32
        YLeaf mplstunnelincludeallaffinity; //type: uint32
        YLeaf mplstunnelexcludeanyaffinity; //type: uint32
        YLeaf mplstunneltotaluptime; //type: uint32
        YLeaf mplstunnelinstanceuptime; //type: uint32
        YLeaf mplstunnelprimaryuptime; //type: uint32
        YLeaf mplstunnelpathchanges; //type: uint32
        YLeaf mplstunnellastpathchange; //type: uint32
        YLeaf mplstunnelcreationtime; //type: uint32
        YLeaf mplstunnelstatetransitions; //type: uint32
        YLeaf mplstunneladminstatus; //type: MplstunneladminstatusEnum
        YLeaf mplstunneloperstatus; //type: MplstunneloperstatusEnum
        YLeaf mplstunnelrowstatus; //type: RowstatusEnum
        YLeaf mplstunnelstoragetype; //type: StoragetypeEnum
        YLeaf mplstunnelperfpackets; //type: uint32
        YLeaf mplstunnelperfhcpackets; //type: uint64
        YLeaf mplstunnelperferrors; //type: uint32
        YLeaf mplstunnelperfbytes; //type: uint32
        YLeaf mplstunnelperfhcbytes; //type: uint64
        class MplstunnelroleEnum;
        class MplstunnelsignallingprotoEnum;
        class MplstunneladminstatusEnum;
        class MplstunneloperstatusEnum;

}; // MplsTeStdMib::Mplstunneltable::Mplstunnelentry


class MplsTeStdMib::Mplstunnelhoptable : public Entity
{
    public:
        Mplstunnelhoptable();
        ~Mplstunnelhoptable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Mplstunnelhopentry; //type: MplsTeStdMib::Mplstunnelhoptable::Mplstunnelhopentry

        std::vector<std::shared_ptr<MPLS_TE_STD_MIB::MplsTeStdMib::Mplstunnelhoptable::Mplstunnelhopentry> > mplstunnelhopentry;
        
}; // MplsTeStdMib::Mplstunnelhoptable


class MplsTeStdMib::Mplstunnelhoptable::Mplstunnelhopentry : public Entity
{
    public:
        Mplstunnelhopentry();
        ~Mplstunnelhopentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mplstunnelhoplistindex; //type: uint32
        YLeaf mplstunnelhoppathoptionindex; //type: uint32
        YLeaf mplstunnelhopindex; //type: uint32
        YLeaf mplstunnelhopaddrtype; //type: TehopaddresstypeEnum
        YLeaf mplstunnelhopipaddr; //type: binary
        YLeaf mplstunnelhopipprefixlen; //type: uint32
        YLeaf mplstunnelhopasnumber; //type: binary
        YLeaf mplstunnelhopaddrunnum; //type: binary
        YLeaf mplstunnelhoplspid; //type: binary
        YLeaf mplstunnelhoptype; //type: MplstunnelhoptypeEnum
        YLeaf mplstunnelhopinclude; //type: boolean
        YLeaf mplstunnelhoppathoptionname; //type: string
        YLeaf mplstunnelhopentrypathcomp; //type: MplstunnelhopentrypathcompEnum
        YLeaf mplstunnelhoprowstatus; //type: RowstatusEnum
        YLeaf mplstunnelhopstoragetype; //type: StoragetypeEnum
        class MplstunnelhoptypeEnum;
        class MplstunnelhopentrypathcompEnum;

}; // MplsTeStdMib::Mplstunnelhoptable::Mplstunnelhopentry


class MplsTeStdMib::Mplstunnelresourcetable : public Entity
{
    public:
        Mplstunnelresourcetable();
        ~Mplstunnelresourcetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Mplstunnelresourceentry; //type: MplsTeStdMib::Mplstunnelresourcetable::Mplstunnelresourceentry

        std::vector<std::shared_ptr<MPLS_TE_STD_MIB::MplsTeStdMib::Mplstunnelresourcetable::Mplstunnelresourceentry> > mplstunnelresourceentry;
        
}; // MplsTeStdMib::Mplstunnelresourcetable


class MplsTeStdMib::Mplstunnelresourcetable::Mplstunnelresourceentry : public Entity
{
    public:
        Mplstunnelresourceentry();
        ~Mplstunnelresourceentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mplstunnelresourceindex; //type: uint32
        YLeaf mplstunnelresourcemaxrate; //type: uint32
        YLeaf mplstunnelresourcemeanrate; //type: uint32
        YLeaf mplstunnelresourcemaxburstsize; //type: uint32
        YLeaf mplstunnelresourcemeanburstsize; //type: uint32
        YLeaf mplstunnelresourceexburstsize; //type: uint32
        YLeaf mplstunnelresourcefrequency; //type: MplstunnelresourcefrequencyEnum
        YLeaf mplstunnelresourceweight; //type: uint32
        YLeaf mplstunnelresourcerowstatus; //type: RowstatusEnum
        YLeaf mplstunnelresourcestoragetype; //type: StoragetypeEnum
        class MplstunnelresourcefrequencyEnum;

}; // MplsTeStdMib::Mplstunnelresourcetable::Mplstunnelresourceentry


class MplsTeStdMib::Mplstunnelarhoptable : public Entity
{
    public:
        Mplstunnelarhoptable();
        ~Mplstunnelarhoptable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Mplstunnelarhopentry; //type: MplsTeStdMib::Mplstunnelarhoptable::Mplstunnelarhopentry

        std::vector<std::shared_ptr<MPLS_TE_STD_MIB::MplsTeStdMib::Mplstunnelarhoptable::Mplstunnelarhopentry> > mplstunnelarhopentry;
        
}; // MplsTeStdMib::Mplstunnelarhoptable


class MplsTeStdMib::Mplstunnelarhoptable::Mplstunnelarhopentry : public Entity
{
    public:
        Mplstunnelarhopentry();
        ~Mplstunnelarhopentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mplstunnelarhoplistindex; //type: uint32
        YLeaf mplstunnelarhopindex; //type: uint32
        YLeaf mplstunnelarhopaddrtype; //type: TehopaddresstypeEnum
        YLeaf mplstunnelarhopipaddr; //type: binary
        YLeaf mplstunnelarhopaddrunnum; //type: binary
        YLeaf mplstunnelarhoplspid; //type: binary

}; // MplsTeStdMib::Mplstunnelarhoptable::Mplstunnelarhopentry


class MplsTeStdMib::Mplstunnelchoptable : public Entity
{
    public:
        Mplstunnelchoptable();
        ~Mplstunnelchoptable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Mplstunnelchopentry; //type: MplsTeStdMib::Mplstunnelchoptable::Mplstunnelchopentry

        std::vector<std::shared_ptr<MPLS_TE_STD_MIB::MplsTeStdMib::Mplstunnelchoptable::Mplstunnelchopentry> > mplstunnelchopentry;
        
}; // MplsTeStdMib::Mplstunnelchoptable


class MplsTeStdMib::Mplstunnelchoptable::Mplstunnelchopentry : public Entity
{
    public:
        Mplstunnelchopentry();
        ~Mplstunnelchopentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mplstunnelchoplistindex; //type: uint32
        YLeaf mplstunnelchopindex; //type: uint32
        YLeaf mplstunnelchopaddrtype; //type: TehopaddresstypeEnum
        YLeaf mplstunnelchopipaddr; //type: binary
        YLeaf mplstunnelchopipprefixlen; //type: uint32
        YLeaf mplstunnelchopasnumber; //type: binary
        YLeaf mplstunnelchopaddrunnum; //type: binary
        YLeaf mplstunnelchoplspid; //type: binary
        YLeaf mplstunnelchoptype; //type: MplstunnelchoptypeEnum
        class MplstunnelchoptypeEnum;

}; // MplsTeStdMib::Mplstunnelchoptable::Mplstunnelchopentry


class MplsTeStdMib::Mplstunnelcrldprestable : public Entity
{
    public:
        Mplstunnelcrldprestable();
        ~Mplstunnelcrldprestable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Mplstunnelcrldpresentry; //type: MplsTeStdMib::Mplstunnelcrldprestable::Mplstunnelcrldpresentry

        std::vector<std::shared_ptr<MPLS_TE_STD_MIB::MplsTeStdMib::Mplstunnelcrldprestable::Mplstunnelcrldpresentry> > mplstunnelcrldpresentry;
        
}; // MplsTeStdMib::Mplstunnelcrldprestable


class MplsTeStdMib::Mplstunnelcrldprestable::Mplstunnelcrldpresentry : public Entity
{
    public:
        Mplstunnelcrldpresentry();
        ~Mplstunnelcrldpresentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: uint32 (refers to MPLS_TE_STD_MIB::MplsTeStdMib::Mplstunnelresourcetable::Mplstunnelresourceentry::mplstunnelresourceindex)
        YLeaf mplstunnelresourceindex;
        YLeaf mplstunnelcrldpresmeanburstsize; //type: uint32
        YLeaf mplstunnelcrldpresexburstsize; //type: uint32
        YLeaf mplstunnelcrldpresfrequency; //type: MplstunnelcrldpresfrequencyEnum
        YLeaf mplstunnelcrldpresweight; //type: uint32
        YLeaf mplstunnelcrldpresflags; //type: uint32
        YLeaf mplstunnelcrldpresrowstatus; //type: RowstatusEnum
        YLeaf mplstunnelcrldpresstoragetype; //type: StoragetypeEnum
        class MplstunnelcrldpresfrequencyEnum;

}; // MplsTeStdMib::Mplstunnelcrldprestable::Mplstunnelcrldpresentry

class MplsTeStdMib::Mplstunneltable::Mplstunnelentry::MplstunnelroleEnum : public Enum
{
    public:
        static const Enum::YLeaf head;
        static const Enum::YLeaf transit;
        static const Enum::YLeaf tail;
        static const Enum::YLeaf headTail;

};

class MplsTeStdMib::Mplstunneltable::Mplstunnelentry::MplstunnelsignallingprotoEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf rsvp;
        static const Enum::YLeaf crldp;
        static const Enum::YLeaf other;

};

class MplsTeStdMib::Mplstunneltable::Mplstunnelentry::MplstunneladminstatusEnum : public Enum
{
    public:
        static const Enum::YLeaf up;
        static const Enum::YLeaf down;
        static const Enum::YLeaf testing;

};

class MplsTeStdMib::Mplstunneltable::Mplstunnelentry::MplstunneloperstatusEnum : public Enum
{
    public:
        static const Enum::YLeaf up;
        static const Enum::YLeaf down;
        static const Enum::YLeaf testing;
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf dormant;
        static const Enum::YLeaf notPresent;
        static const Enum::YLeaf lowerLayerDown;

};

class MplsTeStdMib::Mplstunnelhoptable::Mplstunnelhopentry::MplstunnelhoptypeEnum : public Enum
{
    public:
        static const Enum::YLeaf strict;
        static const Enum::YLeaf loose;

};

class MplsTeStdMib::Mplstunnelhoptable::Mplstunnelhopentry::MplstunnelhopentrypathcompEnum : public Enum
{
    public:
        static const Enum::YLeaf dynamic;
        static const Enum::YLeaf explicit_;

};

class MplsTeStdMib::Mplstunnelresourcetable::Mplstunnelresourceentry::MplstunnelresourcefrequencyEnum : public Enum
{
    public:
        static const Enum::YLeaf unspecified;
        static const Enum::YLeaf frequent;
        static const Enum::YLeaf veryFrequent;

};

class MplsTeStdMib::Mplstunnelchoptable::Mplstunnelchopentry::MplstunnelchoptypeEnum : public Enum
{
    public:
        static const Enum::YLeaf strict;
        static const Enum::YLeaf loose;

};

class MplsTeStdMib::Mplstunnelcrldprestable::Mplstunnelcrldpresentry::MplstunnelcrldpresfrequencyEnum : public Enum
{
    public:
        static const Enum::YLeaf unspecified;
        static const Enum::YLeaf frequent;
        static const Enum::YLeaf veryFrequent;

};


}
}

#endif /* _MPLS_TE_STD_MIB_ */

