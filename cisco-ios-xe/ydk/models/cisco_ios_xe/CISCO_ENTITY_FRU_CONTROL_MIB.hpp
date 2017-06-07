#ifndef _CISCO_ENTITY_FRU_CONTROL_MIB_
#define _CISCO_ENTITY_FRU_CONTROL_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace CISCO_ENTITY_FRU_CONTROL_MIB {

class CiscoEntityFruControlMib : public Entity
{
    public:
        CiscoEntityFruControlMib();
        ~CiscoEntityFruControlMib();

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

        class Cefcfrupower; //type: CiscoEntityFruControlMib::Cefcfrupower
        class Cefcmibnotificationenables; //type: CiscoEntityFruControlMib::Cefcmibnotificationenables
        class Cefcfrupowersupplygrouptable; //type: CiscoEntityFruControlMib::Cefcfrupowersupplygrouptable
        class Cefcfrupowerstatustable; //type: CiscoEntityFruControlMib::Cefcfrupowerstatustable
        class Cefcfrupowersupplyvaluetable; //type: CiscoEntityFruControlMib::Cefcfrupowersupplyvaluetable
        class Cefcmoduletable; //type: CiscoEntityFruControlMib::Cefcmoduletable
        class Cefcintellimoduletable; //type: CiscoEntityFruControlMib::Cefcintellimoduletable
        class Cefcmodulelocalswitchingtable; //type: CiscoEntityFruControlMib::Cefcmodulelocalswitchingtable
        class Cefcfantraystatustable; //type: CiscoEntityFruControlMib::Cefcfantraystatustable
        class Cefcphysicaltable; //type: CiscoEntityFruControlMib::Cefcphysicaltable
        class Cefcpowersupplyinputtable; //type: CiscoEntityFruControlMib::Cefcpowersupplyinputtable
        class Cefcpowersupplyoutputtable; //type: CiscoEntityFruControlMib::Cefcpowersupplyoutputtable
        class Cefcchassiscoolingtable; //type: CiscoEntityFruControlMib::Cefcchassiscoolingtable
        class Cefcfancoolingtable; //type: CiscoEntityFruControlMib::Cefcfancoolingtable
        class Cefcmodulecoolingtable; //type: CiscoEntityFruControlMib::Cefcmodulecoolingtable
        class Cefcfancoolingcaptable; //type: CiscoEntityFruControlMib::Cefcfancoolingcaptable
        class Cefcconnectorratingtable; //type: CiscoEntityFruControlMib::Cefcconnectorratingtable
        class Cefcmodulepowerconsumptiontable; //type: CiscoEntityFruControlMib::Cefcmodulepowerconsumptiontable

