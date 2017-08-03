#ifndef _CISCO_IF_EXTENSION_MIB_
#define _CISCO_IF_EXTENSION_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_IF_EXTENSION_MIB {

class CiscoIfExtensionMib : public ydk::Entity
{
    public:
        CiscoIfExtensionMib();
        ~CiscoIfExtensionMib();

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

        std::shared_ptr<CISCO_IF_EXTENSION_MIB::CiscoIfExtensionMib::Cieifdot1Dbasemappingtable> cieifdot1dbasemappingtable;
        std::shared_ptr<CISCO_IF_EXTENSION_MIB::CiscoIfExtensionMib::Cieifdot1Qcustomethertypetable> cieifdot1qcustomethertypetable;
        std::shared_ptr<CISCO_IF_EXTENSION_MIB::CiscoIfExtensionMib::Cieifindexpersistencetable> cieifindexpersistencetable;
        std::shared_ptr<CISCO_IF_EXTENSION_MIB::CiscoIfExtensionMib::Cieifinterfacetable> cieifinterfacetable;
        std::shared_ptr<CISCO_IF_EXTENSION_MIB::CiscoIfExtensionMib::Cieifnamemappingtable> cieifnamemappingtable;
        std::shared_ptr<CISCO_IF_EXTENSION_MIB::CiscoIfExtensionMib::Cieifpacketstatstable> cieifpacketstatstable;
        std::shared_ptr<CISCO_IF_EXTENSION_MIB::CiscoIfExtensionMib::Cieifstatuslisttable> cieifstatuslisttable;
        std::shared_ptr<CISCO_IF_EXTENSION_MIB::CiscoIfExtensionMib::Cieifutiltable> cieifutiltable;
        std::shared_ptr<CISCO_IF_EXTENSION_MIB::CiscoIfExtensionMib::Cieifvlstatstable> cieifvlstatstable;
        std::shared_ptr<CISCO_IF_EXTENSION_MIB::CiscoIfExtensionMib::Ciscoifextsystemconfig> ciscoifextsystemconfig;
        
}; // CiscoIfExtensionMib


class CiscoIfExtensionMib::Ciscoifextsystemconfig : public ydk::Entity
{
    public:
        Ciscoifextsystemconfig();
        ~Ciscoifextsystemconfig();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ciesystemmtu; //type: int32
        ydk::YLeaf cielinkupdownenable; //type: Cielinkupdownenable
        ydk::YLeaf ciestandardlinkupdownvarbinds; //type: Ciestandardlinkupdownvarbinds
        ydk::YLeaf cieifindexpersistence; //type: boolean
        ydk::YLeaf ciedelayedlinkupdownnotifenable; //type: boolean
        ydk::YLeaf ciedelayedlinkupdownnotifdelay; //type: uint32
        ydk::YLeaf cieifindexglobalpersistence; //type: Ifindexpersistencestate
        ydk::YLeaf cielinkupdownconfig; //type: Cielinkupdownconfig
        class Ciestandardlinkupdownvarbinds;

}; // CiscoIfExtensionMib::Ciscoifextsystemconfig


class CiscoIfExtensionMib::Cieifpacketstatstable : public ydk::Entity
{
    public:
        Cieifpacketstatstable();
        ~Cieifpacketstatstable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cieifpacketstatsentry; //type: CiscoIfExtensionMib::Cieifpacketstatstable::Cieifpacketstatsentry

        std::vector<std::shared_ptr<CISCO_IF_EXTENSION_MIB::CiscoIfExtensionMib::Cieifpacketstatstable::Cieifpacketstatsentry> > cieifpacketstatsentry;
        
}; // CiscoIfExtensionMib::Cieifpacketstatstable


class CiscoIfExtensionMib::Cieifpacketstatstable::Cieifpacketstatsentry : public ydk::Entity
{
    public:
        Cieifpacketstatsentry();
        ~Cieifpacketstatsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf cieiflastintime; //type: uint32
        ydk::YLeaf cieiflastouttime; //type: uint32
        ydk::YLeaf cieiflastouthangtime; //type: uint32
        ydk::YLeaf cieifinruntserrs; //type: uint32
        ydk::YLeaf cieifingiantserrs; //type: uint32
        ydk::YLeaf cieifinframingerrs; //type: uint32
        ydk::YLeaf cieifinoverrunerrs; //type: uint32
        ydk::YLeaf cieifinignored; //type: uint32
        ydk::YLeaf cieifinaborterrs; //type: uint32
        ydk::YLeaf cieifinputqueuedrops; //type: uint32
        ydk::YLeaf cieifoutputqueuedrops; //type: uint32
        ydk::YLeaf cieifpacketdiscontinuitytime; //type: uint32

}; // CiscoIfExtensionMib::Cieifpacketstatstable::Cieifpacketstatsentry


