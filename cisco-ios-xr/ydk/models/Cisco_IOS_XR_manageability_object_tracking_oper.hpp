#ifndef _CISCO_IOS_XR_MANAGEABILITY_OBJECT_TRACKING_OPER_
#define _CISCO_IOS_XR_MANAGEABILITY_OBJECT_TRACKING_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_manageability_object_tracking_oper {

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
        std::unique_ptr<Entity> clone_ptr() override;



    class TrackTypeInterface : public Entity
    {
        public:
            TrackTypeInterface();
            ~TrackTypeInterface();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class TrackInfo : public Entity
        {
            public:
                TrackInfo();
                ~TrackInfo();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf tracke_name; //type: string
                YLeaf type; //type: TrackEnum
                YLeaf track_state; //type: boolean
                YLeaf state_change_counter; //type: uint32
                YLeaf seconds_last_change; //type: uint64
                YLeaf threshold_up; //type: uint32
                YLeaf threshold_down; //type: uint32

            class TrackTypeInfo : public Entity
            {
                public:
                    TrackTypeInfo();
                    ~TrackTypeInfo();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf discriminant; //type: TrackEnum

                class InterfaceTracks : public Entity
                {
                    public:
                        InterfaceTracks();
                        ~InterfaceTracks();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf interface_name; //type: string



                }; // ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::InterfaceTracks


                class RouteTracks : public Entity
                {
                    public:
                        RouteTracks();
                        ~RouteTracks();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf prefix; //type: uint32
                        YLeaf prefix_length; //type: uint32
                        YLeaf vrf; //type: string
                        YLeaf next_hop; //type: string



                }; // ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::RouteTracks


                class IpslaTracks : public Entity
                {
                    public:
                        IpslaTracks();
                        ~IpslaTracks();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf ipsla_op_id; //type: uint32
                        YLeaf rtt; //type: uint32
                        YLeaf return_code; //type: uint32



                }; // ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::IpslaTracks


                class BfdTracks : public Entity
                {
                    public:
                        BfdTracks();
                        ~BfdTracks();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf interface_name; //type: string
                        YLeaf destination_address; //type: uint32
                        YLeaf rate; //type: uint32
                        YLeaf debounce_count; //type: uint32



                }; // ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::BfdTracks


                    std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::BfdTracks> bfd_tracks;
                    std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::InterfaceTracks> interface_tracks;
                    std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::IpslaTracks> ipsla_tracks;
                    std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo::RouteTracks> route_tracks;


            }; // ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo


            class BoolTracks : public Entity
            {
                public:
                    BoolTracks();
                    ~BoolTracks();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class BoolTrackInfo : public Entity
                {
                    public:
                        BoolTrackInfo();
                        ~BoolTrackInfo();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf object_name; //type: string
                        YLeaf track_state; //type: boolean
                        YLeaf with_not; //type: boolean



                }; // ObjectTracking::TrackTypeInterface::TrackInfo::BoolTracks::BoolTrackInfo


                    std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeInterface::TrackInfo::BoolTracks::BoolTrackInfo> > bool_track_info;


            }; // ObjectTracking::TrackTypeInterface::TrackInfo::BoolTracks


            class ThresholdTracks : public Entity
            {
                public:
                    ThresholdTracks();
                    ~ThresholdTracks();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class ThresholdTrackInfo : public Entity
                {
                    public:
                        ThresholdTrackInfo();
                        ~ThresholdTrackInfo();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf object_name; //type: string
                        YLeaf track_state; //type: boolean
                        YLeaf weight; //type: uint32



                }; // ObjectTracking::TrackTypeInterface::TrackInfo::ThresholdTracks::ThresholdTrackInfo


                    std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeInterface::TrackInfo::ThresholdTracks::ThresholdTrackInfo> > threshold_track_info;


            }; // ObjectTracking::TrackTypeInterface::TrackInfo::ThresholdTracks


            class TrackingInteraces : public Entity
            {
                public:
                    TrackingInteraces();
                    ~TrackingInteraces();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class InterfaceTrackingInfo : public Entity
                {
                    public:
                        InterfaceTrackingInfo();
                        ~InterfaceTrackingInfo();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf interface_name; //type: string



                }; // ObjectTracking::TrackTypeInterface::TrackInfo::TrackingInteraces::InterfaceTrackingInfo


                    std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeInterface::TrackInfo::TrackingInteraces::InterfaceTrackingInfo> > interface_tracking_info;


            }; // ObjectTracking::TrackTypeInterface::TrackInfo::TrackingInteraces


            class Delayed : public Entity
            {
                public:
                    Delayed();
                    ~Delayed();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf time_remaining; //type: uint32
                    YLeaf track_state; //type: boolean



            }; // ObjectTracking::TrackTypeInterface::TrackInfo::Delayed


                std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeInterface::TrackInfo::BoolTracks> bool_tracks;
                std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeInterface::TrackInfo::Delayed> delayed;
                std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeInterface::TrackInfo::ThresholdTracks> threshold_tracks;
                std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeInterface::TrackInfo::TrackTypeInfo> track_type_info;
                std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeInterface::TrackInfo::TrackingInteraces> tracking_interaces;


        }; // ObjectTracking::TrackTypeInterface::TrackInfo


            std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeInterface::TrackInfo> > track_info;


    }; // ObjectTracking::TrackTypeInterface


    class TrackBriefs : public Entity
    {
        public:
            TrackBriefs();
            ~TrackBriefs();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class TrackBrief : public Entity
        {
            public:
                TrackBrief();
                ~TrackBrief();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf track_name; //type: string

            class TrackInfoBrief : public Entity
            {
                public:
                    TrackInfoBrief();
                    ~TrackInfoBrief();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf tracke_name; //type: string
                    YLeaf type; //type: TrackEnum
                    YLeaf track_state; //type: boolean

                class TrackTypeInfo : public Entity
                {
                    public:
                        TrackTypeInfo();
                        ~TrackTypeInfo();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf discriminant; //type: TrackEnum

                    class InterfaceTracks : public Entity
                    {
                        public:
                            InterfaceTracks();
                            ~InterfaceTracks();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf interface_name; //type: string



                    }; // ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks


                    class RouteTracks : public Entity
                    {
                        public:
                            RouteTracks();
                            ~RouteTracks();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf prefix; //type: uint32
                            YLeaf prefix_length; //type: uint32
                            YLeaf vrf; //type: string
                            YLeaf next_hop; //type: string



                    }; // ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks


                    class IpslaTracks : public Entity
                    {
                        public:
                            IpslaTracks();
                            ~IpslaTracks();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf ipsla_op_id; //type: uint32
                            YLeaf rtt; //type: uint32
                            YLeaf return_code; //type: uint32



                    }; // ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks


                    class BfdTracks : public Entity
                    {
                        public:
                            BfdTracks();
                            ~BfdTracks();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf interface_name; //type: string
                            YLeaf destination_address; //type: uint32
                            YLeaf rate; //type: uint32
                            YLeaf debounce_count; //type: uint32



                    }; // ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks


                        std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks> bfd_tracks;
                        std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks> interface_tracks;
                        std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks> ipsla_tracks;
                        std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks> route_tracks;


                }; // ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo


                    std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief::TrackTypeInfo> track_type_info;


            }; // ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief


                std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackBriefs::TrackBrief::TrackInfoBrief> > track_info_brief;


        }; // ObjectTracking::TrackBriefs::TrackBrief


            std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackBriefs::TrackBrief> > track_brief;


    }; // ObjectTracking::TrackBriefs


    class TrackTypeRtrReachability : public Entity
    {
        public:
            TrackTypeRtrReachability();
            ~TrackTypeRtrReachability();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class TrackInfo : public Entity
        {
            public:
                TrackInfo();
                ~TrackInfo();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf tracke_name; //type: string
                YLeaf type; //type: TrackEnum
                YLeaf track_state; //type: boolean
                YLeaf state_change_counter; //type: uint32
                YLeaf seconds_last_change; //type: uint64
                YLeaf threshold_up; //type: uint32
                YLeaf threshold_down; //type: uint32

            class TrackTypeInfo : public Entity
            {
                public:
                    TrackTypeInfo();
                    ~TrackTypeInfo();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf discriminant; //type: TrackEnum

                class InterfaceTracks : public Entity
                {
                    public:
                        InterfaceTracks();
                        ~InterfaceTracks();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf interface_name; //type: string



                }; // ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::InterfaceTracks


                class RouteTracks : public Entity
                {
                    public:
                        RouteTracks();
                        ~RouteTracks();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf prefix; //type: uint32
                        YLeaf prefix_length; //type: uint32
                        YLeaf vrf; //type: string
                        YLeaf next_hop; //type: string



                }; // ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::RouteTracks


                class IpslaTracks : public Entity
                {
                    public:
                        IpslaTracks();
                        ~IpslaTracks();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf ipsla_op_id; //type: uint32
                        YLeaf rtt; //type: uint32
                        YLeaf return_code; //type: uint32



                }; // ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::IpslaTracks


                class BfdTracks : public Entity
                {
                    public:
                        BfdTracks();
                        ~BfdTracks();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf interface_name; //type: string
                        YLeaf destination_address; //type: uint32
                        YLeaf rate; //type: uint32
                        YLeaf debounce_count; //type: uint32



                }; // ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::BfdTracks


                    std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::BfdTracks> bfd_tracks;
                    std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::InterfaceTracks> interface_tracks;
                    std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::IpslaTracks> ipsla_tracks;
                    std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo::RouteTracks> route_tracks;


            }; // ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo


            class BoolTracks : public Entity
            {
                public:
                    BoolTracks();
                    ~BoolTracks();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class BoolTrackInfo : public Entity
                {
                    public:
                        BoolTrackInfo();
                        ~BoolTrackInfo();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf object_name; //type: string
                        YLeaf track_state; //type: boolean
                        YLeaf with_not; //type: boolean



                }; // ObjectTracking::TrackTypeRtrReachability::TrackInfo::BoolTracks::BoolTrackInfo


                    std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeRtrReachability::TrackInfo::BoolTracks::BoolTrackInfo> > bool_track_info;


            }; // ObjectTracking::TrackTypeRtrReachability::TrackInfo::BoolTracks


            class ThresholdTracks : public Entity
            {
                public:
                    ThresholdTracks();
                    ~ThresholdTracks();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class ThresholdTrackInfo : public Entity
                {
                    public:
                        ThresholdTrackInfo();
                        ~ThresholdTrackInfo();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf object_name; //type: string
                        YLeaf track_state; //type: boolean
                        YLeaf weight; //type: uint32



                }; // ObjectTracking::TrackTypeRtrReachability::TrackInfo::ThresholdTracks::ThresholdTrackInfo


                    std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeRtrReachability::TrackInfo::ThresholdTracks::ThresholdTrackInfo> > threshold_track_info;


            }; // ObjectTracking::TrackTypeRtrReachability::TrackInfo::ThresholdTracks


            class TrackingInteraces : public Entity
            {
                public:
                    TrackingInteraces();
                    ~TrackingInteraces();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class InterfaceTrackingInfo : public Entity
                {
                    public:
                        InterfaceTrackingInfo();
                        ~InterfaceTrackingInfo();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf interface_name; //type: string



                }; // ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackingInteraces::InterfaceTrackingInfo


                    std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackingInteraces::InterfaceTrackingInfo> > interface_tracking_info;


            }; // ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackingInteraces


            class Delayed : public Entity
            {
                public:
                    Delayed();
                    ~Delayed();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf time_remaining; //type: uint32
                    YLeaf track_state; //type: boolean



            }; // ObjectTracking::TrackTypeRtrReachability::TrackInfo::Delayed


                std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeRtrReachability::TrackInfo::BoolTracks> bool_tracks;
                std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeRtrReachability::TrackInfo::Delayed> delayed;
                std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeRtrReachability::TrackInfo::ThresholdTracks> threshold_tracks;
                std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackTypeInfo> track_type_info;
                std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeRtrReachability::TrackInfo::TrackingInteraces> tracking_interaces;


        }; // ObjectTracking::TrackTypeRtrReachability::TrackInfo


            std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeRtrReachability::TrackInfo> > track_info;


    }; // ObjectTracking::TrackTypeRtrReachability


    class TrackTypeRtrReachabilityBrief : public Entity
    {
        public:
            TrackTypeRtrReachabilityBrief();
            ~TrackTypeRtrReachabilityBrief();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class TrackInfoBrief : public Entity
        {
            public:
                TrackInfoBrief();
                ~TrackInfoBrief();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf tracke_name; //type: string
                YLeaf type; //type: TrackEnum
                YLeaf track_state; //type: boolean

            class TrackTypeInfo : public Entity
            {
                public:
                    TrackTypeInfo();
                    ~TrackTypeInfo();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf discriminant; //type: TrackEnum

                class InterfaceTracks : public Entity
                {
                    public:
                        InterfaceTracks();
                        ~InterfaceTracks();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf interface_name; //type: string



                }; // ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks


                class RouteTracks : public Entity
                {
                    public:
                        RouteTracks();
                        ~RouteTracks();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf prefix; //type: uint32
                        YLeaf prefix_length; //type: uint32
                        YLeaf vrf; //type: string
                        YLeaf next_hop; //type: string



                }; // ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks


                class IpslaTracks : public Entity
                {
                    public:
                        IpslaTracks();
                        ~IpslaTracks();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf ipsla_op_id; //type: uint32
                        YLeaf rtt; //type: uint32
                        YLeaf return_code; //type: uint32



                }; // ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks


                class BfdTracks : public Entity
                {
                    public:
                        BfdTracks();
                        ~BfdTracks();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf interface_name; //type: string
                        YLeaf destination_address; //type: uint32
                        YLeaf rate; //type: uint32
                        YLeaf debounce_count; //type: uint32



                }; // ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks


                    std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks> bfd_tracks;
                    std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks> interface_tracks;
                    std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks> ipsla_tracks;
                    std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks> route_tracks;


            }; // ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo


                std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief::TrackTypeInfo> track_type_info;


        }; // ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief


            std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeRtrReachabilityBrief::TrackInfoBrief> > track_info_brief;


    }; // ObjectTracking::TrackTypeRtrReachabilityBrief


    class Tracks : public Entity
    {
        public:
            Tracks();
            ~Tracks();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class Track : public Entity
        {
            public:
                Track();
                ~Track();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf track_name; //type: string

            class TrackInfo : public Entity
            {
                public:
                    TrackInfo();
                    ~TrackInfo();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf tracke_name; //type: string
                    YLeaf type; //type: TrackEnum
                    YLeaf track_state; //type: boolean
                    YLeaf state_change_counter; //type: uint32
                    YLeaf seconds_last_change; //type: uint64
                    YLeaf threshold_up; //type: uint32
                    YLeaf threshold_down; //type: uint32

                class TrackTypeInfo : public Entity
                {
                    public:
                        TrackTypeInfo();
                        ~TrackTypeInfo();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf discriminant; //type: TrackEnum

                    class InterfaceTracks : public Entity
                    {
                        public:
                            InterfaceTracks();
                            ~InterfaceTracks();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf interface_name; //type: string



                    }; // ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::InterfaceTracks


                    class RouteTracks : public Entity
                    {
                        public:
                            RouteTracks();
                            ~RouteTracks();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf prefix; //type: uint32
                            YLeaf prefix_length; //type: uint32
                            YLeaf vrf; //type: string
                            YLeaf next_hop; //type: string



                    }; // ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::RouteTracks


                    class IpslaTracks : public Entity
                    {
                        public:
                            IpslaTracks();
                            ~IpslaTracks();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf ipsla_op_id; //type: uint32
                            YLeaf rtt; //type: uint32
                            YLeaf return_code; //type: uint32



                    }; // ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::IpslaTracks


                    class BfdTracks : public Entity
                    {
                        public:
                            BfdTracks();
                            ~BfdTracks();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf interface_name; //type: string
                            YLeaf destination_address; //type: uint32
                            YLeaf rate; //type: uint32
                            YLeaf debounce_count; //type: uint32



                    }; // ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::BfdTracks


                        std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::BfdTracks> bfd_tracks;
                        std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::InterfaceTracks> interface_tracks;
                        std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::IpslaTracks> ipsla_tracks;
                        std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo::RouteTracks> route_tracks;


                }; // ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo


                class BoolTracks : public Entity
                {
                    public:
                        BoolTracks();
                        ~BoolTracks();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class BoolTrackInfo : public Entity
                    {
                        public:
                            BoolTrackInfo();
                            ~BoolTrackInfo();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf object_name; //type: string
                            YLeaf track_state; //type: boolean
                            YLeaf with_not; //type: boolean



                    }; // ObjectTracking::Tracks::Track::TrackInfo::BoolTracks::BoolTrackInfo


                        std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::Tracks::Track::TrackInfo::BoolTracks::BoolTrackInfo> > bool_track_info;


                }; // ObjectTracking::Tracks::Track::TrackInfo::BoolTracks


                class ThresholdTracks : public Entity
                {
                    public:
                        ThresholdTracks();
                        ~ThresholdTracks();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class ThresholdTrackInfo : public Entity
                    {
                        public:
                            ThresholdTrackInfo();
                            ~ThresholdTrackInfo();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf object_name; //type: string
                            YLeaf track_state; //type: boolean
                            YLeaf weight; //type: uint32



                    }; // ObjectTracking::Tracks::Track::TrackInfo::ThresholdTracks::ThresholdTrackInfo


                        std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::Tracks::Track::TrackInfo::ThresholdTracks::ThresholdTrackInfo> > threshold_track_info;


                }; // ObjectTracking::Tracks::Track::TrackInfo::ThresholdTracks


                class TrackingInteraces : public Entity
                {
                    public:
                        TrackingInteraces();
                        ~TrackingInteraces();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class InterfaceTrackingInfo : public Entity
                    {
                        public:
                            InterfaceTrackingInfo();
                            ~InterfaceTrackingInfo();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf interface_name; //type: string



                    }; // ObjectTracking::Tracks::Track::TrackInfo::TrackingInteraces::InterfaceTrackingInfo


                        std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::Tracks::Track::TrackInfo::TrackingInteraces::InterfaceTrackingInfo> > interface_tracking_info;


                }; // ObjectTracking::Tracks::Track::TrackInfo::TrackingInteraces


                class Delayed : public Entity
                {
                    public:
                        Delayed();
                        ~Delayed();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf time_remaining; //type: uint32
                        YLeaf track_state; //type: boolean



                }; // ObjectTracking::Tracks::Track::TrackInfo::Delayed


                    std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::Tracks::Track::TrackInfo::BoolTracks> bool_tracks;
                    std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::Tracks::Track::TrackInfo::Delayed> delayed;
                    std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::Tracks::Track::TrackInfo::ThresholdTracks> threshold_tracks;
                    std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::Tracks::Track::TrackInfo::TrackTypeInfo> track_type_info;
                    std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::Tracks::Track::TrackInfo::TrackingInteraces> tracking_interaces;


            }; // ObjectTracking::Tracks::Track::TrackInfo


                std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::Tracks::Track::TrackInfo> > track_info;


        }; // ObjectTracking::Tracks::Track


            std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::Tracks::Track> > track;


    }; // ObjectTracking::Tracks


    class TrackTypeIpv4RouteBrief : public Entity
    {
        public:
            TrackTypeIpv4RouteBrief();
            ~TrackTypeIpv4RouteBrief();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class TrackInfoBrief : public Entity
        {
            public:
                TrackInfoBrief();
                ~TrackInfoBrief();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf tracke_name; //type: string
                YLeaf type; //type: TrackEnum
                YLeaf track_state; //type: boolean

            class TrackTypeInfo : public Entity
            {
                public:
                    TrackTypeInfo();
                    ~TrackTypeInfo();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf discriminant; //type: TrackEnum

                class InterfaceTracks : public Entity
                {
                    public:
                        InterfaceTracks();
                        ~InterfaceTracks();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf interface_name; //type: string



                }; // ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks


                class RouteTracks : public Entity
                {
                    public:
                        RouteTracks();
                        ~RouteTracks();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf prefix; //type: uint32
                        YLeaf prefix_length; //type: uint32
                        YLeaf vrf; //type: string
                        YLeaf next_hop; //type: string



                }; // ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks


                class IpslaTracks : public Entity
                {
                    public:
                        IpslaTracks();
                        ~IpslaTracks();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf ipsla_op_id; //type: uint32
                        YLeaf rtt; //type: uint32
                        YLeaf return_code; //type: uint32



                }; // ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks


                class BfdTracks : public Entity
                {
                    public:
                        BfdTracks();
                        ~BfdTracks();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf interface_name; //type: string
                        YLeaf destination_address; //type: uint32
                        YLeaf rate; //type: uint32
                        YLeaf debounce_count; //type: uint32



                }; // ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks


                    std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks> bfd_tracks;
                    std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks> interface_tracks;
                    std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks> ipsla_tracks;
                    std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks> route_tracks;


            }; // ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo


                std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief::TrackTypeInfo> track_type_info;


        }; // ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief


            std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeIpv4RouteBrief::TrackInfoBrief> > track_info_brief;


    }; // ObjectTracking::TrackTypeIpv4RouteBrief


    class TrackTypeIpv4Route : public Entity
    {
        public:
            TrackTypeIpv4Route();
            ~TrackTypeIpv4Route();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class TrackInfo : public Entity
        {
            public:
                TrackInfo();
                ~TrackInfo();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf tracke_name; //type: string
                YLeaf type; //type: TrackEnum
                YLeaf track_state; //type: boolean
                YLeaf state_change_counter; //type: uint32
                YLeaf seconds_last_change; //type: uint64
                YLeaf threshold_up; //type: uint32
                YLeaf threshold_down; //type: uint32

            class TrackTypeInfo : public Entity
            {
                public:
                    TrackTypeInfo();
                    ~TrackTypeInfo();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf discriminant; //type: TrackEnum

                class InterfaceTracks : public Entity
                {
                    public:
                        InterfaceTracks();
                        ~InterfaceTracks();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf interface_name; //type: string



                }; // ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::InterfaceTracks


                class RouteTracks : public Entity
                {
                    public:
                        RouteTracks();
                        ~RouteTracks();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf prefix; //type: uint32
                        YLeaf prefix_length; //type: uint32
                        YLeaf vrf; //type: string
                        YLeaf next_hop; //type: string



                }; // ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::RouteTracks


                class IpslaTracks : public Entity
                {
                    public:
                        IpslaTracks();
                        ~IpslaTracks();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf ipsla_op_id; //type: uint32
                        YLeaf rtt; //type: uint32
                        YLeaf return_code; //type: uint32



                }; // ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::IpslaTracks


                class BfdTracks : public Entity
                {
                    public:
                        BfdTracks();
                        ~BfdTracks();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf interface_name; //type: string
                        YLeaf destination_address; //type: uint32
                        YLeaf rate; //type: uint32
                        YLeaf debounce_count; //type: uint32



                }; // ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::BfdTracks


                    std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::BfdTracks> bfd_tracks;
                    std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::InterfaceTracks> interface_tracks;
                    std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::IpslaTracks> ipsla_tracks;
                    std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo::RouteTracks> route_tracks;


            }; // ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo


            class BoolTracks : public Entity
            {
                public:
                    BoolTracks();
                    ~BoolTracks();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class BoolTrackInfo : public Entity
                {
                    public:
                        BoolTrackInfo();
                        ~BoolTrackInfo();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf object_name; //type: string
                        YLeaf track_state; //type: boolean
                        YLeaf with_not; //type: boolean



                }; // ObjectTracking::TrackTypeIpv4Route::TrackInfo::BoolTracks::BoolTrackInfo


                    std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeIpv4Route::TrackInfo::BoolTracks::BoolTrackInfo> > bool_track_info;


            }; // ObjectTracking::TrackTypeIpv4Route::TrackInfo::BoolTracks


            class ThresholdTracks : public Entity
            {
                public:
                    ThresholdTracks();
                    ~ThresholdTracks();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class ThresholdTrackInfo : public Entity
                {
                    public:
                        ThresholdTrackInfo();
                        ~ThresholdTrackInfo();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf object_name; //type: string
                        YLeaf track_state; //type: boolean
                        YLeaf weight; //type: uint32



                }; // ObjectTracking::TrackTypeIpv4Route::TrackInfo::ThresholdTracks::ThresholdTrackInfo


                    std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeIpv4Route::TrackInfo::ThresholdTracks::ThresholdTrackInfo> > threshold_track_info;


            }; // ObjectTracking::TrackTypeIpv4Route::TrackInfo::ThresholdTracks


            class TrackingInteraces : public Entity
            {
                public:
                    TrackingInteraces();
                    ~TrackingInteraces();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class InterfaceTrackingInfo : public Entity
                {
                    public:
                        InterfaceTrackingInfo();
                        ~InterfaceTrackingInfo();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf interface_name; //type: string



                }; // ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackingInteraces::InterfaceTrackingInfo


                    std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackingInteraces::InterfaceTrackingInfo> > interface_tracking_info;


            }; // ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackingInteraces


            class Delayed : public Entity
            {
                public:
                    Delayed();
                    ~Delayed();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf time_remaining; //type: uint32
                    YLeaf track_state; //type: boolean



            }; // ObjectTracking::TrackTypeIpv4Route::TrackInfo::Delayed


                std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeIpv4Route::TrackInfo::BoolTracks> bool_tracks;
                std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeIpv4Route::TrackInfo::Delayed> delayed;
                std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeIpv4Route::TrackInfo::ThresholdTracks> threshold_tracks;
                std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackTypeInfo> track_type_info;
                std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeIpv4Route::TrackInfo::TrackingInteraces> tracking_interaces;


        }; // ObjectTracking::TrackTypeIpv4Route::TrackInfo


            std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeIpv4Route::TrackInfo> > track_info;


    }; // ObjectTracking::TrackTypeIpv4Route


    class TrackTypeInterfaceBrief : public Entity
    {
        public:
            TrackTypeInterfaceBrief();
            ~TrackTypeInterfaceBrief();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class TrackInfoBrief : public Entity
        {
            public:
                TrackInfoBrief();
                ~TrackInfoBrief();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf tracke_name; //type: string
                YLeaf type; //type: TrackEnum
                YLeaf track_state; //type: boolean

            class TrackTypeInfo : public Entity
            {
                public:
                    TrackTypeInfo();
                    ~TrackTypeInfo();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf discriminant; //type: TrackEnum

                class InterfaceTracks : public Entity
                {
                    public:
                        InterfaceTracks();
                        ~InterfaceTracks();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf interface_name; //type: string



                }; // ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks


                class RouteTracks : public Entity
                {
                    public:
                        RouteTracks();
                        ~RouteTracks();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf prefix; //type: uint32
                        YLeaf prefix_length; //type: uint32
                        YLeaf vrf; //type: string
                        YLeaf next_hop; //type: string



                }; // ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks


                class IpslaTracks : public Entity
                {
                    public:
                        IpslaTracks();
                        ~IpslaTracks();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf ipsla_op_id; //type: uint32
                        YLeaf rtt; //type: uint32
                        YLeaf return_code; //type: uint32



                }; // ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks


                class BfdTracks : public Entity
                {
                    public:
                        BfdTracks();
                        ~BfdTracks();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf interface_name; //type: string
                        YLeaf destination_address; //type: uint32
                        YLeaf rate; //type: uint32
                        YLeaf debounce_count; //type: uint32



                }; // ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks


                    std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::BfdTracks> bfd_tracks;
                    std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::InterfaceTracks> interface_tracks;
                    std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::IpslaTracks> ipsla_tracks;
                    std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo::RouteTracks> route_tracks;


            }; // ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo


                std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief::TrackTypeInfo> track_type_info;


        }; // ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief


            std::vector<std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeInterfaceBrief::TrackInfoBrief> > track_info_brief;


    }; // ObjectTracking::TrackTypeInterfaceBrief


        std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackBriefs> track_briefs;
        std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeInterface> track_type_interface;
        std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeInterfaceBrief> track_type_interface_brief;
        std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeIpv4Route> track_type_ipv4_route;
        std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeIpv4RouteBrief> track_type_ipv4_route_brief;
        std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeRtrReachability> track_type_rtr_reachability;
        std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::TrackTypeRtrReachabilityBrief> track_type_rtr_reachability_brief;
        std::unique_ptr<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking::Tracks> tracks;


}; // ObjectTracking


class TrackEnum : public Enum
{
    public:
        static const Enum::YLeaf interface_type;
        static const Enum::YLeaf route_type;
        static const Enum::YLeaf bool_and_type;
        static const Enum::YLeaf bool_or_type;
        static const Enum::YLeaf ipsla_type;
        static const Enum::YLeaf undefined_type;
        static const Enum::YLeaf threshold_weight;
        static const Enum::YLeaf threshold_percentage;
        static const Enum::YLeaf bfd_type;

};


}
}

#endif /* _CISCO_IOS_XR_MANAGEABILITY_OBJECT_TRACKING_OPER_ */