        std::shared_ptr<CISCO_ENTITY_FRU_CONTROL_MIB::CiscoEntityFruControlMib::Cefcchassiscoolingtable> cefcchassiscoolingtable;
        std::shared_ptr<CISCO_ENTITY_FRU_CONTROL_MIB::CiscoEntityFruControlMib::Cefcconnectorratingtable> cefcconnectorratingtable;
        std::shared_ptr<CISCO_ENTITY_FRU_CONTROL_MIB::CiscoEntityFruControlMib::Cefcfancoolingcaptable> cefcfancoolingcaptable;
        std::shared_ptr<CISCO_ENTITY_FRU_CONTROL_MIB::CiscoEntityFruControlMib::Cefcfancoolingtable> cefcfancoolingtable;
        std::shared_ptr<CISCO_ENTITY_FRU_CONTROL_MIB::CiscoEntityFruControlMib::Cefcfantraystatustable> cefcfantraystatustable;
        std::shared_ptr<CISCO_ENTITY_FRU_CONTROL_MIB::CiscoEntityFruControlMib::Cefcfrupower> cefcfrupower;
        std::shared_ptr<CISCO_ENTITY_FRU_CONTROL_MIB::CiscoEntityFruControlMib::Cefcfrupowerstatustable> cefcfrupowerstatustable;
        std::shared_ptr<CISCO_ENTITY_FRU_CONTROL_MIB::CiscoEntityFruControlMib::Cefcfrupowersupplygrouptable> cefcfrupowersupplygrouptable;
        std::shared_ptr<CISCO_ENTITY_FRU_CONTROL_MIB::CiscoEntityFruControlMib::Cefcfrupowersupplyvaluetable> cefcfrupowersupplyvaluetable;
        std::shared_ptr<CISCO_ENTITY_FRU_CONTROL_MIB::CiscoEntityFruControlMib::Cefcintellimoduletable> cefcintellimoduletable;
        std::shared_ptr<CISCO_ENTITY_FRU_CONTROL_MIB::CiscoEntityFruControlMib::Cefcmibnotificationenables> cefcmibnotificationenables;
        std::shared_ptr<CISCO_ENTITY_FRU_CONTROL_MIB::CiscoEntityFruControlMib::Cefcmodulecoolingtable> cefcmodulecoolingtable;
        std::shared_ptr<CISCO_ENTITY_FRU_CONTROL_MIB::CiscoEntityFruControlMib::Cefcmodulelocalswitchingtable> cefcmodulelocalswitchingtable;
        std::shared_ptr<CISCO_ENTITY_FRU_CONTROL_MIB::CiscoEntityFruControlMib::Cefcmodulepowerconsumptiontable> cefcmodulepowerconsumptiontable;
        std::shared_ptr<CISCO_ENTITY_FRU_CONTROL_MIB::CiscoEntityFruControlMib::Cefcmoduletable> cefcmoduletable;
        std::shared_ptr<CISCO_ENTITY_FRU_CONTROL_MIB::CiscoEntityFruControlMib::Cefcphysicaltable> cefcphysicaltable;
        std::shared_ptr<CISCO_ENTITY_FRU_CONTROL_MIB::CiscoEntityFruControlMib::Cefcpowersupplyinputtable> cefcpowersupplyinputtable;
        std::shared_ptr<CISCO_ENTITY_FRU_CONTROL_MIB::CiscoEntityFruControlMib::Cefcpowersupplyoutputtable> cefcpowersupplyoutputtable;
        
}; // CiscoEntityFruControlMib


class CiscoEntityFruControlMib::Cefcfrupower : public Entity
{
    public:
        Cefcfrupower();
        ~Cefcfrupower();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cefcmaxdefaultinlinepower; //type: int32
        YLeaf cefcmaxdefaulthighinlinepower; //type: uint32

}; // CiscoEntityFruControlMib::Cefcfrupower


class CiscoEntityFruControlMib::Cefcmibnotificationenables : public Entity
{
    public:
        Cefcmibnotificationenables();
        ~Cefcmibnotificationenables();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cefcmibenablestatusnotification; //type: boolean
        YLeaf cefcenablepsoutputchangenotif; //type: boolean

}; // CiscoEntityFruControlMib::Cefcmibnotificationenables


class CiscoEntityFruControlMib::Cefcfrupowersupplygrouptable : public Entity
{
    public:
        Cefcfrupowersupplygrouptable();
        ~Cefcfrupowersupplygrouptable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cefcfrupowersupplygroupentry; //type: CiscoEntityFruControlMib::Cefcfrupowersupplygrouptable::Cefcfrupowersupplygroupentry

        std::vector<std::shared_ptr<CISCO_ENTITY_FRU_CONTROL_MIB::CiscoEntityFruControlMib::Cefcfrupowersupplygrouptable::Cefcfrupowersupplygroupentry> > cefcfrupowersupplygroupentry;
        
}; // CiscoEntityFruControlMib::Cefcfrupowersupplygrouptable


class CiscoEntityFruControlMib::Cefcfrupowersupplygrouptable::Cefcfrupowersupplygroupentry : public Entity
{
    public:
        Cefcfrupowersupplygroupentry();
        ~Cefcfrupowersupplygroupentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to ENTITY_MIB::EntityMib::Entphysicaltable::Entphysicalentry::entphysicalindex)
        YLeaf entphysicalindex;
        YLeaf cefcpowerredundancymode; //type: PowerredundancytypeEnum
        YLeaf cefcpowerunits; //type: string
        YLeaf cefctotalavailablecurrent; //type: int32
        YLeaf cefctotaldrawncurrent; //type: int32
        YLeaf cefcpowerredundancyopermode; //type: PowerredundancytypeEnum
        YLeaf cefcpowernonredundantreason; //type: CefcpowernonredundantreasonEnum
        YLeaf cefctotaldrawninlinecurrent; //type: int32
        class CefcpowernonredundantreasonEnum;

}; // CiscoEntityFruControlMib::Cefcfrupowersupplygrouptable::Cefcfrupowersupplygroupentry


