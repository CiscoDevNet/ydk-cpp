#ifndef _CISCO_IOS_XR_MANAGEABILITY_OBJECT_TRACKING_CFG_
#define _CISCO_IOS_XR_MANAGEABILITY_OBJECT_TRACKING_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

#include "Cisco_IOS_XR_manageability_object_tracking_datatypes.hpp"

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
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class ObjectTracking : public Entity
    {
        public:
            ObjectTracking();
            ~ObjectTracking();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value track_name; //type: string
            Value delay_up; //type: uint32
            Value enable; //type: empty
            Value delay_down; //type: uint32
            Value type_interface_enable; //type: empty
            Value type_route_enable; //type: empty
            Value type_boolean_list_and_enable; //type: empty
            Value type_boolean_list_or_enable; //type: empty


        class TypeInterface : public Entity
        {
            public:
                TypeInterface();
                ~TypeInterface();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value interface; //type: string




        }; // ObjectTrackings::ObjectTracking::TypeInterface


        class TypeList : public Entity
        {
            public:
                TypeList();
                ~TypeList();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class ThresholdWeight : public Entity
            {
                public:
                    ThresholdWeight();
                    ~ThresholdWeight();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class ThresholdLimits : public Entity
                {
                    public:
                        ThresholdLimits();
                        ~ThresholdLimits();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class ThresholdUpValues : public Entity
                    {
                        public:
                            ThresholdUpValues();
                            ~ThresholdUpValues();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class ThresholdUpValue : public Entity
                        {
                            public:
                                ThresholdUpValue();
                                ~ThresholdUpValue();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value up; //type: int32
                                Value threshold_down; //type: int32




                        }; // ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::ThresholdUpValues::ThresholdUpValue


                            std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_cfg::ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::ThresholdUpValues::ThresholdUpValue> > threshold_up_value;


                    }; // ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::ThresholdUpValues


                        std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_cfg::ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits::ThresholdUpValues> threshold_up_values;


                }; // ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits


                    std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_cfg::ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight::ThresholdLimits> threshold_limits;


            }; // ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight


            class ThresholdPercentageObject : public Entity
            {
                public:
                    ThresholdPercentageObject();
                    ~ThresholdPercentageObject();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Object : public Entity
                {
                    public:
                        Object();
                        ~Object();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value object; //type: string
                        Value object_weight; //type: int32




                }; // ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentageObject::Object


                    std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_cfg::ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentageObject::Object> > object;


            }; // ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentageObject


            class ThresholdPercentage : public Entity
            {
                public:
                    ThresholdPercentage();
                    ~ThresholdPercentage();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class ThresholdLimits : public Entity
                {
                    public:
                        ThresholdLimits();
                        ~ThresholdLimits();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class ThresholdUpValues : public Entity
                    {
                        public:
                            ThresholdUpValues();
                            ~ThresholdUpValues();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class ThresholdUpValue : public Entity
                        {
                            public:
                                ThresholdUpValue();
                                ~ThresholdUpValue();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value up; //type: int32
                                Value threshold_down; //type: int32




                        }; // ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::ThresholdUpValues::ThresholdUpValue


                            std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_cfg::ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::ThresholdUpValues::ThresholdUpValue> > threshold_up_value;


                    }; // ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::ThresholdUpValues


                        std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_cfg::ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits::ThresholdUpValues> threshold_up_values;


                }; // ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits


                    std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_cfg::ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage::ThresholdLimits> threshold_limits;


            }; // ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage


            class ThresholdWeightObject : public Entity
            {
                public:
                    ThresholdWeightObject();
                    ~ThresholdWeightObject();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Object : public Entity
                {
                    public:
                        Object();
                        ~Object();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value object; //type: string
                        Value object_weight; //type: int32




                }; // ObjectTrackings::ObjectTracking::TypeList::ThresholdWeightObject::Object


                    std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_cfg::ObjectTrackings::ObjectTracking::TypeList::ThresholdWeightObject::Object> > object;


            }; // ObjectTrackings::ObjectTracking::TypeList::ThresholdWeightObject


                std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_cfg::ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentage> threshold_percentage;
                std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_cfg::ObjectTrackings::ObjectTracking::TypeList::ThresholdPercentageObject> threshold_percentage_object;
                std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_cfg::ObjectTrackings::ObjectTracking::TypeList::ThresholdWeight> threshold_weight;
                std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_cfg::ObjectTrackings::ObjectTracking::TypeList::ThresholdWeightObject> threshold_weight_object;


        }; // ObjectTrackings::ObjectTracking::TypeList


        class TypeRoute : public Entity
        {
            public:
                TypeRoute();
                ~TypeRoute();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value vrf; //type: string


            class IpAddress : public Entity
            {
                public:
                    IpAddress();
                    ~IpAddress();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value address; //type: string
                    Value mask; //type: string




            }; // ObjectTrackings::ObjectTracking::TypeRoute::IpAddress


                std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_cfg::ObjectTrackings::ObjectTracking::TypeRoute::IpAddress> ip_address; // presence node


        }; // ObjectTrackings::ObjectTracking::TypeRoute


        class TypeBooleanList : public Entity
        {
            public:
                TypeBooleanList();
                ~TypeBooleanList();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class OrObjects : public Entity
            {
                public:
                    OrObjects();
                    ~OrObjects();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class OrObject : public Entity
                {
                    public:
                        OrObject();
                        ~OrObject();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value object; //type: string
                        Value object_sign; //type: ObjectTrackingBooleanSignEnum


                        class ObjectTrackingBooleanSignEnum;


                }; // ObjectTrackings::ObjectTracking::TypeBooleanList::OrObjects::OrObject


                    std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_cfg::ObjectTrackings::ObjectTracking::TypeBooleanList::OrObjects::OrObject> > or_object;


            }; // ObjectTrackings::ObjectTracking::TypeBooleanList::OrObjects


            class AndObjects : public Entity
            {
                public:
                    AndObjects();
                    ~AndObjects();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class AndObject : public Entity
                {
                    public:
                        AndObject();
                        ~AndObject();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value object_name; //type: string
                        Value object_sign; //type: ObjectTrackingBooleanSignEnum


                        class ObjectTrackingBooleanSignEnum;


                }; // ObjectTrackings::ObjectTracking::TypeBooleanList::AndObjects::AndObject


                    std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_cfg::ObjectTrackings::ObjectTracking::TypeBooleanList::AndObjects::AndObject> > and_object;


            }; // ObjectTrackings::ObjectTracking::TypeBooleanList::AndObjects


                std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_cfg::ObjectTrackings::ObjectTracking::TypeBooleanList::AndObjects> and_objects;
                std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_cfg::ObjectTrackings::ObjectTracking::TypeBooleanList::OrObjects> or_objects;


        }; // ObjectTrackings::ObjectTracking::TypeBooleanList


            std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_cfg::ObjectTrackings::ObjectTracking::TypeBooleanList> type_boolean_list;
            std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_cfg::ObjectTrackings::ObjectTracking::TypeInterface> type_interface;
            std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_cfg::ObjectTrackings::ObjectTracking::TypeList> type_list;
            std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_cfg::ObjectTrackings::ObjectTracking::TypeRoute> type_route;


    }; // ObjectTrackings::ObjectTracking


        std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_cfg::ObjectTrackings::ObjectTracking> > object_tracking;


}; // ObjectTrackings



}
}

#endif /* _CISCO_IOS_XR_MANAGEABILITY_OBJECT_TRACKING_CFG_ */

