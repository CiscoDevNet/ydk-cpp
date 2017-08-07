#ifndef _CISCO_ENTITY_FRU_CONTROL_MIB_
#define _CISCO_ENTITY_FRU_CONTROL_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_ENTITY_FRU_CONTROL_MIB {

class CiscoEntityFruControlMib : public ydk::Entity
{
    public:
        CiscoEntityFruControlMib();
        ~CiscoEntityFruControlMib();

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


class CiscoEntityFruControlMib::Cefcfrupower : public ydk::Entity
{
    public:
        Cefcfrupower();
        ~Cefcfrupower();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cefcmaxdefaultinlinepower; //type: int32
        ydk::YLeaf cefcmaxdefaulthighinlinepower; //type: uint32

}; // CiscoEntityFruControlMib::Cefcfrupower


class CiscoEntityFruControlMib::Cefcmibnotificationenables : public ydk::Entity
{
    public:
        Cefcmibnotificationenables();
        ~Cefcmibnotificationenables();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cefcmibenablestatusnotification; //type: boolean
        ydk::YLeaf cefcenablepsoutputchangenotif; //type: boolean

}; // CiscoEntityFruControlMib::Cefcmibnotificationenables


class CiscoEntityFruControlMib::Cefcfrupowersupplygrouptable : public ydk::Entity
{
    public:
        Cefcfrupowersupplygrouptable();
        ~Cefcfrupowersupplygrouptable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cefcfrupowersupplygroupentry; //type: CiscoEntityFruControlMib::Cefcfrupowersupplygrouptable::Cefcfrupowersupplygroupentry

        std::vector<std::shared_ptr<CISCO_ENTITY_FRU_CONTROL_MIB::CiscoEntityFruControlMib::Cefcfrupowersupplygrouptable::Cefcfrupowersupplygroupentry> > cefcfrupowersupplygroupentry;
        
}; // CiscoEntityFruControlMib::Cefcfrupowersupplygrouptable


class CiscoEntityFruControlMib::Cefcfrupowersupplygrouptable::Cefcfrupowersupplygroupentry : public ydk::Entity
{
    public:
        Cefcfrupowersupplygroupentry();
        ~Cefcfrupowersupplygroupentry();

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
        ydk::YLeaf cefcpowerredundancymode; //type: Powerredundancytype
        ydk::YLeaf cefcpowerunits; //type: string
        ydk::YLeaf cefctotalavailablecurrent; //type: int32
        ydk::YLeaf cefctotaldrawncurrent; //type: int32
        ydk::YLeaf cefcpowerredundancyopermode; //type: Powerredundancytype
        ydk::YLeaf cefcpowernonredundantreason; //type: Cefcpowernonredundantreason
        ydk::YLeaf cefctotaldrawninlinecurrent; //type: int32
        class Cefcpowernonredundantreason;

}; // CiscoEntityFruControlMib::Cefcfrupowersupplygrouptable::Cefcfrupowersupplygroupentry


class CiscoEntityFruControlMib::Cefcfrupowerstatustable : public ydk::Entity
{
    public:
        Cefcfrupowerstatustable();
        ~Cefcfrupowerstatustable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cefcfrupowerstatusentry; //type: CiscoEntityFruControlMib::Cefcfrupowerstatustable::Cefcfrupowerstatusentry

