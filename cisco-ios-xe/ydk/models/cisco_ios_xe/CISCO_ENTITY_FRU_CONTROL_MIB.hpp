#ifndef _CISCO_ENTITY_FRU_CONTROL_MIB_
#define _CISCO_ENTITY_FRU_CONTROL_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_ENTITY_FRU_CONTROL_MIB {

class CISCOENTITYFRUCONTROLMIB : public ydk::Entity
{
    public:
        CISCOENTITYFRUCONTROLMIB();
        ~CISCOENTITYFRUCONTROLMIB();

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

        class Cefcfrupower; //type: CISCOENTITYFRUCONTROLMIB::Cefcfrupower
        class Cefcmibnotificationenables; //type: CISCOENTITYFRUCONTROLMIB::Cefcmibnotificationenables
        class Cefcfrupowersupplygrouptable; //type: CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplygrouptable
        class Cefcfrupowerstatustable; //type: CISCOENTITYFRUCONTROLMIB::Cefcfrupowerstatustable
        class Cefcfrupowersupplyvaluetable; //type: CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplyvaluetable
        class Cefcmoduletable; //type: CISCOENTITYFRUCONTROLMIB::Cefcmoduletable
        class Cefcintellimoduletable; //type: CISCOENTITYFRUCONTROLMIB::Cefcintellimoduletable
        class Cefcmodulelocalswitchingtable; //type: CISCOENTITYFRUCONTROLMIB::Cefcmodulelocalswitchingtable
        class Cefcfantraystatustable; //type: CISCOENTITYFRUCONTROLMIB::Cefcfantraystatustable
        class Cefcphysicaltable; //type: CISCOENTITYFRUCONTROLMIB::Cefcphysicaltable
        class Cefcpowersupplyinputtable; //type: CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyinputtable
        class Cefcpowersupplyoutputtable; //type: CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyoutputtable
        class Cefcchassiscoolingtable; //type: CISCOENTITYFRUCONTROLMIB::Cefcchassiscoolingtable
        class Cefcfancoolingtable; //type: CISCOENTITYFRUCONTROLMIB::Cefcfancoolingtable
        class Cefcmodulecoolingtable; //type: CISCOENTITYFRUCONTROLMIB::Cefcmodulecoolingtable
        class Cefcfancoolingcaptable; //type: CISCOENTITYFRUCONTROLMIB::Cefcfancoolingcaptable
        class Cefcconnectorratingtable; //type: CISCOENTITYFRUCONTROLMIB::Cefcconnectorratingtable
        class Cefcmodulepowerconsumptiontable; //type: CISCOENTITYFRUCONTROLMIB::Cefcmodulepowerconsumptiontable