class CiscoEntityFruControlMib::Cefcfrupowerstatustable : public Entity
{
    public:
        Cefcfrupowerstatustable();
        ~Cefcfrupowerstatustable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cefcfrupowerstatusentry; //type: CiscoEntityFruControlMib::Cefcfrupowerstatustable::Cefcfrupowerstatusentry

        std::vector<std::shared_ptr<CISCO_ENTITY_FRU_CONTROL_MIB::CiscoEntityFruControlMib::Cefcfrupowerstatustable::Cefcfrupowerstatusentry> > cefcfrupowerstatusentry;
        
}; // CiscoEntityFruControlMib::Cefcfrupowerstatustable


class CiscoEntityFruControlMib::Cefcfrupowerstatustable::Cefcfrupowerstatusentry : public Entity
{
    public:
        Cefcfrupowerstatusentry();
        ~Cefcfrupowerstatusentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to ENTITY_MIB::EntityMib::Entphysicaltable::Entphysicalentry::entphysicalindex)
        YLeaf entphysicalindex;
        YLeaf cefcfrupoweradminstatus; //type: PoweradmintypeEnum
        YLeaf cefcfrupoweroperstatus; //type: PoweropertypeEnum
        YLeaf cefcfrucurrent; //type: int32
        YLeaf cefcfrupowercapability; //type: Cefcfrupowercapability
        YLeaf cefcfrurealtimecurrent; //type: int32

}; // CiscoEntityFruControlMib::Cefcfrupowerstatustable::Cefcfrupowerstatusentry


class CiscoEntityFruControlMib::Cefcfrupowersupplyvaluetable : public Entity
{
    public:
        Cefcfrupowersupplyvaluetable();
        ~Cefcfrupowersupplyvaluetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cefcfrupowersupplyvalueentry; //type: CiscoEntityFruControlMib::Cefcfrupowersupplyvaluetable::Cefcfrupowersupplyvalueentry

        std::vector<std::shared_ptr<CISCO_ENTITY_FRU_CONTROL_MIB::CiscoEntityFruControlMib::Cefcfrupowersupplyvaluetable::Cefcfrupowersupplyvalueentry> > cefcfrupowersupplyvalueentry;
        
}; // CiscoEntityFruControlMib::Cefcfrupowersupplyvaluetable


class CiscoEntityFruControlMib::Cefcfrupowersupplyvaluetable::Cefcfrupowersupplyvalueentry : public Entity
{
    public:
        Cefcfrupowersupplyvalueentry();
        ~Cefcfrupowersupplyvalueentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to ENTITY_MIB::EntityMib::Entphysicaltable::Entphysicalentry::entphysicalindex)
        YLeaf entphysicalindex;
        YLeaf cefcfrutotalsystemcurrent; //type: int32
        YLeaf cefcfrudrawnsystemcurrent; //type: int32
        YLeaf cefcfrutotalinlinecurrent; //type: int32
        YLeaf cefcfrudrawninlinecurrent; //type: int32

}; // CiscoEntityFruControlMib::Cefcfrupowersupplyvaluetable::Cefcfrupowersupplyvalueentry


class CiscoEntityFruControlMib::Cefcmoduletable : public Entity
{
    public:
        Cefcmoduletable();
        ~Cefcmoduletable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cefcmoduleentry; //type: CiscoEntityFruControlMib::Cefcmoduletable::Cefcmoduleentry

        std::vector<std::shared_ptr<CISCO_ENTITY_FRU_CONTROL_MIB::CiscoEntityFruControlMib::Cefcmoduletable::Cefcmoduleentry> > cefcmoduleentry;
        
}; // CiscoEntityFruControlMib::Cefcmoduletable


class CiscoEntityFruControlMib::Cefcmoduletable::Cefcmoduleentry : public Entity
{
    public:
        Cefcmoduleentry();
        ~Cefcmoduleentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to ENTITY_MIB::EntityMib::Entphysicaltable::Entphysicalentry::entphysicalindex)
        YLeaf entphysicalindex;
        YLeaf cefcmoduleadminstatus; //type: ModuleadmintypeEnum
        YLeaf cefcmoduleoperstatus; //type: ModuleopertypeEnum
        YLeaf cefcmoduleresetreason; //type: ModuleresetreasontypeEnum
        YLeaf cefcmodulestatuslastchangetime; //type: uint32
        YLeaf cefcmodulelastclearconfigtime; //type: uint32
        YLeaf cefcmoduleresetreasondescription; //type: string
        YLeaf cefcmodulestatechangereasondescr; //type: string
        YLeaf cefcmoduleuptime; //type: uint32

}; // CiscoEntityFruControlMib::Cefcmoduletable::Cefcmoduleentry