        std::vector<std::shared_ptr<CISCO_ENTITY_FRU_CONTROL_MIB::CiscoEntityFruControlMib::Cefcfrupowerstatustable::Cefcfrupowerstatusentry> > cefcfrupowerstatusentry;
        
}; // CiscoEntityFruControlMib::Cefcfrupowerstatustable


class CiscoEntityFruControlMib::Cefcfrupowerstatustable::Cefcfrupowerstatusentry : public ydk::Entity
{
    public:
        Cefcfrupowerstatusentry();
        ~Cefcfrupowerstatusentry();

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
        ydk::YLeaf cefcfrupoweradminstatus; //type: Poweradmintype
        ydk::YLeaf cefcfrupoweroperstatus; //type: Poweropertype
        ydk::YLeaf cefcfrucurrent; //type: int32
        ydk::YLeaf cefcfrupowercapability; //type: Cefcfrupowercapability
        ydk::YLeaf cefcfrurealtimecurrent; //type: int32

}; // CiscoEntityFruControlMib::Cefcfrupowerstatustable::Cefcfrupowerstatusentry


class CiscoEntityFruControlMib::Cefcfrupowersupplyvaluetable : public ydk::Entity
{
    public:
        Cefcfrupowersupplyvaluetable();
        ~Cefcfrupowersupplyvaluetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cefcfrupowersupplyvalueentry; //type: CiscoEntityFruControlMib::Cefcfrupowersupplyvaluetable::Cefcfrupowersupplyvalueentry

        std::vector<std::shared_ptr<CISCO_ENTITY_FRU_CONTROL_MIB::CiscoEntityFruControlMib::Cefcfrupowersupplyvaluetable::Cefcfrupowersupplyvalueentry> > cefcfrupowersupplyvalueentry;
        
}; // CiscoEntityFruControlMib::Cefcfrupowersupplyvaluetable


class CiscoEntityFruControlMib::Cefcfrupowersupplyvaluetable::Cefcfrupowersupplyvalueentry : public ydk::Entity
{
    public:
        Cefcfrupowersupplyvalueentry();
        ~Cefcfrupowersupplyvalueentry();

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
        ydk::YLeaf cefcfrutotalsystemcurrent; //type: int32
        ydk::YLeaf cefcfrudrawnsystemcurrent; //type: int32
        ydk::YLeaf cefcfrutotalinlinecurrent; //type: int32
        ydk::YLeaf cefcfrudrawninlinecurrent; //type: int32

}; // CiscoEntityFruControlMib::Cefcfrupowersupplyvaluetable::Cefcfrupowersupplyvalueentry


class CiscoEntityFruControlMib::Cefcmoduletable : public ydk::Entity
{
    public:
        Cefcmoduletable();
        ~Cefcmoduletable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cefcmoduleentry; //type: CiscoEntityFruControlMib::Cefcmoduletable::Cefcmoduleentry

        std::vector<std::shared_ptr<CISCO_ENTITY_FRU_CONTROL_MIB::CiscoEntityFruControlMib::Cefcmoduletable::Cefcmoduleentry> > cefcmoduleentry;
        
}; // CiscoEntityFruControlMib::Cefcmoduletable


class CiscoEntityFruControlMib::Cefcmoduletable::Cefcmoduleentry : public ydk::Entity
{
    public:
        Cefcmoduleentry();
        ~Cefcmoduleentry();

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
        ydk::YLeaf cefcmoduleadminstatus; //type: Moduleadmintype
        ydk::YLeaf cefcmoduleoperstatus; //type: Moduleopertype
        ydk::YLeaf cefcmoduleresetreason; //type: Moduleresetreasontype
        ydk::YLeaf cefcmodulestatuslastchangetime; //type: uint32
        ydk::YLeaf cefcmodulelastclearconfigtime; //type: uint32
        ydk::YLeaf cefcmoduleresetreasondescription; //type: string
        ydk::YLeaf cefcmodulestatechangereasondescr; //type: string
        ydk::YLeaf cefcmoduleuptime; //type: uint32

}; // CiscoEntityFruControlMib::Cefcmoduletable::Cefcmoduleentry


class CiscoEntityFruControlMib::Cefcintellimoduletable : public ydk::Entity
{
    public:
        Cefcintellimoduletable();
        ~Cefcintellimoduletable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cefcintellimoduleentry; //type: CiscoEntityFruControlMib::Cefcintellimoduletable::Cefcintellimoduleentry

