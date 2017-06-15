#ifndef _CISCO_IF_EXTENSION_MIB_
#define _CISCO_IF_EXTENSION_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace CISCO_IF_EXTENSION_MIB {

class CiscoIfExtensionMib : public Entity
{
    public:
        CiscoIfExtensionMib();
        ~CiscoIfExtensionMib();

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

        class Ciscoifextsystemconfig; //type: CiscoIfExtensionMib::Ciscoifextsystemconfig
        class Cieifpacketstatstable; //type: CiscoIfExtensionMib::Cieifpacketstatstable
        class Cieifinterfacetable; //type: CiscoIfExtensionMib::Cieifinterfacetable
        class Cieifstatuslisttable; //type: CiscoIfExtensionMib::Cieifstatuslisttable
        class Cieifvlstatstable; //type: CiscoIfExtensionMib::Cieifvlstatstable
        class Cieifindexpersistencetable; //type: CiscoIfExtensionMib::Cieifindexpersistencetable
        class Cieifdot1Qcustomethertypetable; //type: CiscoIfExtensionMib::Cieifdot1Qcustomethertypetable
        class Cieifutiltable; //type: CiscoIfExtensionMib::Cieifutiltable
        class Cieifdot1Dbasemappingtable; //type: CiscoIfExtensionMib::Cieifdot1Dbasemappingtable
        class Cieifnamemappingtable; //type: CiscoIfExtensionMib::Cieifnamemappingtable

        std::shared_ptr<CISCO_IF_EXTENSION_MIB::CiscoIfExtensionMib::Cieifdot1Dbasemappingtable> cieifdot1dbasemappingtable_;
        std::shared_ptr<CISCO_IF_EXTENSION_MIB::CiscoIfExtensionMib::Cieifdot1Qcustomethertypetable> cieifdot1qcustomethertypetable_;
        std::shared_ptr<CISCO_IF_EXTENSION_MIB::CiscoIfExtensionMib::Cieifindexpersistencetable> cieifindexpersistencetable_;
        std::shared_ptr<CISCO_IF_EXTENSION_MIB::CiscoIfExtensionMib::Cieifinterfacetable> cieifinterfacetable_;
        std::shared_ptr<CISCO_IF_EXTENSION_MIB::CiscoIfExtensionMib::Cieifnamemappingtable> cieifnamemappingtable_;
        std::shared_ptr<CISCO_IF_EXTENSION_MIB::CiscoIfExtensionMib::Cieifpacketstatstable> cieifpacketstatstable_;
        std::shared_ptr<CISCO_IF_EXTENSION_MIB::CiscoIfExtensionMib::Cieifstatuslisttable> cieifstatuslisttable_;
        std::shared_ptr<CISCO_IF_EXTENSION_MIB::CiscoIfExtensionMib::Cieifutiltable> cieifutiltable_;
        std::shared_ptr<CISCO_IF_EXTENSION_MIB::CiscoIfExtensionMib::Cieifvlstatstable> cieifvlstatstable_;
        std::shared_ptr<CISCO_IF_EXTENSION_MIB::CiscoIfExtensionMib::Ciscoifextsystemconfig> ciscoifextsystemconfig_;
        
}; // CiscoIfExtensionMib


class CiscoIfExtensionMib::Ciscoifextsystemconfig : public Entity
{
    public:
        Ciscoifextsystemconfig();
        ~Ciscoifextsystemconfig();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ciesystemmtu; //type: int32
        YLeaf cielinkupdownenable; //type: Cielinkupdownenable
        YLeaf ciestandardlinkupdownvarbinds; //type: CiestandardlinkupdownvarbindsEnum
        YLeaf cieifindexpersistence; //type: boolean
        YLeaf ciedelayedlinkupdownnotifenable; //type: boolean
        YLeaf ciedelayedlinkupdownnotifdelay; //type: uint32
        YLeaf cieifindexglobalpersistence; //type: IfindexpersistencestateEnum
        YLeaf cielinkupdownconfig; //type: Cielinkupdownconfig
        class CiestandardlinkupdownvarbindsEnum;

}; // CiscoIfExtensionMib::Ciscoifextsystemconfig


class CiscoIfExtensionMib::Cieifpacketstatstable : public Entity
{
    public:
        Cieifpacketstatstable();
        ~Cieifpacketstatstable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cieifpacketstatsentry; //type: CiscoIfExtensionMib::Cieifpacketstatstable::Cieifpacketstatsentry