class CiscoEntityFruControlMib::Cefcintellimoduletable : public Entity
{
    public:
        Cefcintellimoduletable();
        ~Cefcintellimoduletable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cefcintellimoduleentry; //type: CiscoEntityFruControlMib::Cefcintellimoduletable::Cefcintellimoduleentry

        std::vector<std::shared_ptr<CISCO_ENTITY_FRU_CONTROL_MIB::CiscoEntityFruControlMib::Cefcintellimoduletable::Cefcintellimoduleentry> > cefcintellimoduleentry;
        
}; // CiscoEntityFruControlMib::Cefcintellimoduletable


class CiscoEntityFruControlMib::Cefcintellimoduletable::Cefcintellimoduleentry : public Entity
{
    public:
        Cefcintellimoduleentry();
        ~Cefcintellimoduleentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to ENTITY_MIB::EntityMib::Entphysicaltable::Entphysicalentry::entphysicalindex)
        YLeaf entphysicalindex;
        YLeaf cefcintellimoduleipaddrtype; //type: InetaddresstypeEnum
        YLeaf cefcintellimoduleipaddr; //type: binary

}; // CiscoEntityFruControlMib::Cefcintellimoduletable::Cefcintellimoduleentry


class CiscoEntityFruControlMib::Cefcmodulelocalswitchingtable : public Entity
{
    public:
        Cefcmodulelocalswitchingtable();
        ~Cefcmodulelocalswitchingtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cefcmodulelocalswitchingentry; //type: CiscoEntityFruControlMib::Cefcmodulelocalswitchingtable::Cefcmodulelocalswitchingentry

        std::vector<std::shared_ptr<CISCO_ENTITY_FRU_CONTROL_MIB::CiscoEntityFruControlMib::Cefcmodulelocalswitchingtable::Cefcmodulelocalswitchingentry> > cefcmodulelocalswitchingentry;
        
}; // CiscoEntityFruControlMib::Cefcmodulelocalswitchingtable


class CiscoEntityFruControlMib::Cefcmodulelocalswitchingtable::Cefcmodulelocalswitchingentry : public Entity
{
    public:
        Cefcmodulelocalswitchingentry();
        ~Cefcmodulelocalswitchingentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to ENTITY_MIB::EntityMib::Entphysicaltable::Entphysicalentry::entphysicalindex)
        YLeaf entphysicalindex;
        YLeaf cefcmodulelocalswitchingmode; //type: CefcmodulelocalswitchingmodeEnum
        class CefcmodulelocalswitchingmodeEnum;

}; // CiscoEntityFruControlMib::Cefcmodulelocalswitchingtable::Cefcmodulelocalswitchingentry


class CiscoEntityFruControlMib::Cefcfantraystatustable : public Entity
{
    public:
        Cefcfantraystatustable();
        ~Cefcfantraystatustable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cefcfantraystatusentry; //type: CiscoEntityFruControlMib::Cefcfantraystatustable::Cefcfantraystatusentry

        std::vector<std::shared_ptr<CISCO_ENTITY_FRU_CONTROL_MIB::CiscoEntityFruControlMib::Cefcfantraystatustable::Cefcfantraystatusentry> > cefcfantraystatusentry;
        
}; // CiscoEntityFruControlMib::Cefcfantraystatustable


class CiscoEntityFruControlMib::Cefcfantraystatustable::Cefcfantraystatusentry : public Entity
{
    public:
        Cefcfantraystatusentry();
        ~Cefcfantraystatusentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to ENTITY_MIB::EntityMib::Entphysicaltable::Entphysicalentry::entphysicalindex)
        YLeaf entphysicalindex;
        YLeaf cefcfantrayoperstatus; //type: CefcfantrayoperstatusEnum
        class CefcfantrayoperstatusEnum;

}; // CiscoEntityFruControlMib::Cefcfantraystatustable::Cefcfantraystatusentry


class CiscoEntityFruControlMib::Cefcphysicaltable : public Entity
{
    public:
        Cefcphysicaltable();
        ~Cefcphysicaltable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cefcphysicalentry; //type: CiscoEntityFruControlMib::Cefcphysicaltable::Cefcphysicalentry