        std::vector<std::shared_ptr<CISCO_ENTITY_FRU_CONTROL_MIB::CiscoEntityFruControlMib::Cefcintellimoduletable::Cefcintellimoduleentry> > cefcintellimoduleentry;
        
}; // CiscoEntityFruControlMib::Cefcintellimoduletable


class CiscoEntityFruControlMib::Cefcintellimoduletable::Cefcintellimoduleentry : public ydk::Entity
{
    public:
        Cefcintellimoduleentry();
        ~Cefcintellimoduleentry();

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
        ydk::YLeaf cefcintellimoduleipaddrtype; //type: Inetaddresstype
        ydk::YLeaf cefcintellimoduleipaddr; //type: binary

}; // CiscoEntityFruControlMib::Cefcintellimoduletable::Cefcintellimoduleentry


class CiscoEntityFruControlMib::Cefcmodulelocalswitchingtable : public ydk::Entity
{
    public:
        Cefcmodulelocalswitchingtable();
        ~Cefcmodulelocalswitchingtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cefcmodulelocalswitchingentry; //type: CiscoEntityFruControlMib::Cefcmodulelocalswitchingtable::Cefcmodulelocalswitchingentry

        std::vector<std::shared_ptr<CISCO_ENTITY_FRU_CONTROL_MIB::CiscoEntityFruControlMib::Cefcmodulelocalswitchingtable::Cefcmodulelocalswitchingentry> > cefcmodulelocalswitchingentry;
        
}; // CiscoEntityFruControlMib::Cefcmodulelocalswitchingtable


class CiscoEntityFruControlMib::Cefcmodulelocalswitchingtable::Cefcmodulelocalswitchingentry : public ydk::Entity
{
    public:
        Cefcmodulelocalswitchingentry();
        ~Cefcmodulelocalswitchingentry();

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
        ydk::YLeaf cefcmodulelocalswitchingmode; //type: Cefcmodulelocalswitchingmode
        class Cefcmodulelocalswitchingmode;

}; // CiscoEntityFruControlMib::Cefcmodulelocalswitchingtable::Cefcmodulelocalswitchingentry


class CiscoEntityFruControlMib::Cefcfantraystatustable : public ydk::Entity
{
    public:
        Cefcfantraystatustable();
        ~Cefcfantraystatustable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cefcfantraystatusentry; //type: CiscoEntityFruControlMib::Cefcfantraystatustable::Cefcfantraystatusentry

        std::vector<std::shared_ptr<CISCO_ENTITY_FRU_CONTROL_MIB::CiscoEntityFruControlMib::Cefcfantraystatustable::Cefcfantraystatusentry> > cefcfantraystatusentry;
        
}; // CiscoEntityFruControlMib::Cefcfantraystatustable


class CiscoEntityFruControlMib::Cefcfantraystatustable::Cefcfantraystatusentry : public ydk::Entity
{
    public:
        Cefcfantraystatusentry();
        ~Cefcfantraystatusentry();

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
        ydk::YLeaf cefcfantrayoperstatus; //type: Cefcfantrayoperstatus
        class Cefcfantrayoperstatus;

}; // CiscoEntityFruControlMib::Cefcfantraystatustable::Cefcfantraystatusentry


class CiscoEntityFruControlMib::Cefcphysicaltable : public ydk::Entity
{
    public:
        Cefcphysicaltable();
        ~Cefcphysicaltable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cefcphysicalentry; //type: CiscoEntityFruControlMib::Cefcphysicaltable::Cefcphysicalentry

        std::vector<std::shared_ptr<CISCO_ENTITY_FRU_CONTROL_MIB::CiscoEntityFruControlMib::Cefcphysicaltable::Cefcphysicalentry> > cefcphysicalentry;
        
}; // CiscoEntityFruControlMib::Cefcphysicaltable


class CiscoEntityFruControlMib::Cefcphysicaltable::Cefcphysicalentry : public ydk::Entity
{
    public:
        Cefcphysicalentry();
        ~Cefcphysicalentry();

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
        ydk::YLeaf cefcphysicalstatus; //type: Cefcphysicalstatus
        class Cefcphysicalstatus;

}; // CiscoEntityFruControlMib::Cefcphysicaltable::Cefcphysicalentry


class CiscoEntityFruControlMib::Cefcpowersupplyinputtable : public ydk::Entity
{
    public:
        Cefcpowersupplyinputtable();
        ~Cefcpowersupplyinputtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cefcpowersupplyinputentry; //type: CiscoEntityFruControlMib::Cefcpowersupplyinputtable::Cefcpowersupplyinputentry