        std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_FRU_CONTROL_MIB::CISCOENTITYFRUCONTROLMIB::Cefcchassiscoolingtable> cefcchassiscoolingtable;
        std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_FRU_CONTROL_MIB::CISCOENTITYFRUCONTROLMIB::Cefcconnectorratingtable> cefcconnectorratingtable;
        std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_FRU_CONTROL_MIB::CISCOENTITYFRUCONTROLMIB::Cefcfancoolingcaptable> cefcfancoolingcaptable;
        std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_FRU_CONTROL_MIB::CISCOENTITYFRUCONTROLMIB::Cefcfancoolingtable> cefcfancoolingtable;
        std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_FRU_CONTROL_MIB::CISCOENTITYFRUCONTROLMIB::Cefcfantraystatustable> cefcfantraystatustable;
        std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_FRU_CONTROL_MIB::CISCOENTITYFRUCONTROLMIB::Cefcfrupower> cefcfrupower;
        std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_FRU_CONTROL_MIB::CISCOENTITYFRUCONTROLMIB::Cefcfrupowerstatustable> cefcfrupowerstatustable;
        std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_FRU_CONTROL_MIB::CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplygrouptable> cefcfrupowersupplygrouptable;
        std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_FRU_CONTROL_MIB::CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplyvaluetable> cefcfrupowersupplyvaluetable;
        std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_FRU_CONTROL_MIB::CISCOENTITYFRUCONTROLMIB::Cefcintellimoduletable> cefcintellimoduletable;
        std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_FRU_CONTROL_MIB::CISCOENTITYFRUCONTROLMIB::Cefcmibnotificationenables> cefcmibnotificationenables;
        std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_FRU_CONTROL_MIB::CISCOENTITYFRUCONTROLMIB::Cefcmodulecoolingtable> cefcmodulecoolingtable;
        std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_FRU_CONTROL_MIB::CISCOENTITYFRUCONTROLMIB::Cefcmodulelocalswitchingtable> cefcmodulelocalswitchingtable;
        std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_FRU_CONTROL_MIB::CISCOENTITYFRUCONTROLMIB::Cefcmodulepowerconsumptiontable> cefcmodulepowerconsumptiontable;
        std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_FRU_CONTROL_MIB::CISCOENTITYFRUCONTROLMIB::Cefcmoduletable> cefcmoduletable;
        std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_FRU_CONTROL_MIB::CISCOENTITYFRUCONTROLMIB::Cefcphysicaltable> cefcphysicaltable;
        std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_FRU_CONTROL_MIB::CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyinputtable> cefcpowersupplyinputtable;
        std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_FRU_CONTROL_MIB::CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyoutputtable> cefcpowersupplyoutputtable;
        
}; // CISCOENTITYFRUCONTROLMIB


class CISCOENTITYFRUCONTROLMIB::Cefcchassiscoolingtable : public ydk::Entity
{
    public:
        Cefcchassiscoolingtable();
        ~Cefcchassiscoolingtable();

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

        class Cefcchassiscoolingentry; //type: CISCOENTITYFRUCONTROLMIB::Cefcchassiscoolingtable::Cefcchassiscoolingentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_FRU_CONTROL_MIB::CISCOENTITYFRUCONTROLMIB::Cefcchassiscoolingtable::Cefcchassiscoolingentry> > cefcchassiscoolingentry;
        
}; // CISCOENTITYFRUCONTROLMIB::Cefcchassiscoolingtable


class CISCOENTITYFRUCONTROLMIB::Cefcchassiscoolingtable::Cefcchassiscoolingentry : public ydk::Entity
{
    public:
        Cefcchassiscoolingentry();
        ~Cefcchassiscoolingentry();

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

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::Entphysicaltable::Entphysicalentry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf cefcchassisperslotcoolingcap; //type: uint32
        ydk::YLeaf cefcchassisperslotcoolingunit; //type: FRUCoolingUnit

}; // CISCOENTITYFRUCONTROLMIB::Cefcchassiscoolingtable::Cefcchassiscoolingentry


class CISCOENTITYFRUCONTROLMIB::Cefcconnectorratingtable : public ydk::Entity
{
    public:
        Cefcconnectorratingtable();
        ~Cefcconnectorratingtable();

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

        class Cefcconnectorratingentry; //type: CISCOENTITYFRUCONTROLMIB::Cefcconnectorratingtable::Cefcconnectorratingentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_FRU_CONTROL_MIB::CISCOENTITYFRUCONTROLMIB::Cefcconnectorratingtable::Cefcconnectorratingentry> > cefcconnectorratingentry;
        
}; // CISCOENTITYFRUCONTROLMIB::Cefcconnectorratingtable


class CISCOENTITYFRUCONTROLMIB::Cefcconnectorratingtable::Cefcconnectorratingentry : public ydk::Entity
{
    public:
        Cefcconnectorratingentry();
        ~Cefcconnectorratingentry();

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

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::Entphysicaltable::Entphysicalentry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf cefcconnectorrating; //type: int32

}; // CISCOENTITYFRUCONTROLMIB::Cefcconnectorratingtable::Cefcconnectorratingentry


class CISCOENTITYFRUCONTROLMIB::Cefcfancoolingcaptable : public ydk::Entity
{
    public:
        Cefcfancoolingcaptable();
        ~Cefcfancoolingcaptable();

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

