#ifndef _CISCO_IOS_XR_MANAGEABILITY_OBJECT_TRACKING_CFG_
#define _CISCO_IOS_XR_MANAGEABILITY_OBJECT_TRACKING_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace Cisco_IOS_XR_manageability_object_tracking_cfg {

class ObjectTrackings : public Entity
{
    public:
        ObjectTrackings();
        ~ObjectTrackings();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;



        class ObjectTracking; //type: ObjectTrackings::ObjectTracking

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_object_tracking_cfg::ObjectTrackings::ObjectTracking> > object_tracking;


}; // ObjectTrackings


class ObjectTrackings::ObjectTracking : public Entity
{
    public:
        ObjectTracking();
        ~ObjectTracking();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf track_name; //type: string
        YLeaf delay_up; //type: uint32
        YLeaf enable; //type: empty
        YLeaf delay_down; //type: uint32
        YLeaf type_interface_enable; //type: empty
        YLeaf type_route_enable; //type: empty
        YLeaf type_boolean_list_and_enable; //type: empty
        YLeaf type_boolean_list_or_enable; //type: empty

        class TypeInterface; //type: ObjectTrackings::ObjectTracking::TypeInterface
        class TypeList; //type: ObjectTrackings::ObjectTracking::TypeList
        class TypeRoute; //type: ObjectTrackings::ObjectTracking::TypeRoute
        class TypeBooleanList; //type: ObjectTrackings::ObjectTracking::TypeBooleanList

        std::shared_ptr<Cisco_IOS_XR_manageability_object_tracking_cfg::ObjectTrackings::ObjectTracking::TypeBooleanList> type_boolean_list;
        std::shared_ptr<Cisco_IOS_XR_manageability_object_tracking_cfg::ObjectTrackings::ObjectTracking::TypeInterface> type_interface;
        std::shared_ptr<Cisco_IOS_XR_manageability_object_tracking_cfg::ObjectTrackings::ObjectTracking::TypeList> type_list;
        std::shared_ptr<Cisco_IOS_XR_manageability_object_tracking_cfg::ObjectTrackings::ObjectTracking::TypeRoute> type_route;


}; // ObjectTrackings::ObjectTracking


class ObjectTrackings::ObjectTracking::TypeInterface : public Entity
{
    public:
        TypeInterface();
        ~TypeInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface; //type: string



}; // ObjectTrackings::ObjectTracking::TypeInterface


class ObjectTrackings::ObjectTracking::TypeList : public Entity
{
    public:
        TypeList();
        ~TypeList();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ThresholdWeight; //type: ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight
        class ThresholdPercentageObject; //type: ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentageObject
        class ThresholdPercentage; //type: ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage
        class ThresholdWeightObject; //type: ObjectTrackings::ObjectTracking::TypeList::ThresholdWeightObject

        std::shared_ptr<Cisco_IOS_XR_manageability_object_tracking_cfg::ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage> threshold_percentage;
        std::shared_ptr<Cisco_IOS_XR_manageability_object_tracking_cfg::ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentageObject> threshold_percentage_object;
        std::shared_ptr<Cisco_IOS_XR_manageability_object_tracking_cfg::ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight> threshold_weight;
        std::shared_ptr<Cisco_IOS_XR_manageability_object_tracking_cfg::ObjectTrackings::ObjectTracking::TypeList::ThresholdWeightObject> threshold_weight_object;


}; // ObjectTrackings::ObjectTracking::TypeList


class ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight : public Entity
{
    public:
        ThresholdWeight();
        ~ThresholdWeight();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ThresholdLimits; //type: ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits

        std::shared_ptr<Cisco_IOS_XR_manageability_object_tracking_cfg::ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits> threshold_limits;


}; // ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight


class ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits : public Entity
{
    public:
        ThresholdLimits();
        ~ThresholdLimits();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ThresholdUpValues; //type: ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::ThresholdUpValues

        std::shared_ptr<Cisco_IOS_XR_manageability_object_tracking_cfg::ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::ThresholdUpValues> threshold_up_values;


}; // ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits


class ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::ThresholdUpValues : public Entity
{
    public:
        ThresholdUpValues();
        ~ThresholdUpValues();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ThresholdUpValue; //type: ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::ThresholdUpValues::ThresholdUpValue

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_object_tracking_cfg::ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::ThresholdUpValues::ThresholdUpValue> > threshold_up_value;


}; // ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::ThresholdUpValues


class ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::ThresholdUpValues::ThresholdUpValue : public Entity
{
    public:
        ThresholdUpValue();
        ~ThresholdUpValue();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf up; //type: int32
        YLeaf threshold_down; //type: int32



}; // ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::ThresholdUpValues::ThresholdUpValue


class ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentageObject : public Entity
{
    public:
        ThresholdPercentageObject();
        ~ThresholdPercentageObject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Object; //type: ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentageObject::Object

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_object_tracking_cfg::ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentageObject::Object> > object;


}; // ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentageObject


class ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentageObject::Object : public Entity
{
    public:
        Object();
        ~Object();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf object; //type: string
        YLeaf object_weight; //type: int32



}; // ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentageObject::Object


class ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage : public Entity
{
    public:
        ThresholdPercentage();
        ~ThresholdPercentage();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ThresholdLimits; //type: ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits

        std::shared_ptr<Cisco_IOS_XR_manageability_object_tracking_cfg::ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits> threshold_limits;


}; // ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage


class ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits : public Entity
{
    public:
        ThresholdLimits();
        ~ThresholdLimits();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ThresholdUpValues; //type: ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::ThresholdUpValues

        std::shared_ptr<Cisco_IOS_XR_manageability_object_tracking_cfg::ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::ThresholdUpValues> threshold_up_values;


}; // ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits


class ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::ThresholdUpValues : public Entity
{
    public:
        ThresholdUpValues();
        ~ThresholdUpValues();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ThresholdUpValue; //type: ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::ThresholdUpValues::ThresholdUpValue

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_object_tracking_cfg::ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::ThresholdUpValues::ThresholdUpValue> > threshold_up_value;


}; // ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::ThresholdUpValues


class ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::ThresholdUpValues::ThresholdUpValue : public Entity
{
    public:
        ThresholdUpValue();
        ~ThresholdUpValue();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf up; //type: int32
        YLeaf threshold_down; //type: int32



}; // ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::ThresholdUpValues::ThresholdUpValue


class ObjectTrackings::ObjectTracking::TypeList::ThresholdWeightObject : public Entity
{
    public:
        ThresholdWeightObject();
        ~ThresholdWeightObject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Object; //type: ObjectTrackings::ObjectTracking::TypeList::ThresholdWeightObject::Object

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_object_tracking_cfg::ObjectTrackings::ObjectTracking::TypeList::ThresholdWeightObject::Object> > object;


}; // ObjectTrackings::ObjectTracking::TypeList::ThresholdWeightObject


class ObjectTrackings::ObjectTracking::TypeList::ThresholdWeightObject::Object : public Entity
{
    public:
        Object();
        ~Object();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf object; //type: string
        YLeaf object_weight; //type: int32



}; // ObjectTrackings::ObjectTracking::TypeList::ThresholdWeightObject::Object


class ObjectTrackings::ObjectTracking::TypeRoute : public Entity
{
    public:
        TypeRoute();
        ~TypeRoute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vrf; //type: string

        class IpAddress; //type: ObjectTrackings::ObjectTracking::TypeRoute::IpAddress

        std::shared_ptr<Cisco_IOS_XR_manageability_object_tracking_cfg::ObjectTrackings::ObjectTracking::TypeRoute::IpAddress> ip_address; // presence node


}; // ObjectTrackings::ObjectTracking::TypeRoute


class ObjectTrackings::ObjectTracking::TypeRoute::IpAddress : public Entity
{
    public:
        IpAddress();
        ~IpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf mask; //type: string



}; // ObjectTrackings::ObjectTracking::TypeRoute::IpAddress


class ObjectTrackings::ObjectTracking::TypeBooleanList : public Entity
{
    public:
        TypeBooleanList();
        ~TypeBooleanList();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OrObjects; //type: ObjectTrackings::ObjectTracking::TypeBooleanList::OrObjects
        class AndObjects; //type: ObjectTrackings::ObjectTracking::TypeBooleanList::AndObjects

        std::shared_ptr<Cisco_IOS_XR_manageability_object_tracking_cfg::ObjectTrackings::ObjectTracking::TypeBooleanList::AndObjects> and_objects;
        std::shared_ptr<Cisco_IOS_XR_manageability_object_tracking_cfg::ObjectTrackings::ObjectTracking::TypeBooleanList::OrObjects> or_objects;


}; // ObjectTrackings::ObjectTracking::TypeBooleanList


class ObjectTrackings::ObjectTracking::TypeBooleanList::OrObjects : public Entity
{
    public:
        OrObjects();
        ~OrObjects();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OrObject; //type: ObjectTrackings::ObjectTracking::TypeBooleanList::OrObjects::OrObject

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_object_tracking_cfg::ObjectTrackings::ObjectTracking::TypeBooleanList::OrObjects::OrObject> > or_object;


}; // ObjectTrackings::ObjectTracking::TypeBooleanList::OrObjects


class ObjectTrackings::ObjectTracking::TypeBooleanList::OrObjects::OrObject : public Entity
{
    public:
        OrObject();
        ~OrObject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf object; //type: string
        YLeaf object_sign; //type: ObjectTrackingBooleanSignEnum



}; // ObjectTrackings::ObjectTracking::TypeBooleanList::OrObjects::OrObject


class ObjectTrackings::ObjectTracking::TypeBooleanList::AndObjects : public Entity
{
    public:
        AndObjects();
        ~AndObjects();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AndObject; //type: ObjectTrackings::ObjectTracking::TypeBooleanList::AndObjects::AndObject

        std::vector<std::shared_ptr<Cisco_IOS_XR_manageability_object_tracking_cfg::ObjectTrackings::ObjectTracking::TypeBooleanList::AndObjects::AndObject> > and_object;


}; // ObjectTrackings::ObjectTracking::TypeBooleanList::AndObjects


class ObjectTrackings::ObjectTracking::TypeBooleanList::AndObjects::AndObject : public Entity
{
    public:
        AndObject();
        ~AndObject();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf object_name; //type: string
        YLeaf object_sign; //type: ObjectTrackingBooleanSignEnum



}; // ObjectTrackings::ObjectTracking::TypeBooleanList::AndObjects::AndObject


}
}

#endif /* _CISCO_IOS_XR_MANAGEABILITY_OBJECT_TRACKING_CFG_ */