        std::vector<std::shared_ptr<CISCO_ENTITY_FRU_CONTROL_MIB::CiscoEntityFruControlMib::Cefcpowersupplyinputtable::Cefcpowersupplyinputentry> > cefcpowersupplyinputentry;
        
}; // CiscoEntityFruControlMib::Cefcpowersupplyinputtable


class CiscoEntityFruControlMib::Cefcpowersupplyinputtable::Cefcpowersupplyinputentry : public ydk::Entity
{
    public:
        Cefcpowersupplyinputentry();
        ~Cefcpowersupplyinputentry();

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
        ydk::YLeaf cefcpowersupplyinputindex; //type: uint32
        ydk::YLeaf cefcpowersupplyinputtype; //type: Cefcpowersupplyinputtype
        class Cefcpowersupplyinputtype;

}; // CiscoEntityFruControlMib::Cefcpowersupplyinputtable::Cefcpowersupplyinputentry


class CiscoEntityFruControlMib::Cefcpowersupplyoutputtable : public ydk::Entity
{
    public:
        Cefcpowersupplyoutputtable();
        ~Cefcpowersupplyoutputtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cefcpowersupplyoutputentry; //type: CiscoEntityFruControlMib::Cefcpowersupplyoutputtable::Cefcpowersupplyoutputentry

        std::vector<std::shared_ptr<CISCO_ENTITY_FRU_CONTROL_MIB::CiscoEntityFruControlMib::Cefcpowersupplyoutputtable::Cefcpowersupplyoutputentry> > cefcpowersupplyoutputentry;
        
}; // CiscoEntityFruControlMib::Cefcpowersupplyoutputtable


class CiscoEntityFruControlMib::Cefcpowersupplyoutputtable::Cefcpowersupplyoutputentry : public ydk::Entity
{
    public:
        Cefcpowersupplyoutputentry();
        ~Cefcpowersupplyoutputentry();

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
        ydk::YLeaf cefcpsoutputmodeindex; //type: uint32
        ydk::YLeaf cefcpsoutputmodecurrent; //type: int32
        ydk::YLeaf cefcpsoutputmodeinoperation; //type: boolean

}; // CiscoEntityFruControlMib::Cefcpowersupplyoutputtable::Cefcpowersupplyoutputentry


class CiscoEntityFruControlMib::Cefcchassiscoolingtable : public ydk::Entity
{
    public:
        Cefcchassiscoolingtable();
        ~Cefcchassiscoolingtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cefcchassiscoolingentry; //type: CiscoEntityFruControlMib::Cefcchassiscoolingtable::Cefcchassiscoolingentry

        std::vector<std::shared_ptr<CISCO_ENTITY_FRU_CONTROL_MIB::CiscoEntityFruControlMib::Cefcchassiscoolingtable::Cefcchassiscoolingentry> > cefcchassiscoolingentry;
        
}; // CiscoEntityFruControlMib::Cefcchassiscoolingtable


class CiscoEntityFruControlMib::Cefcchassiscoolingtable::Cefcchassiscoolingentry : public ydk::Entity
{
    public:
        Cefcchassiscoolingentry();
        ~Cefcchassiscoolingentry();

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
        ydk::YLeaf cefcchassisperslotcoolingcap; //type: uint32
        ydk::YLeaf cefcchassisperslotcoolingunit; //type: Frucoolingunit

}; // CiscoEntityFruControlMib::Cefcchassiscoolingtable::Cefcchassiscoolingentry


class CiscoEntityFruControlMib::Cefcfancoolingtable : public ydk::Entity
{
    public:
        Cefcfancoolingtable();
        ~Cefcfancoolingtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cefcfancoolingentry; //type: CiscoEntityFruControlMib::Cefcfancoolingtable::Cefcfancoolingentry