class CiscoIfExtensionMib::Cieifinterfacetable : public ydk::Entity
{
    public:
        Cieifinterfacetable();
        ~Cieifinterfacetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cieifinterfaceentry; //type: CiscoIfExtensionMib::Cieifinterfacetable::Cieifinterfaceentry

        std::vector<std::shared_ptr<CISCO_IF_EXTENSION_MIB::CiscoIfExtensionMib::Cieifinterfacetable::Cieifinterfaceentry> > cieifinterfaceentry;
        
}; // CiscoIfExtensionMib::Cieifinterfacetable


class CiscoIfExtensionMib::Cieifinterfacetable::Cieifinterfaceentry : public ydk::Entity
{
    public:
        Cieifinterfaceentry();
        ~Cieifinterfaceentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf cieifresetcount; //type: uint32
        ydk::YLeaf cieifkeepaliveenabled; //type: boolean
        ydk::YLeaf cieifstatechangereason; //type: string
        ydk::YLeaf cieifcarriertransitioncount; //type: uint32
        ydk::YLeaf cieifinterfacediscontinuitytime; //type: uint32
        ydk::YLeaf cieifdhcpmode; //type: boolean
        ydk::YLeaf cieifmtu; //type: int32
        ydk::YLeaf cieifcontextname; //type: binary
        ydk::YLeaf cieifoperstatuscause; //type: Ifoperstatusreason
        ydk::YLeaf cieifoperstatuscausedescr; //type: string
        ydk::YLeaf cieifspeedreceive; //type: uint32
        ydk::YLeaf cieifhighspeedreceive; //type: uint32
        ydk::YLeaf cieifowner; //type: string
        ydk::YLeaf cieifsharedconfig; //type: Cieifsharedconfig
        ydk::YLeaf cieifspeedgroupconfig; //type: Cieifspeedgroupconfig
        ydk::YLeaf cieiftransceiverfrequencyconfig; //type: Cieiftransceiverfrequencyconfig
        ydk::YLeaf cieiffillpatternconfig; //type: Cieiffillpatternconfig
        ydk::YLeaf cieifignorebiterrorsconfig; //type: boolean
        ydk::YLeaf cieifignoreinterruptthresholdconfig; //type: boolean
        class Cieifsharedconfig;
        class Cieifspeedgroupconfig;
        class Cieiftransceiverfrequencyconfig;
        class Cieiffillpatternconfig;

}; // CiscoIfExtensionMib::Cieifinterfacetable::Cieifinterfaceentry


class CiscoIfExtensionMib::Cieifstatuslisttable : public ydk::Entity
{
    public:
        Cieifstatuslisttable();
        ~Cieifstatuslisttable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cieifstatuslistentry; //type: CiscoIfExtensionMib::Cieifstatuslisttable::Cieifstatuslistentry

        std::vector<std::shared_ptr<CISCO_IF_EXTENSION_MIB::CiscoIfExtensionMib::Cieifstatuslisttable::Cieifstatuslistentry> > cieifstatuslistentry;
        
}; // CiscoIfExtensionMib::Cieifstatuslisttable


class CiscoIfExtensionMib::Cieifstatuslisttable::Cieifstatuslistentry : public ydk::Entity
{
    public:
        Cieifstatuslistentry();
        ~Cieifstatuslistentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to ENTITY_MIB::EntityMib::Entphysicaltable::Entphysicalentry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf cieifstatuslistindex; //type: uint32
        ydk::YLeaf cieinterfacesindex; //type: binary
        ydk::YLeaf cieinterfacesopermode; //type: binary
        ydk::YLeaf cieinterfacesopercause; //type: binary
        ydk::YLeaf cieinterfaceownershipbitmap; //type: binary

}; // CiscoIfExtensionMib::Cieifstatuslisttable::Cieifstatuslistentry