        std::vector<std::shared_ptr<CISCO_ENTITY_FRU_CONTROL_MIB::CiscoEntityFruControlMib::Cefcphysicaltable::Cefcphysicalentry> > cefcphysicalentry;
        
}; // CiscoEntityFruControlMib::Cefcphysicaltable


class CiscoEntityFruControlMib::Cefcphysicaltable::Cefcphysicalentry : public Entity
{
    public:
        Cefcphysicalentry();
        ~Cefcphysicalentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to ENTITY_MIB::EntityMib::Entphysicaltable::Entphysicalentry::entphysicalindex)
        YLeaf entphysicalindex;
        YLeaf cefcphysicalstatus; //type: CefcphysicalstatusEnum
        class CefcphysicalstatusEnum;

}; // CiscoEntityFruControlMib::Cefcphysicaltable::Cefcphysicalentry


class CiscoEntityFruControlMib::Cefcpowersupplyinputtable : public Entity
{
    public:
        Cefcpowersupplyinputtable();
        ~Cefcpowersupplyinputtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cefcpowersupplyinputentry; //type: CiscoEntityFruControlMib::Cefcpowersupplyinputtable::Cefcpowersupplyinputentry

        std::vector<std::shared_ptr<CISCO_ENTITY_FRU_CONTROL_MIB::CiscoEntityFruControlMib::Cefcpowersupplyinputtable::Cefcpowersupplyinputentry> > cefcpowersupplyinputentry;
        
}; // CiscoEntityFruControlMib::Cefcpowersupplyinputtable


class CiscoEntityFruControlMib::Cefcpowersupplyinputtable::Cefcpowersupplyinputentry : public Entity
{
    public:
        Cefcpowersupplyinputentry();
        ~Cefcpowersupplyinputentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to ENTITY_MIB::EntityMib::Entphysicaltable::Entphysicalentry::entphysicalindex)
        YLeaf entphysicalindex;
        YLeaf cefcpowersupplyinputindex; //type: uint32
        YLeaf cefcpowersupplyinputtype; //type: CefcpowersupplyinputtypeEnum
        class CefcpowersupplyinputtypeEnum;

}; // CiscoEntityFruControlMib::Cefcpowersupplyinputtable::Cefcpowersupplyinputentry


class CiscoEntityFruControlMib::Cefcpowersupplyoutputtable : public Entity
{
    public:
        Cefcpowersupplyoutputtable();
        ~Cefcpowersupplyoutputtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cefcpowersupplyoutputentry; //type: CiscoEntityFruControlMib::Cefcpowersupplyoutputtable::Cefcpowersupplyoutputentry

        std::vector<std::shared_ptr<CISCO_ENTITY_FRU_CONTROL_MIB::CiscoEntityFruControlMib::Cefcpowersupplyoutputtable::Cefcpowersupplyoutputentry> > cefcpowersupplyoutputentry;
        
}; // CiscoEntityFruControlMib::Cefcpowersupplyoutputtable


class CiscoEntityFruControlMib::Cefcpowersupplyoutputtable::Cefcpowersupplyoutputentry : public Entity
{
    public:
        Cefcpowersupplyoutputentry();
        ~Cefcpowersupplyoutputentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to ENTITY_MIB::EntityMib::Entphysicaltable::Entphysicalentry::entphysicalindex)
        YLeaf entphysicalindex;
        YLeaf cefcpsoutputmodeindex; //type: uint32
        YLeaf cefcpsoutputmodecurrent; //type: int32
        YLeaf cefcpsoutputmodeinoperation; //type: boolean

}; // CiscoEntityFruControlMib::Cefcpowersupplyoutputtable::Cefcpowersupplyoutputentry


class CiscoEntityFruControlMib::Cefcchassiscoolingtable : public Entity
{
    public:
        Cefcchassiscoolingtable();
        ~Cefcchassiscoolingtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cefcchassiscoolingentry; //type: CiscoEntityFruControlMib::Cefcchassiscoolingtable::Cefcchassiscoolingentry

        std::vector<std::shared_ptr<CISCO_ENTITY_FRU_CONTROL_MIB::CiscoEntityFruControlMib::Cefcchassiscoolingtable::Cefcchassiscoolingentry> > cefcchassiscoolingentry;
        
}; // CiscoEntityFruControlMib::Cefcchassiscoolingtable