        class Cefcfancoolingcapentry; //type: CISCOENTITYFRUCONTROLMIB::Cefcfancoolingcaptable::Cefcfancoolingcapentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_FRU_CONTROL_MIB::CISCOENTITYFRUCONTROLMIB::Cefcfancoolingcaptable::Cefcfancoolingcapentry> > cefcfancoolingcapentry;
        
}; // CISCOENTITYFRUCONTROLMIB::Cefcfancoolingcaptable


class CISCOENTITYFRUCONTROLMIB::Cefcfancoolingcaptable::Cefcfancoolingcapentry : public ydk::Entity
{
    public:
        Cefcfancoolingcapentry();
        ~Cefcfancoolingcapentry();

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

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::Entphysicaltable::Entphysicalentry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf cefcfancoolingcapindex; //type: uint32
        ydk::YLeaf cefcfancoolingcapmodedescr; //type: string
        ydk::YLeaf cefcfancoolingcapcapacity; //type: uint32
        ydk::YLeaf cefcfancoolingcapcurrent; //type: int32
        ydk::YLeaf cefcfancoolingcapcapacityunit; //type: FRUCoolingUnit

}; // CISCOENTITYFRUCONTROLMIB::Cefcfancoolingcaptable::Cefcfancoolingcapentry


class CISCOENTITYFRUCONTROLMIB::Cefcfancoolingtable : public ydk::Entity
{
    public:
        Cefcfancoolingtable();
        ~Cefcfancoolingtable();

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

        class Cefcfancoolingentry; //type: CISCOENTITYFRUCONTROLMIB::Cefcfancoolingtable::Cefcfancoolingentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_FRU_CONTROL_MIB::CISCOENTITYFRUCONTROLMIB::Cefcfancoolingtable::Cefcfancoolingentry> > cefcfancoolingentry;
        
}; // CISCOENTITYFRUCONTROLMIB::Cefcfancoolingtable


class CISCOENTITYFRUCONTROLMIB::Cefcfancoolingtable::Cefcfancoolingentry : public ydk::Entity
{
    public:
        Cefcfancoolingentry();
        ~Cefcfancoolingentry();

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

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::Entphysicaltable::Entphysicalentry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf cefcfancoolingcapacity; //type: uint32
        ydk::YLeaf cefcfancoolingcapacityunit; //type: FRUCoolingUnit

}; // CISCOENTITYFRUCONTROLMIB::Cefcfancoolingtable::Cefcfancoolingentry


class CISCOENTITYFRUCONTROLMIB::Cefcfantraystatustable : public ydk::Entity
{
    public:
        Cefcfantraystatustable();
        ~Cefcfantraystatustable();

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

        class Cefcfantraystatusentry; //type: CISCOENTITYFRUCONTROLMIB::Cefcfantraystatustable::Cefcfantraystatusentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_FRU_CONTROL_MIB::CISCOENTITYFRUCONTROLMIB::Cefcfantraystatustable::Cefcfantraystatusentry> > cefcfantraystatusentry;
        
}; // CISCOENTITYFRUCONTROLMIB::Cefcfantraystatustable


class CISCOENTITYFRUCONTROLMIB::Cefcfantraystatustable::Cefcfantraystatusentry : public ydk::Entity
{
    public:
        Cefcfantraystatusentry();
        ~Cefcfantraystatusentry();

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

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::Entphysicaltable::Entphysicalentry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf cefcfantrayoperstatus; //type: Cefcfantrayoperstatus
        class Cefcfantrayoperstatus;

}; // CISCOENTITYFRUCONTROLMIB::Cefcfantraystatustable::Cefcfantraystatusentry


class CISCOENTITYFRUCONTROLMIB::Cefcfrupower : public ydk::Entity
{
    public:
        Cefcfrupower();
        ~Cefcfrupower();

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

        ydk::YLeaf cefcmaxdefaultinlinepower; //type: int32
        ydk::YLeaf cefcmaxdefaulthighinlinepower; //type: uint32

}; // CISCOENTITYFRUCONTROLMIB::Cefcfrupower