class CiscoIfExtensionMib::Cieifvlstatstable : public ydk::Entity
{
    public:
        Cieifvlstatstable();
        ~Cieifvlstatstable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cieifvlstatsentry; //type: CiscoIfExtensionMib::Cieifvlstatstable::Cieifvlstatsentry

        std::vector<std::shared_ptr<CISCO_IF_EXTENSION_MIB::CiscoIfExtensionMib::Cieifvlstatstable::Cieifvlstatsentry> > cieifvlstatsentry;
        
}; // CiscoIfExtensionMib::Cieifvlstatstable


class CiscoIfExtensionMib::Cieifvlstatstable::Cieifvlstatsentry : public ydk::Entity
{
    public:
        Cieifvlstatsentry();
        ~Cieifvlstatsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf cieifnodropvlinpkts; //type: uint64
        ydk::YLeaf cieifnodropvlinoctets; //type: uint64
        ydk::YLeaf cieifnodropvloutpkts; //type: uint64
        ydk::YLeaf cieifnodropvloutoctets; //type: uint64
        ydk::YLeaf cieifdropvlinpkts; //type: uint64
        ydk::YLeaf cieifdropvlinoctets; //type: uint64
        ydk::YLeaf cieifdropvloutpkts; //type: uint64
        ydk::YLeaf cieifdropvloutoctets; //type: uint64

}; // CiscoIfExtensionMib::Cieifvlstatstable::Cieifvlstatsentry


class CiscoIfExtensionMib::Cieifindexpersistencetable : public ydk::Entity
{
    public:
        Cieifindexpersistencetable();
        ~Cieifindexpersistencetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cieifindexpersistenceentry; //type: CiscoIfExtensionMib::Cieifindexpersistencetable::Cieifindexpersistenceentry

        std::vector<std::shared_ptr<CISCO_IF_EXTENSION_MIB::CiscoIfExtensionMib::Cieifindexpersistencetable::Cieifindexpersistenceentry> > cieifindexpersistenceentry;
        
}; // CiscoIfExtensionMib::Cieifindexpersistencetable


class CiscoIfExtensionMib::Cieifindexpersistencetable::Cieifindexpersistenceentry : public ydk::Entity
{
    public:
        Cieifindexpersistenceentry();
        ~Cieifindexpersistenceentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf cieifindexpersistenceenabled; //type: boolean
        ydk::YLeaf cieifindexpersistencecontrol; //type: Ifindexpersistencestate

}; // CiscoIfExtensionMib::Cieifindexpersistencetable::Cieifindexpersistenceentry


class CiscoIfExtensionMib::Cieifdot1Qcustomethertypetable : public ydk::Entity
{
    public:
        Cieifdot1Qcustomethertypetable();
        ~Cieifdot1Qcustomethertypetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cieifdot1Qcustomethertypeentry; //type: CiscoIfExtensionMib::Cieifdot1Qcustomethertypetable::Cieifdot1Qcustomethertypeentry

        std::vector<std::shared_ptr<CISCO_IF_EXTENSION_MIB::CiscoIfExtensionMib::Cieifdot1Qcustomethertypetable::Cieifdot1Qcustomethertypeentry> > cieifdot1qcustomethertypeentry;
        
}; // CiscoIfExtensionMib::Cieifdot1Qcustomethertypetable


class CiscoIfExtensionMib::Cieifdot1Qcustomethertypetable::Cieifdot1Qcustomethertypeentry : public ydk::Entity
{
    public:
        Cieifdot1Qcustomethertypeentry();
        ~Cieifdot1Qcustomethertypeentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf cieifdot1qcustomadminethertype; //type: int32
        ydk::YLeaf cieifdot1qcustomoperethertype; //type: int32

}; // CiscoIfExtensionMib::Cieifdot1Qcustomethertypetable::Cieifdot1Qcustomethertypeentry


class CiscoIfExtensionMib::Cieifutiltable : public ydk::Entity
{
    public:
        Cieifutiltable();
        ~Cieifutiltable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cieifutilentry; //type: CiscoIfExtensionMib::Cieifutiltable::Cieifutilentry

        std::vector<std::shared_ptr<CISCO_IF_EXTENSION_MIB::CiscoIfExtensionMib::Cieifutiltable::Cieifutilentry> > cieifutilentry;
        
}; // CiscoIfExtensionMib::Cieifutiltable