        std::vector<std::shared_ptr<CISCO_ENTITY_FRU_CONTROL_MIB::CiscoEntityFruControlMib::Cefcfancoolingtable::Cefcfancoolingentry> > cefcfancoolingentry;
        
}; // CiscoEntityFruControlMib::Cefcfancoolingtable


class CiscoEntityFruControlMib::Cefcfancoolingtable::Cefcfancoolingentry : public ydk::Entity
{
    public:
        Cefcfancoolingentry();
        ~Cefcfancoolingentry();

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
        ydk::YLeaf cefcfancoolingcapacity; //type: uint32
        ydk::YLeaf cefcfancoolingcapacityunit; //type: Frucoolingunit

}; // CiscoEntityFruControlMib::Cefcfancoolingtable::Cefcfancoolingentry


class CiscoEntityFruControlMib::Cefcmodulecoolingtable : public ydk::Entity
{
    public:
        Cefcmodulecoolingtable();
        ~Cefcmodulecoolingtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cefcmodulecoolingentry; //type: CiscoEntityFruControlMib::Cefcmodulecoolingtable::Cefcmodulecoolingentry

        std::vector<std::shared_ptr<CISCO_ENTITY_FRU_CONTROL_MIB::CiscoEntityFruControlMib::Cefcmodulecoolingtable::Cefcmodulecoolingentry> > cefcmodulecoolingentry;
        
}; // CiscoEntityFruControlMib::Cefcmodulecoolingtable


class CiscoEntityFruControlMib::Cefcmodulecoolingtable::Cefcmodulecoolingentry : public ydk::Entity
{
    public:
        Cefcmodulecoolingentry();
        ~Cefcmodulecoolingentry();

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
        ydk::YLeaf cefcmodulecooling; //type: uint32
        ydk::YLeaf cefcmodulecoolingunit; //type: Frucoolingunit

}; // CiscoEntityFruControlMib::Cefcmodulecoolingtable::Cefcmodulecoolingentry


class CiscoEntityFruControlMib::Cefcfancoolingcaptable : public ydk::Entity
{
    public:
        Cefcfancoolingcaptable();
        ~Cefcfancoolingcaptable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cefcfancoolingcapentry; //type: CiscoEntityFruControlMib::Cefcfancoolingcaptable::Cefcfancoolingcapentry

        std::vector<std::shared_ptr<CISCO_ENTITY_FRU_CONTROL_MIB::CiscoEntityFruControlMib::Cefcfancoolingcaptable::Cefcfancoolingcapentry> > cefcfancoolingcapentry;
        
}; // CiscoEntityFruControlMib::Cefcfancoolingcaptable


class CiscoEntityFruControlMib::Cefcfancoolingcaptable::Cefcfancoolingcapentry : public ydk::Entity
{
    public:
        Cefcfancoolingcapentry();
        ~Cefcfancoolingcapentry();

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
        ydk::YLeaf cefcfancoolingcapindex; //type: uint32
        ydk::YLeaf cefcfancoolingcapmodedescr; //type: string
        ydk::YLeaf cefcfancoolingcapcapacity; //type: uint32
        ydk::YLeaf cefcfancoolingcapcurrent; //type: int32
        ydk::YLeaf cefcfancoolingcapcapacityunit; //type: Frucoolingunit

}; // CiscoEntityFruControlMib::Cefcfancoolingcaptable::Cefcfancoolingcapentry


class CiscoEntityFruControlMib::Cefcconnectorratingtable : public ydk::Entity
{
    public:
        Cefcconnectorratingtable();
        ~Cefcconnectorratingtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cefcconnectorratingentry; //type: CiscoEntityFruControlMib::Cefcconnectorratingtable::Cefcconnectorratingentry