        std::vector<std::shared_ptr<CISCO_IF_EXTENSION_MIB::CiscoIfExtensionMib::Cieifpacketstatstable::Cieifpacketstatsentry> > cieifpacketstatsentry_;
        
}; // CiscoIfExtensionMib::Cieifpacketstatstable


class CiscoIfExtensionMib::Cieifpacketstatstable::Cieifpacketstatsentry : public Entity
{
    public:
        Cieifpacketstatsentry();
        ~Cieifpacketstatsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf cieiflastintime; //type: uint32
        YLeaf cieiflastouttime; //type: uint32
        YLeaf cieiflastouthangtime; //type: uint32
        YLeaf cieifinruntserrs; //type: uint32
        YLeaf cieifingiantserrs; //type: uint32
        YLeaf cieifinframingerrs; //type: uint32
        YLeaf cieifinoverrunerrs; //type: uint32
        YLeaf cieifinignored; //type: uint32
        YLeaf cieifinaborterrs; //type: uint32
        YLeaf cieifinputqueuedrops; //type: uint32
        YLeaf cieifoutputqueuedrops; //type: uint32
        YLeaf cieifpacketdiscontinuitytime; //type: uint32

}; // CiscoIfExtensionMib::Cieifpacketstatstable::Cieifpacketstatsentry


class CiscoIfExtensionMib::Cieifinterfacetable : public Entity
{
    public:
        Cieifinterfacetable();
        ~Cieifinterfacetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cieifinterfaceentry; //type: CiscoIfExtensionMib::Cieifinterfacetable::Cieifinterfaceentry

        std::vector<std::shared_ptr<CISCO_IF_EXTENSION_MIB::CiscoIfExtensionMib::Cieifinterfacetable::Cieifinterfaceentry> > cieifinterfaceentry_;
        
}; // CiscoIfExtensionMib::Cieifinterfacetable


class CiscoIfExtensionMib::Cieifinterfacetable::Cieifinterfaceentry : public Entity
{
    public:
        Cieifinterfaceentry();
        ~Cieifinterfaceentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf cieifresetcount; //type: uint32
        YLeaf cieifkeepaliveenabled; //type: boolean
        YLeaf cieifstatechangereason; //type: string
        YLeaf cieifcarriertransitioncount; //type: uint32
        YLeaf cieifinterfacediscontinuitytime; //type: uint32
        YLeaf cieifdhcpmode; //type: boolean
        YLeaf cieifmtu; //type: int32
        YLeaf cieifcontextname; //type: binary
        YLeaf cieifoperstatuscause; //type: IfoperstatusreasonEnum
        YLeaf cieifoperstatuscausedescr; //type: string
        YLeaf cieifspeedreceive; //type: uint32
        YLeaf cieifhighspeedreceive; //type: uint32
        YLeaf cieifowner; //type: string
        YLeaf cieifsharedconfig; //type: CieifsharedconfigEnum
        YLeaf cieifspeedgroupconfig; //type: CieifspeedgroupconfigEnum
        YLeaf cieiftransceiverfrequencyconfig; //type: CieiftransceiverfrequencyconfigEnum
        YLeaf cieiffillpatternconfig; //type: CieiffillpatternconfigEnum
        YLeaf cieifignorebiterrorsconfig; //type: boolean
        YLeaf cieifignoreinterruptthresholdconfig; //type: boolean
        class CieifsharedconfigEnum;
        class CieifspeedgroupconfigEnum;
        class CieiftransceiverfrequencyconfigEnum;
        class CieiffillpatternconfigEnum;

}; // CiscoIfExtensionMib::Cieifinterfacetable::Cieifinterfaceentry


class CiscoIfExtensionMib::Cieifstatuslisttable : public Entity
{
    public:
        Cieifstatuslisttable();
        ~Cieifstatuslisttable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cieifstatuslistentry; //type: CiscoIfExtensionMib::Cieifstatuslisttable::Cieifstatuslistentry

        std::vector<std::shared_ptr<CISCO_IF_EXTENSION_MIB::CiscoIfExtensionMib::Cieifstatuslisttable::Cieifstatuslistentry> > cieifstatuslistentry_;
        
}; // CiscoIfExtensionMib::Cieifstatuslisttable