class CiscoIfExtensionMib::Cieifutiltable::Cieifutilentry : public ydk::Entity
{
    public:
        Cieifutilentry();
        ~Cieifutilentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf cieifinpktrate; //type: uint64
        ydk::YLeaf cieifinoctetrate; //type: uint64
        ydk::YLeaf cieifoutpktrate; //type: uint64
        ydk::YLeaf cieifoutoctetrate; //type: uint64
        ydk::YLeaf cieifinterval; //type: uint32

}; // CiscoIfExtensionMib::Cieifutiltable::Cieifutilentry


class CiscoIfExtensionMib::Cieifdot1Dbasemappingtable : public ydk::Entity
{
    public:
        Cieifdot1Dbasemappingtable();
        ~Cieifdot1Dbasemappingtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cieifdot1Dbasemappingentry; //type: CiscoIfExtensionMib::Cieifdot1Dbasemappingtable::Cieifdot1Dbasemappingentry

        std::vector<std::shared_ptr<CISCO_IF_EXTENSION_MIB::CiscoIfExtensionMib::Cieifdot1Dbasemappingtable::Cieifdot1Dbasemappingentry> > cieifdot1dbasemappingentry;
        
}; // CiscoIfExtensionMib::Cieifdot1Dbasemappingtable


class CiscoIfExtensionMib::Cieifdot1Dbasemappingtable::Cieifdot1Dbasemappingentry : public ydk::Entity
{
    public:
        Cieifdot1Dbasemappingentry();
        ~Cieifdot1Dbasemappingentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf cieifdot1dbasemappingport; //type: int32

}; // CiscoIfExtensionMib::Cieifdot1Dbasemappingtable::Cieifdot1Dbasemappingentry


class CiscoIfExtensionMib::Cieifnamemappingtable : public ydk::Entity
{
    public:
        Cieifnamemappingtable();
        ~Cieifnamemappingtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cieifnamemappingentry; //type: CiscoIfExtensionMib::Cieifnamemappingtable::Cieifnamemappingentry

        std::vector<std::shared_ptr<CISCO_IF_EXTENSION_MIB::CiscoIfExtensionMib::Cieifnamemappingtable::Cieifnamemappingentry> > cieifnamemappingentry;
        
}; // CiscoIfExtensionMib::Cieifnamemappingtable


class CiscoIfExtensionMib::Cieifnamemappingtable::Cieifnamemappingentry : public ydk::Entity
{
    public:
        Cieifnamemappingentry();
        ~Cieifnamemappingentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cieifname; //type: string
        ydk::YLeaf cieifindex; //type: int32

}; // CiscoIfExtensionMib::Cieifnamemappingtable::Cieifnamemappingentry

class Ifindexpersistencestate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf global;

};

class CiscoIfExtensionMib::Ciscoifextsystemconfig::Ciestandardlinkupdownvarbinds : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf standard;
        static const ydk::Enum::YLeaf additional;
        static const ydk::Enum::YLeaf other;

};

class CiscoIfExtensionMib::Cieifinterfacetable::Cieifinterfaceentry::Cieifsharedconfig : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf notApplicable;
        static const ydk::Enum::YLeaf ownerDedicated;
        static const ydk::Enum::YLeaf ownerShared;
        static const ydk::Enum::YLeaf sharedOnly;

};

class CiscoIfExtensionMib::Cieifinterfacetable::Cieifinterfaceentry::Cieifspeedgroupconfig : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf notApplicable;
        static const ydk::Enum::YLeaf tenG;
        static const ydk::Enum::YLeaf oneTwoFourEightG;
        static const ydk::Enum::YLeaf twoFourEightSixteenG;

};

class CiscoIfExtensionMib::Cieifinterfacetable::Cieifinterfaceentry::Cieiftransceiverfrequencyconfig : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf notApplicable;
        static const ydk::Enum::YLeaf fibreChannel;
        static const ydk::Enum::YLeaf ethernet;

};

class CiscoIfExtensionMib::Cieifinterfacetable::Cieifinterfaceentry::Cieiffillpatternconfig : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf arbff8G;
        static const ydk::Enum::YLeaf idle8G;

};


}
}

#endif /* _CISCO_IF_EXTENSION_MIB_ */

