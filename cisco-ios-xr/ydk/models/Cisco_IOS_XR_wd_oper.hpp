#ifndef _CISCO_IOS_XR_WD_OPER_
#define _CISCO_IOS_XR_WD_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_wd_oper {

class Watchdog : public Entity
{
    public:
        Watchdog();
        ~Watchdog();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class Nodes : public Entity
    {
        public:
            Nodes();
            ~Nodes();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Node : public Entity
        {
            public:
                Node();
                ~Node();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value node_name; //type: string


            class ThresholdMemory : public Entity
            {
                public:
                    ThresholdMemory();
                    ~ThresholdMemory();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Default_ : public Entity
                {
                    public:
                        Default_();
                        ~Default_();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class ConfiguredMemory : public Entity
                    {
                        public:
                            ConfiguredMemory();
                            ~ConfiguredMemory();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value minor; //type: uint32
                            Value severe; //type: uint32
                            Value critical; //type: uint64




                    }; // Watchdog::Nodes::Node::ThresholdMemory::Default_::ConfiguredMemory


                    class Memory : public Entity
                    {
                        public:
                            Memory();
                            ~Memory();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value physical_memory; //type: uint32
                            Value free_memory; //type: uint64
                            Value memory_state; //type: MemoryStateEnum


                            class MemoryStateEnum;


                    }; // Watchdog::Nodes::Node::ThresholdMemory::Default_::Memory


                        std::unique_ptr<Cisco_IOS_XR_wd_oper::Watchdog::Nodes::Node::ThresholdMemory::Default_::ConfiguredMemory> configured_memory;
                        std::unique_ptr<Cisco_IOS_XR_wd_oper::Watchdog::Nodes::Node::ThresholdMemory::Default_::Memory> memory;


                }; // Watchdog::Nodes::Node::ThresholdMemory::Default_


                class Configured : public Entity
                {
                    public:
                        Configured();
                        ~Configured();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value minor; //type: uint32
                        Value severe; //type: uint32
                        Value critical; //type: uint64




                }; // Watchdog::Nodes::Node::ThresholdMemory::Configured


                    std::unique_ptr<Cisco_IOS_XR_wd_oper::Watchdog::Nodes::Node::ThresholdMemory::Configured> configured;
                    std::unique_ptr<Cisco_IOS_XR_wd_oper::Watchdog::Nodes::Node::ThresholdMemory::Default_> default_;


            }; // Watchdog::Nodes::Node::ThresholdMemory


            class MemoryState : public Entity
            {
                public:
                    MemoryState();
                    ~MemoryState();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value physical_memory; //type: uint32
                    Value free_memory; //type: uint64
                    Value memory_state; //type: MemoryStateEnum


                    class MemoryStateEnum;


            }; // Watchdog::Nodes::Node::MemoryState


            class OverloadState : public Entity
            {
                public:
                    OverloadState();
                    ~OverloadState();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value overload_control_notification; //type: OverloadCtrlNotifEnum
                    Value default_wdsysmon_throttle; //type: uint32
                    Value configured_wdsysmon_throttle; //type: uint32


                class CurrentThrottle : public Entity
                {
                    public:
                        CurrentThrottle();
                        ~CurrentThrottle();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value throttle_duration; //type: uint32
                        Value start_time; //type: string




                }; // Watchdog::Nodes::Node::OverloadState::CurrentThrottle


                class LastThrottle : public Entity
                {
                    public:
                        LastThrottle();
                        ~LastThrottle();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value throttle_duration; //type: uint32
                        Value start_time; //type: string
                        Value stop_time; //type: string




                }; // Watchdog::Nodes::Node::OverloadState::LastThrottle


                    std::unique_ptr<Cisco_IOS_XR_wd_oper::Watchdog::Nodes::Node::OverloadState::CurrentThrottle> current_throttle;
                    std::vector<std::unique_ptr<Cisco_IOS_XR_wd_oper::Watchdog::Nodes::Node::OverloadState::LastThrottle> > last_throttle;
                    class OverloadCtrlNotifEnum;


            }; // Watchdog::Nodes::Node::OverloadState


                std::unique_ptr<Cisco_IOS_XR_wd_oper::Watchdog::Nodes::Node::MemoryState> memory_state;
                std::unique_ptr<Cisco_IOS_XR_wd_oper::Watchdog::Nodes::Node::OverloadState> overload_state;
                std::unique_ptr<Cisco_IOS_XR_wd_oper::Watchdog::Nodes::Node::ThresholdMemory> threshold_memory;


        }; // Watchdog::Nodes::Node


            std::vector<std::unique_ptr<Cisco_IOS_XR_wd_oper::Watchdog::Nodes::Node> > node;


    }; // Watchdog::Nodes


        std::unique_ptr<Cisco_IOS_XR_wd_oper::Watchdog::Nodes> nodes;


}; // Watchdog


class MemoryStateEnum : public Enum
{
    public:
        static const Enum::Value unknown;
        static const Enum::Value normal;
        static const Enum::Value minor;
        static const Enum::Value severe;
        static const Enum::Value critical;

};

class OverloadCtrlNotifEnum : public Enum
{
    public:
        static const Enum::Value disabled;
        static const Enum::Value enabled;

};


}
}

#endif /* _CISCO_IOS_XR_WD_OPER_ */