class CiscoEntityFruControlMib::Cefcchassiscoolingtable::Cefcchassiscoolingentry : public Entity
{
    public:
        Cefcchassiscoolingentry();
        ~Cefcchassiscoolingentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to ENTITY_MIB::EntityMib::Entphysicaltable::Entphysicalentry::entphysicalindex)
        YLeaf entphysicalindex;
        YLeaf cefcchassisperslotcoolingcap; //type: uint32
        YLeaf cefcchassisperslotcoolingunit; //type: FrucoolingunitEnum

}; // CiscoEntityFruControlMib::Cefcchassiscoolingtable::Cefcchassiscoolingentry


class CiscoEntityFruControlMib::Cefcfancoolingtable : public Entity
{
    public:
        Cefcfancoolingtable();
        ~Cefcfancoolingtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cefcfancoolingentry; //type: CiscoEntityFruControlMib::Cefcfancoolingtable::Cefcfancoolingentry

        std::vector<std::shared_ptr<CISCO_ENTITY_FRU_CONTROL_MIB::CiscoEntityFruControlMib::Cefcfancoolingtable::Cefcfancoolingentry> > cefcfancoolingentry;
        
}; // CiscoEntityFruControlMib::Cefcfancoolingtable


class CiscoEntityFruControlMib::Cefcfancoolingtable::Cefcfancoolingentry : public Entity
{
    public:
        Cefcfancoolingentry();
        ~Cefcfancoolingentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to ENTITY_MIB::EntityMib::Entphysicaltable::Entphysicalentry::entphysicalindex)
        YLeaf entphysicalindex;
        YLeaf cefcfancoolingcapacity; //type: uint32
        YLeaf cefcfancoolingcapacityunit; //type: FrucoolingunitEnum

}; // CiscoEntityFruControlMib::Cefcfancoolingtable::Cefcfancoolingentry


class CiscoEntityFruControlMib::Cefcmodulecoolingtable : public Entity
{
    public:
        Cefcmodulecoolingtable();
        ~Cefcmodulecoolingtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cefcmodulecoolingentry; //type: CiscoEntityFruControlMib::Cefcmodulecoolingtable::Cefcmodulecoolingentry

        std::vector<std::shared_ptr<CISCO_ENTITY_FRU_CONTROL_MIB::CiscoEntityFruControlMib::Cefcmodulecoolingtable::Cefcmodulecoolingentry> > cefcmodulecoolingentry;
        
}; // CiscoEntityFruControlMib::Cefcmodulecoolingtable


class CiscoEntityFruControlMib::Cefcmodulecoolingtable::Cefcmodulecoolingentry : public Entity
{
    public:
        Cefcmodulecoolingentry();
        ~Cefcmodulecoolingentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to ENTITY_MIB::EntityMib::Entphysicaltable::Entphysicalentry::entphysicalindex)
        YLeaf entphysicalindex;
        YLeaf cefcmodulecooling; //type: uint32
        YLeaf cefcmodulecoolingunit; //type: FrucoolingunitEnum

}; // CiscoEntityFruControlMib::Cefcmodulecoolingtable::Cefcmodulecoolingentry


class CiscoEntityFruControlMib::Cefcfancoolingcaptable : public Entity
{
    public:
        Cefcfancoolingcaptable();
        ~Cefcfancoolingcaptable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cefcfancoolingcapentry; //type: CiscoEntityFruControlMib::Cefcfancoolingcaptable::Cefcfancoolingcapentry

        std::vector<std::shared_ptr<CISCO_ENTITY_FRU_CONTROL_MIB::CiscoEntityFruControlMib::Cefcfancoolingcaptable::Cefcfancoolingcapentry> > cefcfancoolingcapentry;
        
}; // CiscoEntityFruControlMib::Cefcfancoolingcaptable


class CiscoEntityFruControlMib::Cefcfancoolingcaptable::Cefcfancoolingcapentry : public Entity
{
    public:
        Cefcfancoolingcapentry();
        ~Cefcfancoolingcapentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to ENTITY_MIB::EntityMib::Entphysicaltable::Entphysicalentry::entphysicalindex)
        YLeaf entphysicalindex;
        YLeaf cefcfancoolingcapindex; //type: uint32
        YLeaf cefcfancoolingcapmodedescr; //type: string
        YLeaf cefcfancoolingcapcapacity; //type: uint32
        YLeaf cefcfancoolingcapcurrent; //type: int32
        YLeaf cefcfancoolingcapcapacityunit; //type: FrucoolingunitEnum

}; // CiscoEntityFruControlMib::Cefcfancoolingcaptable::Cefcfancoolingcapentry