class CISCOENTITYFRUCONTROLMIB::Cefcfrupowerstatustable : public ydk::Entity
{
    public:
        Cefcfrupowerstatustable();
        ~Cefcfrupowerstatustable();

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

        class Cefcfrupowerstatusentry; //type: CISCOENTITYFRUCONTROLMIB::Cefcfrupowerstatustable::Cefcfrupowerstatusentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_FRU_CONTROL_MIB::CISCOENTITYFRUCONTROLMIB::Cefcfrupowerstatustable::Cefcfrupowerstatusentry> > cefcfrupowerstatusentry;
        
}; // CISCOENTITYFRUCONTROLMIB::Cefcfrupowerstatustable


class CISCOENTITYFRUCONTROLMIB::Cefcfrupowerstatustable::Cefcfrupowerstatusentry : public ydk::Entity
{
    public:
        Cefcfrupowerstatusentry();
        ~Cefcfrupowerstatusentry();

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

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::Entphysicaltable::Entphysicalentry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf cefcfrupoweradminstatus; //type: PowerAdminType
        ydk::YLeaf cefcfrupoweroperstatus; //type: PowerOperType
        ydk::YLeaf cefcfrucurrent; //type: int32
        ydk::YLeaf cefcfrupowercapability; //type: Cefcfrupowercapability
        ydk::YLeaf cefcfrurealtimecurrent; //type: int32

}; // CISCOENTITYFRUCONTROLMIB::Cefcfrupowerstatustable::Cefcfrupowerstatusentry


class CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplygrouptable : public ydk::Entity
{
    public:
        Cefcfrupowersupplygrouptable();
        ~Cefcfrupowersupplygrouptable();

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

        class Cefcfrupowersupplygroupentry; //type: CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplygrouptable::Cefcfrupowersupplygroupentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_FRU_CONTROL_MIB::CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplygrouptable::Cefcfrupowersupplygroupentry> > cefcfrupowersupplygroupentry;
        
}; // CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplygrouptable


class CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplygrouptable::Cefcfrupowersupplygroupentry : public ydk::Entity
{
    public:
        Cefcfrupowersupplygroupentry();
        ~Cefcfrupowersupplygroupentry();

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

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::Entphysicaltable::Entphysicalentry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf cefcpowerredundancymode; //type: PowerRedundancyType
        ydk::YLeaf cefcpowerunits; //type: string
        ydk::YLeaf cefctotalavailablecurrent; //type: int32
        ydk::YLeaf cefctotaldrawncurrent; //type: int32
        ydk::YLeaf cefcpowerredundancyopermode; //type: PowerRedundancyType
        ydk::YLeaf cefcpowernonredundantreason; //type: Cefcpowernonredundantreason
        ydk::YLeaf cefctotaldrawninlinecurrent; //type: int32
        class Cefcpowernonredundantreason;

}; // CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplygrouptable::Cefcfrupowersupplygroupentry


class CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplyvaluetable : public ydk::Entity
{
    public:
        Cefcfrupowersupplyvaluetable();
        ~Cefcfrupowersupplyvaluetable();

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

        class Cefcfrupowersupplyvalueentry; //type: CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplyvaluetable::Cefcfrupowersupplyvalueentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_FRU_CONTROL_MIB::CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplyvaluetable::Cefcfrupowersupplyvalueentry> > cefcfrupowersupplyvalueentry;
        
}; // CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplyvaluetable


class CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplyvaluetable::Cefcfrupowersupplyvalueentry : public ydk::Entity
{
    public:
        Cefcfrupowersupplyvalueentry();
        ~Cefcfrupowersupplyvalueentry();

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

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::Entphysicaltable::Entphysicalentry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf cefcfrutotalsystemcurrent; //type: int32
        ydk::YLeaf cefcfrudrawnsystemcurrent; //type: int32
        ydk::YLeaf cefcfrutotalinlinecurrent; //type: int32
        ydk::YLeaf cefcfrudrawninlinecurrent; //type: int32

}; // CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplyvaluetable::Cefcfrupowersupplyvalueentry