class CiscoIfExtensionMib::Cieifstatuslisttable::Cieifstatuslistentry : public Entity
{
    public:
        Cieifstatuslistentry();
        ~Cieifstatuslistentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to ENTITY_MIB::EntityMib::Entphysicaltable::Entphysicalentry::entphysicalindex)
        YLeaf entphysicalindex;
        YLeaf cieifstatuslistindex; //type: uint32
        YLeaf cieinterfacesindex; //type: binary
        YLeaf cieinterfacesopermode; //type: binary
        YLeaf cieinterfacesopercause; //type: binary
        YLeaf cieinterfaceownershipbitmap; //type: binary

}; // CiscoIfExtensionMib::Cieifstatuslisttable::Cieifstatuslistentry


class CiscoIfExtensionMib::Cieifvlstatstable : public Entity
{
    public:
        Cieifvlstatstable();
        ~Cieifvlstatstable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cieifvlstatsentry; //type: CiscoIfExtensionMib::Cieifvlstatstable::Cieifvlstatsentry

        std::vector<std::shared_ptr<CISCO_IF_EXTENSION_MIB::CiscoIfExtensionMib::Cieifvlstatstable::Cieifvlstatsentry> > cieifvlstatsentry_;
        
}; // CiscoIfExtensionMib::Cieifvlstatstable


class CiscoIfExtensionMib::Cieifvlstatstable::Cieifvlstatsentry : public Entity
{
    public:
        Cieifvlstatsentry();
        ~Cieifvlstatsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf cieifnodropvlinpkts; //type: uint64
        YLeaf cieifnodropvlinoctets; //type: uint64
        YLeaf cieifnodropvloutpkts; //type: uint64
        YLeaf cieifnodropvloutoctets; //type: uint64
        YLeaf cieifdropvlinpkts; //type: uint64
        YLeaf cieifdropvlinoctets; //type: uint64
        YLeaf cieifdropvloutpkts; //type: uint64
        YLeaf cieifdropvloutoctets; //type: uint64

}; // CiscoIfExtensionMib::Cieifvlstatstable::Cieifvlstatsentry


class CiscoIfExtensionMib::Cieifindexpersistencetable : public Entity
{
    public:
        Cieifindexpersistencetable();
        ~Cieifindexpersistencetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cieifindexpersistenceentry; //type: CiscoIfExtensionMib::Cieifindexpersistencetable::Cieifindexpersistenceentry

        std::vector<std::shared_ptr<CISCO_IF_EXTENSION_MIB::CiscoIfExtensionMib::Cieifindexpersistencetable::Cieifindexpersistenceentry> > cieifindexpersistenceentry_;
        
}; // CiscoIfExtensionMib::Cieifindexpersistencetable


class CiscoIfExtensionMib::Cieifindexpersistencetable::Cieifindexpersistenceentry : public Entity
{
    public:
        Cieifindexpersistenceentry();
        ~Cieifindexpersistenceentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf cieifindexpersistenceenabled; //type: boolean
        YLeaf cieifindexpersistencecontrol; //type: IfindexpersistencestateEnum

}; // CiscoIfExtensionMib::Cieifindexpersistencetable::Cieifindexpersistenceentry


class CiscoIfExtensionMib::Cieifdot1Qcustomethertypetable : public Entity
{
    public:
        Cieifdot1Qcustomethertypetable();
        ~Cieifdot1Qcustomethertypetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cieifdot1Qcustomethertypeentry; //type: CiscoIfExtensionMib::Cieifdot1Qcustomethertypetable::Cieifdot1Qcustomethertypeentry

        std::vector<std::shared_ptr<CISCO_IF_EXTENSION_MIB::CiscoIfExtensionMib::Cieifdot1Qcustomethertypetable::Cieifdot1Qcustomethertypeentry> > cieifdot1qcustomethertypeentry_;
        
}; // CiscoIfExtensionMib::Cieifdot1Qcustomethertypetable


class CiscoIfExtensionMib::Cieifdot1Qcustomethertypetable::Cieifdot1Qcustomethertypeentry : public Entity
{
    public:
        Cieifdot1Qcustomethertypeentry();
        ~Cieifdot1Qcustomethertypeentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf cieifdot1qcustomadminethertype; //type: int32
        YLeaf cieifdot1qcustomoperethertype; //type: int32

}; // CiscoIfExtensionMib::Cieifdot1Qcustomethertypetable::Cieifdot1Qcustomethertypeentry


class CiscoIfExtensionMib::Cieifutiltable : public Entity
{
    public:
        Cieifutiltable();
        ~Cieifutiltable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cieifutilentry; //type: CiscoIfExtensionMib::Cieifutiltable::Cieifutilentry

        std::vector<std::shared_ptr<CISCO_IF_EXTENSION_MIB::CiscoIfExtensionMib::Cieifutiltable::Cieifutilentry> > cieifutilentry_;
        
}; // CiscoIfExtensionMib::Cieifutiltable