class CiscoEntityFruControlMib::Cefcconnectorratingtable : public Entity
{
    public:
        Cefcconnectorratingtable();
        ~Cefcconnectorratingtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cefcconnectorratingentry; //type: CiscoEntityFruControlMib::Cefcconnectorratingtable::Cefcconnectorratingentry

        std::vector<std::shared_ptr<CISCO_ENTITY_FRU_CONTROL_MIB::CiscoEntityFruControlMib::Cefcconnectorratingtable::Cefcconnectorratingentry> > cefcconnectorratingentry;
        
}; // CiscoEntityFruControlMib::Cefcconnectorratingtable


class CiscoEntityFruControlMib::Cefcconnectorratingtable::Cefcconnectorratingentry : public Entity
{
    public:
        Cefcconnectorratingentry();
        ~Cefcconnectorratingentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to ENTITY_MIB::EntityMib::Entphysicaltable::Entphysicalentry::entphysicalindex)
        YLeaf entphysicalindex;
        YLeaf cefcconnectorrating; //type: int32

}; // CiscoEntityFruControlMib::Cefcconnectorratingtable::Cefcconnectorratingentry


class CiscoEntityFruControlMib::Cefcmodulepowerconsumptiontable : public Entity
{
    public:
        Cefcmodulepowerconsumptiontable();
        ~Cefcmodulepowerconsumptiontable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cefcmodulepowerconsumptionentry; //type: CiscoEntityFruControlMib::Cefcmodulepowerconsumptiontable::Cefcmodulepowerconsumptionentry

        std::vector<std::shared_ptr<CISCO_ENTITY_FRU_CONTROL_MIB::CiscoEntityFruControlMib::Cefcmodulepowerconsumptiontable::Cefcmodulepowerconsumptionentry> > cefcmodulepowerconsumptionentry;
        
}; // CiscoEntityFruControlMib::Cefcmodulepowerconsumptiontable


class CiscoEntityFruControlMib::Cefcmodulepowerconsumptiontable::Cefcmodulepowerconsumptionentry : public Entity
{
    public:
        Cefcmodulepowerconsumptionentry();
        ~Cefcmodulepowerconsumptionentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to ENTITY_MIB::EntityMib::Entphysicaltable::Entphysicalentry::entphysicalindex)
        YLeaf entphysicalindex;
        YLeaf cefcmodulepowerconsumption; //type: int32

}; // CiscoEntityFruControlMib::Cefcmodulepowerconsumptiontable::Cefcmodulepowerconsumptionentry

class ModuleadmintypeEnum : public Enum
{
    public:
        static const Enum::YLeaf enabled;
        static const Enum::YLeaf disabled;
        static const Enum::YLeaf reset;
        static const Enum::YLeaf outOfServiceAdmin;

};

class FrucoolingunitEnum : public Enum
{
    public:
        static const Enum::YLeaf cfm;
        static const Enum::YLeaf watts;

};

class PoweradmintypeEnum : public Enum
{
    public:
        static const Enum::YLeaf on;
        static const Enum::YLeaf off;
        static const Enum::YLeaf inlineAuto;
        static const Enum::YLeaf inlineOn;
        static const Enum::YLeaf powerCycle;

};

class ModuleopertypeEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf ok;
        static const Enum::YLeaf disabled;
        static const Enum::YLeaf okButDiagFailed;
        static const Enum::YLeaf boot;
        static const Enum::YLeaf selfTest;
        static const Enum::YLeaf failed;
        static const Enum::YLeaf missing;
        static const Enum::YLeaf mismatchWithParent;
        static const Enum::YLeaf mismatchConfig;
        static const Enum::YLeaf diagFailed;
        static const Enum::YLeaf dormant;
        static const Enum::YLeaf outOfServiceAdmin;
        static const Enum::YLeaf outOfServiceEnvTemp;
        static const Enum::YLeaf poweredDown;
        static const Enum::YLeaf poweredUp;
        static const Enum::YLeaf powerDenied;
        static const Enum::YLeaf powerCycled;
        static const Enum::YLeaf okButPowerOverWarning;
        static const Enum::YLeaf okButPowerOverCritical;
        static const Enum::YLeaf syncInProgress;
        static const Enum::YLeaf upgrading;
        static const Enum::YLeaf okButAuthFailed;
        static const Enum::YLeaf mdr;
        static const Enum::YLeaf fwMismatchFound;
        static const Enum::YLeaf fwDownloadSuccess;
        static const Enum::YLeaf fwDownloadFailure;

};

class ModuleresetreasontypeEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf powerUp;
        static const Enum::YLeaf parityError;
        static const Enum::YLeaf clearConfigReset;
        static const Enum::YLeaf manualReset;
        static const Enum::YLeaf watchDogTimeoutReset;
        static const Enum::YLeaf resourceOverflowReset;
        static const Enum::YLeaf missingTaskReset;
        static const Enum::YLeaf lowVoltageReset;
        static const Enum::YLeaf controllerReset;
        static const Enum::YLeaf systemReset;
        static const Enum::YLeaf switchoverReset;
        static const Enum::YLeaf upgradeReset;
        static const Enum::YLeaf downgradeReset;
        static const Enum::YLeaf cacheErrorReset;
        static const Enum::YLeaf deviceDriverReset;
        static const Enum::YLeaf softwareExceptionReset;
        static const Enum::YLeaf restoreConfigReset;
        static const Enum::YLeaf abortRevReset;
        static const Enum::YLeaf burnBootReset;
        static const Enum::YLeaf standbyCdHealthierReset;
        static const Enum::YLeaf nonNativeConfigClearReset;
        static const Enum::YLeaf memoryProtectionErrorReset;

};

class PowerredundancytypeEnum : public Enum
{
    public:
        static const Enum::YLeaf notsupported;
        static const Enum::YLeaf redundant;
        static const Enum::YLeaf combined;
        static const Enum::YLeaf nonRedundant;
        static const Enum::YLeaf psRedundant;
        static const Enum::YLeaf inPwrSrcRedundant;
        static const Enum::YLeaf psRedundantSingleInput;

};

class PoweropertypeEnum : public Enum
{
    public:
        static const Enum::YLeaf offEnvOther;
        static const Enum::YLeaf on;
        static const Enum::YLeaf offAdmin;
        static const Enum::YLeaf offDenied;
        static const Enum::YLeaf offEnvPower;
        static const Enum::YLeaf offEnvTemp;
        static const Enum::YLeaf offEnvFan;
        static const Enum::YLeaf failed;
        static const Enum::YLeaf onButFanFail;
        static const Enum::YLeaf offCooling;
        static const Enum::YLeaf offConnectorRating;
        static const Enum::YLeaf onButInlinePowerFail;

};

class CiscoEntityFruControlMib::Cefcfrupowersupplygrouptable::Cefcfrupowersupplygroupentry::CefcpowernonredundantreasonEnum : public Enum
{
    public:
        static const Enum::YLeaf notApplicable;
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf singleSupply;
        static const Enum::YLeaf mismatchedSupplies;
        static const Enum::YLeaf supplyError;

};

class CiscoEntityFruControlMib::Cefcmodulelocalswitchingtable::Cefcmodulelocalswitchingentry::CefcmodulelocalswitchingmodeEnum : public Enum
{
    public:
        static const Enum::YLeaf enabled;
        static const Enum::YLeaf disabled;

};

class CiscoEntityFruControlMib::Cefcfantraystatustable::Cefcfantraystatusentry::CefcfantrayoperstatusEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf up;
        static const Enum::YLeaf down;
        static const Enum::YLeaf warning;

};

class CiscoEntityFruControlMib::Cefcphysicaltable::Cefcphysicalentry::CefcphysicalstatusEnum : public Enum
{
    public:
        static const Enum::YLeaf other;
        static const Enum::YLeaf supported;
        static const Enum::YLeaf unsupported;
        static const Enum::YLeaf incompatible;

};

class CiscoEntityFruControlMib::Cefcpowersupplyinputtable::Cefcpowersupplyinputentry::CefcpowersupplyinputtypeEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf acLow;
        static const Enum::YLeaf acHigh;
        static const Enum::YLeaf dcLow;
        static const Enum::YLeaf dcHigh;

};


}
}

#endif /* _CISCO_ENTITY_FRU_CONTROL_MIB_ */