class CISCOENTITYFRUCONTROLMIB::Cefcintellimoduletable : public ydk::Entity
{
    public:
        Cefcintellimoduletable();
        ~Cefcintellimoduletable();

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

        class Cefcintellimoduleentry; //type: CISCOENTITYFRUCONTROLMIB::Cefcintellimoduletable::Cefcintellimoduleentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_FRU_CONTROL_MIB::CISCOENTITYFRUCONTROLMIB::Cefcintellimoduletable::Cefcintellimoduleentry> > cefcintellimoduleentry;
        
}; // CISCOENTITYFRUCONTROLMIB::Cefcintellimoduletable


class CISCOENTITYFRUCONTROLMIB::Cefcintellimoduletable::Cefcintellimoduleentry : public ydk::Entity
{
    public:
        Cefcintellimoduleentry();
        ~Cefcintellimoduleentry();

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

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::Entphysicaltable::Entphysicalentry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf cefcintellimoduleipaddrtype; //type: InetAddressType
        ydk::YLeaf cefcintellimoduleipaddr; //type: binary

}; // CISCOENTITYFRUCONTROLMIB::Cefcintellimoduletable::Cefcintellimoduleentry


class CISCOENTITYFRUCONTROLMIB::Cefcmibnotificationenables : public ydk::Entity
{
    public:
        Cefcmibnotificationenables();
        ~Cefcmibnotificationenables();

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

        ydk::YLeaf cefcmibenablestatusnotification; //type: boolean
        ydk::YLeaf cefcenablepsoutputchangenotif; //type: boolean

}; // CISCOENTITYFRUCONTROLMIB::Cefcmibnotificationenables


class CISCOENTITYFRUCONTROLMIB::Cefcmodulecoolingtable : public ydk::Entity
{
    public:
        Cefcmodulecoolingtable();
        ~Cefcmodulecoolingtable();

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

        class Cefcmodulecoolingentry; //type: CISCOENTITYFRUCONTROLMIB::Cefcmodulecoolingtable::Cefcmodulecoolingentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_FRU_CONTROL_MIB::CISCOENTITYFRUCONTROLMIB::Cefcmodulecoolingtable::Cefcmodulecoolingentry> > cefcmodulecoolingentry;
        
}; // CISCOENTITYFRUCONTROLMIB::Cefcmodulecoolingtable


class CISCOENTITYFRUCONTROLMIB::Cefcmodulecoolingtable::Cefcmodulecoolingentry : public ydk::Entity
{
    public:
        Cefcmodulecoolingentry();
        ~Cefcmodulecoolingentry();

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

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::Entphysicaltable::Entphysicalentry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf cefcmodulecooling; //type: uint32
        ydk::YLeaf cefcmodulecoolingunit; //type: FRUCoolingUnit

}; // CISCOENTITYFRUCONTROLMIB::Cefcmodulecoolingtable::Cefcmodulecoolingentry


class CISCOENTITYFRUCONTROLMIB::Cefcmodulelocalswitchingtable : public ydk::Entity
{
    public:
        Cefcmodulelocalswitchingtable();
        ~Cefcmodulelocalswitchingtable();

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

        class Cefcmodulelocalswitchingentry; //type: CISCOENTITYFRUCONTROLMIB::Cefcmodulelocalswitchingtable::Cefcmodulelocalswitchingentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_FRU_CONTROL_MIB::CISCOENTITYFRUCONTROLMIB::Cefcmodulelocalswitchingtable::Cefcmodulelocalswitchingentry> > cefcmodulelocalswitchingentry;
        
}; // CISCOENTITYFRUCONTROLMIB::Cefcmodulelocalswitchingtable


class CISCOENTITYFRUCONTROLMIB::Cefcmodulelocalswitchingtable::Cefcmodulelocalswitchingentry : public ydk::Entity
{
    public:
        Cefcmodulelocalswitchingentry();
        ~Cefcmodulelocalswitchingentry();

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

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::Entphysicaltable::Entphysicalentry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf cefcmodulelocalswitchingmode; //type: Cefcmodulelocalswitchingmode
        class Cefcmodulelocalswitchingmode;

}; // CISCOENTITYFRUCONTROLMIB::Cefcmodulelocalswitchingtable::Cefcmodulelocalswitchingentry