class CiscoIfExtensionMib::Cieifutiltable::Cieifutilentry : public Entity
{
    public:
        Cieifutilentry();
        ~Cieifutilentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf cieifinpktrate; //type: uint64
        YLeaf cieifinoctetrate; //type: uint64
        YLeaf cieifoutpktrate; //type: uint64
        YLeaf cieifoutoctetrate; //type: uint64
        YLeaf cieifinterval; //type: uint32

}; // CiscoIfExtensionMib::Cieifutiltable::Cieifutilentry


class CiscoIfExtensionMib::Cieifdot1Dbasemappingtable : public Entity
{
    public:
        Cieifdot1Dbasemappingtable();
        ~Cieifdot1Dbasemappingtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cieifdot1Dbasemappingentry; //type: CiscoIfExtensionMib::Cieifdot1Dbasemappingtable::Cieifdot1Dbasemappingentry

        std::vector<std::shared_ptr<CISCO_IF_EXTENSION_MIB::CiscoIfExtensionMib::Cieifdot1Dbasemappingtable::Cieifdot1Dbasemappingentry> > cieifdot1dbasemappingentry_;
        
}; // CiscoIfExtensionMib::Cieifdot1Dbasemappingtable


class CiscoIfExtensionMib::Cieifdot1Dbasemappingtable::Cieifdot1Dbasemappingentry : public Entity
{
    public:
        Cieifdot1Dbasemappingentry();
        ~Cieifdot1Dbasemappingentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf cieifdot1dbasemappingport; //type: int32

}; // CiscoIfExtensionMib::Cieifdot1Dbasemappingtable::Cieifdot1Dbasemappingentry


class CiscoIfExtensionMib::Cieifnamemappingtable : public Entity
{
    public:
        Cieifnamemappingtable();
        ~Cieifnamemappingtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cieifnamemappingentry; //type: CiscoIfExtensionMib::Cieifnamemappingtable::Cieifnamemappingentry

        std::vector<std::shared_ptr<CISCO_IF_EXTENSION_MIB::CiscoIfExtensionMib::Cieifnamemappingtable::Cieifnamemappingentry> > cieifnamemappingentry_;
        
}; // CiscoIfExtensionMib::Cieifnamemappingtable


class CiscoIfExtensionMib::Cieifnamemappingtable::Cieifnamemappingentry : public Entity
{
    public:
        Cieifnamemappingentry();
        ~Cieifnamemappingentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cieifname; //type: string
        YLeaf cieifindex; //type: int32

}; // CiscoIfExtensionMib::Cieifnamemappingtable::Cieifnamemappingentry

class IfindexpersistencestateEnum : public Enum
{
    public:
        static const Enum::YLeaf disable;
        static const Enum::YLeaf enable;
        static const Enum::YLeaf global;

};

class CiscoIfExtensionMib::Ciscoifextsystemconfig::CiestandardlinkupdownvarbindsEnum : public Enum
{
    public:
        static const Enum::YLeaf standard;
        static const Enum::YLeaf additional;
        static const Enum::YLeaf other;

};

class CiscoIfExtensionMib::Cieifinterfacetable::Cieifinterfaceentry::CieifsharedconfigEnum : public Enum
{
    public:
        static const Enum::YLeaf notApplicable;
        static const Enum::YLeaf ownerDedicated;
        static const Enum::YLeaf ownerShared;
        static const Enum::YLeaf sharedOnly;

};

class CiscoIfExtensionMib::Cieifinterfacetable::Cieifinterfaceentry::CieifspeedgroupconfigEnum : public Enum
{
    public:
        static const Enum::YLeaf notApplicable;
        static const Enum::YLeaf tenG;
        static const Enum::YLeaf oneTwoFourEightG;
        static const Enum::YLeaf twoFourEightSixteenG;

};

class CiscoIfExtensionMib::Cieifinterfacetable::Cieifinterfaceentry::CieiftransceiverfrequencyconfigEnum : public Enum
{
    public:
        static const Enum::YLeaf notApplicable;
        static const Enum::YLeaf fibreChannel;
        static const Enum::YLeaf ethernet;

};

class CiscoIfExtensionMib::Cieifinterfacetable::Cieifinterfaceentry::CieiffillpatternconfigEnum : public Enum
{
    public:
        static const Enum::YLeaf arbff8G;
        static const Enum::YLeaf idle8G;

};


}
}

#endif /* _CISCO_IF_EXTENSION_MIB_ */