        std::vector<std::shared_ptr<CISCO_ENTITY_FRU_CONTROL_MIB::CiscoEntityFruControlMib::Cefcconnectorratingtable::Cefcconnectorratingentry> > cefcconnectorratingentry;
        
}; // CiscoEntityFruControlMib::Cefcconnectorratingtable


class CiscoEntityFruControlMib::Cefcconnectorratingtable::Cefcconnectorratingentry : public ydk::Entity
{
    public:
        Cefcconnectorratingentry();
        ~Cefcconnectorratingentry();

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
        ydk::YLeaf cefcconnectorrating; //type: int32

}; // CiscoEntityFruControlMib::Cefcconnectorratingtable::Cefcconnectorratingentry


class CiscoEntityFruControlMib::Cefcmodulepowerconsumptiontable : public ydk::Entity
{
    public:
        Cefcmodulepowerconsumptiontable();
        ~Cefcmodulepowerconsumptiontable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cefcmodulepowerconsumptionentry; //type: CiscoEntityFruControlMib::Cefcmodulepowerconsumptiontable::Cefcmodulepowerconsumptionentry

        std::vector<std::shared_ptr<CISCO_ENTITY_FRU_CONTROL_MIB::CiscoEntityFruControlMib::Cefcmodulepowerconsumptiontable::Cefcmodulepowerconsumptionentry> > cefcmodulepowerconsumptionentry;
        
}; // CiscoEntityFruControlMib::Cefcmodulepowerconsumptiontable


class CiscoEntityFruControlMib::Cefcmodulepowerconsumptiontable::Cefcmodulepowerconsumptionentry : public ydk::Entity
{
    public:
        Cefcmodulepowerconsumptionentry();
        ~Cefcmodulepowerconsumptionentry();

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
        ydk::YLeaf cefcmodulepowerconsumption; //type: int32

}; // CiscoEntityFruControlMib::Cefcmodulepowerconsumptiontable::Cefcmodulepowerconsumptionentry

class Powerredundancytype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf notsupported;
        static const ydk::Enum::YLeaf redundant;
        static const ydk::Enum::YLeaf combined;
        static const ydk::Enum::YLeaf nonRedundant;
        static const ydk::Enum::YLeaf psRedundant;
        static const ydk::Enum::YLeaf inPwrSrcRedundant;
        static const ydk::Enum::YLeaf psRedundantSingleInput;

};

class Poweradmintype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf on;
        static const ydk::Enum::YLeaf off;
        static const ydk::Enum::YLeaf inlineAuto;
        static const ydk::Enum::YLeaf inlineOn;
        static const ydk::Enum::YLeaf powerCycle;

};

class Moduleopertype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf ok;
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf okButDiagFailed;
        static const ydk::Enum::YLeaf boot;
        static const ydk::Enum::YLeaf selfTest;
        static const ydk::Enum::YLeaf failed;
        static const ydk::Enum::YLeaf missing;
        static const ydk::Enum::YLeaf mismatchWithParent;
        static const ydk::Enum::YLeaf mismatchConfig;
        static const ydk::Enum::YLeaf diagFailed;
        static const ydk::Enum::YLeaf dormant;
        static const ydk::Enum::YLeaf outOfServiceAdmin;
        static const ydk::Enum::YLeaf outOfServiceEnvTemp;
        static const ydk::Enum::YLeaf poweredDown;
        static const ydk::Enum::YLeaf poweredUp;
        static const ydk::Enum::YLeaf powerDenied;
        static const ydk::Enum::YLeaf powerCycled;
        static const ydk::Enum::YLeaf okButPowerOverWarning;
        static const ydk::Enum::YLeaf okButPowerOverCritical;
        static const ydk::Enum::YLeaf syncInProgress;
        static const ydk::Enum::YLeaf upgrading;
        static const ydk::Enum::YLeaf okButAuthFailed;
        static const ydk::Enum::YLeaf mdr;
        static const ydk::Enum::YLeaf fwMismatchFound;
        static const ydk::Enum::YLeaf fwDownloadSuccess;
        static const ydk::Enum::YLeaf fwDownloadFailure;

};