class CISCOENTITYFRUCONTROLMIB::Cefcmodulepowerconsumptiontable : public ydk::Entity
{
    public:
        Cefcmodulepowerconsumptiontable();
        ~Cefcmodulepowerconsumptiontable();

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

        class Cefcmodulepowerconsumptionentry; //type: CISCOENTITYFRUCONTROLMIB::Cefcmodulepowerconsumptiontable::Cefcmodulepowerconsumptionentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_FRU_CONTROL_MIB::CISCOENTITYFRUCONTROLMIB::Cefcmodulepowerconsumptiontable::Cefcmodulepowerconsumptionentry> > cefcmodulepowerconsumptionentry;
        
}; // CISCOENTITYFRUCONTROLMIB::Cefcmodulepowerconsumptiontable


class CISCOENTITYFRUCONTROLMIB::Cefcmodulepowerconsumptiontable::Cefcmodulepowerconsumptionentry : public ydk::Entity
{
    public:
        Cefcmodulepowerconsumptionentry();
        ~Cefcmodulepowerconsumptionentry();

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

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::Entphysicaltable::Entphysicalentry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf cefcmodulepowerconsumption; //type: int32

}; // CISCOENTITYFRUCONTROLMIB::Cefcmodulepowerconsumptiontable::Cefcmodulepowerconsumptionentry


class CISCOENTITYFRUCONTROLMIB::Cefcmoduletable : public ydk::Entity
{
    public:
        Cefcmoduletable();
        ~Cefcmoduletable();

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

        class Cefcmoduleentry; //type: CISCOENTITYFRUCONTROLMIB::Cefcmoduletable::Cefcmoduleentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_FRU_CONTROL_MIB::CISCOENTITYFRUCONTROLMIB::Cefcmoduletable::Cefcmoduleentry> > cefcmoduleentry;
        
}; // CISCOENTITYFRUCONTROLMIB::Cefcmoduletable


class CISCOENTITYFRUCONTROLMIB::Cefcmoduletable::Cefcmoduleentry : public ydk::Entity
{
    public:
        Cefcmoduleentry();
        ~Cefcmoduleentry();

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

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::Entphysicaltable::Entphysicalentry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf cefcmoduleadminstatus; //type: ModuleAdminType
        ydk::YLeaf cefcmoduleoperstatus; //type: ModuleOperType
        ydk::YLeaf cefcmoduleresetreason; //type: ModuleResetReasonType
        ydk::YLeaf cefcmodulestatuslastchangetime; //type: uint32
        ydk::YLeaf cefcmodulelastclearconfigtime; //type: uint32
        ydk::YLeaf cefcmoduleresetreasondescription; //type: string
        ydk::YLeaf cefcmodulestatechangereasondescr; //type: string
        ydk::YLeaf cefcmoduleuptime; //type: uint32

}; // CISCOENTITYFRUCONTROLMIB::Cefcmoduletable::Cefcmoduleentry


class CISCOENTITYFRUCONTROLMIB::Cefcphysicaltable : public ydk::Entity
{
    public:
        Cefcphysicaltable();
        ~Cefcphysicaltable();

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

        class Cefcphysicalentry; //type: CISCOENTITYFRUCONTROLMIB::Cefcphysicaltable::Cefcphysicalentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_FRU_CONTROL_MIB::CISCOENTITYFRUCONTROLMIB::Cefcphysicaltable::Cefcphysicalentry> > cefcphysicalentry;
        
}; // CISCOENTITYFRUCONTROLMIB::Cefcphysicaltable