class Frucoolingunit : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cfm;
        static const ydk::Enum::YLeaf watts;

};

class Moduleresetreasontype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf powerUp;
        static const ydk::Enum::YLeaf parityError;
        static const ydk::Enum::YLeaf clearConfigReset;
        static const ydk::Enum::YLeaf manualReset;
        static const ydk::Enum::YLeaf watchDogTimeoutReset;
        static const ydk::Enum::YLeaf resourceOverflowReset;
        static const ydk::Enum::YLeaf missingTaskReset;
        static const ydk::Enum::YLeaf lowVoltageReset;
        static const ydk::Enum::YLeaf controllerReset;
        static const ydk::Enum::YLeaf systemReset;
        static const ydk::Enum::YLeaf switchoverReset;
        static const ydk::Enum::YLeaf upgradeReset;
        static const ydk::Enum::YLeaf downgradeReset;
        static const ydk::Enum::YLeaf cacheErrorReset;
        static const ydk::Enum::YLeaf deviceDriverReset;
        static const ydk::Enum::YLeaf softwareExceptionReset;
        static const ydk::Enum::YLeaf restoreConfigReset;
        static const ydk::Enum::YLeaf abortRevReset;
        static const ydk::Enum::YLeaf burnBootReset;
        static const ydk::Enum::YLeaf standbyCdHealthierReset;
        static const ydk::Enum::YLeaf nonNativeConfigClearReset;
        static const ydk::Enum::YLeaf memoryProtectionErrorReset;

};

class Poweropertype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf offEnvOther;
        static const ydk::Enum::YLeaf on;
        static const ydk::Enum::YLeaf offAdmin;
        static const ydk::Enum::YLeaf offDenied;
        static const ydk::Enum::YLeaf offEnvPower;
        static const ydk::Enum::YLeaf offEnvTemp;
        static const ydk::Enum::YLeaf offEnvFan;
        static const ydk::Enum::YLeaf failed;
        static const ydk::Enum::YLeaf onButFanFail;
        static const ydk::Enum::YLeaf offCooling;
        static const ydk::Enum::YLeaf offConnectorRating;
        static const ydk::Enum::YLeaf onButInlinePowerFail;

};

class Moduleadmintype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf reset;
        static const ydk::Enum::YLeaf outOfServiceAdmin;

};

class CiscoEntityFruControlMib::Cefcfrupowersupplygrouptable::Cefcfrupowersupplygroupentry::Cefcpowernonredundantreason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf notApplicable;
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf singleSupply;
        static const ydk::Enum::YLeaf mismatchedSupplies;
        static const ydk::Enum::YLeaf supplyError;

};

class CiscoEntityFruControlMib::Cefcmodulelocalswitchingtable::Cefcmodulelocalswitchingentry::Cefcmodulelocalswitchingmode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class CiscoEntityFruControlMib::Cefcfantraystatustable::Cefcfantraystatusentry::Cefcfantrayoperstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf warning;

};

class CiscoEntityFruControlMib::Cefcphysicaltable::Cefcphysicalentry::Cefcphysicalstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf supported;
        static const ydk::Enum::YLeaf unsupported;
        static const ydk::Enum::YLeaf incompatible;

};

class CiscoEntityFruControlMib::Cefcpowersupplyinputtable::Cefcpowersupplyinputentry::Cefcpowersupplyinputtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf acLow;
        static const ydk::Enum::YLeaf acHigh;
        static const ydk::Enum::YLeaf dcLow;
        static const ydk::Enum::YLeaf dcHigh;

};


}
}

#endif /* _CISCO_ENTITY_FRU_CONTROL_MIB_ */