class CISCOENTITYFRUCONTROLMIB::Cefcphysicaltable::Cefcphysicalentry : public ydk::Entity
{
    public:
        Cefcphysicalentry();
        ~Cefcphysicalentry();

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

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::Entphysicaltable::Entphysicalentry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf cefcphysicalstatus; //type: Cefcphysicalstatus
        class Cefcphysicalstatus;

}; // CISCOENTITYFRUCONTROLMIB::Cefcphysicaltable::Cefcphysicalentry


class CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyinputtable : public ydk::Entity
{
    public:
        Cefcpowersupplyinputtable();
        ~Cefcpowersupplyinputtable();

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

        class Cefcpowersupplyinputentry; //type: CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyinputtable::Cefcpowersupplyinputentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_FRU_CONTROL_MIB::CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyinputtable::Cefcpowersupplyinputentry> > cefcpowersupplyinputentry;
        
}; // CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyinputtable


class CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyinputtable::Cefcpowersupplyinputentry : public ydk::Entity
{
    public:
        Cefcpowersupplyinputentry();
        ~Cefcpowersupplyinputentry();

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

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::Entphysicaltable::Entphysicalentry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf cefcpowersupplyinputindex; //type: uint32
        ydk::YLeaf cefcpowersupplyinputtype; //type: Cefcpowersupplyinputtype
        class Cefcpowersupplyinputtype;

}; // CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyinputtable::Cefcpowersupplyinputentry


class CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyoutputtable : public ydk::Entity
{
    public:
        Cefcpowersupplyoutputtable();
        ~Cefcpowersupplyoutputtable();

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

        class Cefcpowersupplyoutputentry; //type: CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyoutputtable::Cefcpowersupplyoutputentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_ENTITY_FRU_CONTROL_MIB::CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyoutputtable::Cefcpowersupplyoutputentry> > cefcpowersupplyoutputentry;
        
}; // CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyoutputtable


class CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyoutputtable::Cefcpowersupplyoutputentry : public ydk::Entity
{
    public:
        Cefcpowersupplyoutputentry();
        ~Cefcpowersupplyoutputentry();

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

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::Entphysicaltable::Entphysicalentry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf cefcpsoutputmodeindex; //type: uint32
        ydk::YLeaf cefcpsoutputmodecurrent; //type: int32
        ydk::YLeaf cefcpsoutputmodeinoperation; //type: boolean

}; // CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyoutputtable::Cefcpowersupplyoutputentry

class ModuleOperType : public ydk::Enum
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

class PowerRedundancyType : public ydk::Enum
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

class ModuleResetReasonType : public ydk::Enum
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

class FRUCoolingUnit : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cfm;
        static const ydk::Enum::YLeaf watts;

};

class ModuleAdminType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf reset;
        static const ydk::Enum::YLeaf outOfServiceAdmin;

};

class PowerAdminType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf on;
        static const ydk::Enum::YLeaf off;
        static const ydk::Enum::YLeaf inlineAuto;
        static const ydk::Enum::YLeaf inlineOn;
        static const ydk::Enum::YLeaf powerCycle;

};

class PowerOperType : public ydk::Enum
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

class CISCOENTITYFRUCONTROLMIB::Cefcfantraystatustable::Cefcfantraystatusentry::Cefcfantrayoperstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf warning;

};

class CISCOENTITYFRUCONTROLMIB::Cefcfrupowersupplygrouptable::Cefcfrupowersupplygroupentry::Cefcpowernonredundantreason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf notApplicable;
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf singleSupply;
        static const ydk::Enum::YLeaf mismatchedSupplies;
        static const ydk::Enum::YLeaf supplyError;

};

class CISCOENTITYFRUCONTROLMIB::Cefcmodulelocalswitchingtable::Cefcmodulelocalswitchingentry::Cefcmodulelocalswitchingmode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class CISCOENTITYFRUCONTROLMIB::Cefcphysicaltable::Cefcphysicalentry::Cefcphysicalstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf supported;
        static const ydk::Enum::YLeaf unsupported;
        static const ydk::Enum::YLeaf incompatible;

};

class CISCOENTITYFRUCONTROLMIB::Cefcpowersupplyinputtable::Cefcpowersupplyinputentry::Cefcpowersupplyinputtype : public ydk::Enum
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

