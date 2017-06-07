#ifndef _CISCO_IOS_XR_ISIS_ACT_
#define _CISCO_IOS_XR_ISIS_ACT_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_isis_act {

class ClearIsisProcessRpc : public Entity
{
    public:
        ClearIsisProcessRpc();
        ~ClearIsisProcessRpc();

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

        class Input; //type: ClearIsisProcessRpc::Input

        std::shared_ptr<Cisco_IOS_XR_isis_act::ClearIsisProcessRpc::Input> input;
        
}; // ClearIsisProcessRpc


class ClearIsisProcessRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf process; //type: empty
        class Instance; //type: ClearIsisProcessRpc::Input::Instance

        std::shared_ptr<Cisco_IOS_XR_isis_act::ClearIsisProcessRpc::Input::Instance> instance;
        
}; // ClearIsisProcessRpc::Input


class ClearIsisProcessRpc::Input::Instance : public Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance_identifier; //type: string

}; // ClearIsisProcessRpc::Input::Instance

class ClearIsisRouteRpc : public Entity
{
    public:
        ClearIsisRouteRpc();
        ~ClearIsisRouteRpc();

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

        class Input; //type: ClearIsisRouteRpc::Input

        std::shared_ptr<Cisco_IOS_XR_isis_act::ClearIsisRouteRpc::Input> input;
        
}; // ClearIsisRouteRpc


class ClearIsisRouteRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route; //type: empty
        class Instance; //type: ClearIsisRouteRpc::Input::Instance

        std::shared_ptr<Cisco_IOS_XR_isis_act::ClearIsisRouteRpc::Input::Instance> instance;
        
}; // ClearIsisRouteRpc::Input


class ClearIsisRouteRpc::Input::Instance : public Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance_identifier; //type: string

}; // ClearIsisRouteRpc::Input::Instance

class ClearIsisStatRpc : public Entity
{
    public:
        ClearIsisStatRpc();
        ~ClearIsisStatRpc();

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

        class Input; //type: ClearIsisStatRpc::Input

        std::shared_ptr<Cisco_IOS_XR_isis_act::ClearIsisStatRpc::Input> input;
        
}; // ClearIsisStatRpc


class ClearIsisStatRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Instance; //type: ClearIsisStatRpc::Input::Instance
        class Statistics; //type: ClearIsisStatRpc::Input::Statistics

        std::shared_ptr<Cisco_IOS_XR_isis_act::ClearIsisStatRpc::Input::Instance> instance;
        std::shared_ptr<Cisco_IOS_XR_isis_act::ClearIsisStatRpc::Input::Statistics> statistics;
        
}; // ClearIsisStatRpc::Input


class ClearIsisStatRpc::Input::Instance : public Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance_identifier; //type: string

}; // ClearIsisStatRpc::Input::Instance


class ClearIsisStatRpc::Input::Statistics : public Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string

}; // ClearIsisStatRpc::Input::Statistics

class ClearIsisDistRpc : public Entity
{
    public:
        ClearIsisDistRpc();
        ~ClearIsisDistRpc();

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

        class Input; //type: ClearIsisDistRpc::Input

        std::shared_ptr<Cisco_IOS_XR_isis_act::ClearIsisDistRpc::Input> input;
        
}; // ClearIsisDistRpc


class ClearIsisDistRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf distribution; //type: empty
        class Instance; //type: ClearIsisDistRpc::Input::Instance

        std::shared_ptr<Cisco_IOS_XR_isis_act::ClearIsisDistRpc::Input::Instance> instance;
        
}; // ClearIsisDistRpc::Input


class ClearIsisDistRpc::Input::Instance : public Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance_identifier; //type: string

}; // ClearIsisDistRpc::Input::Instance

class ClearIsisRpc : public Entity
{
    public:
        ClearIsisRpc();
        ~ClearIsisRpc();

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

        class Input; //type: ClearIsisRpc::Input

        std::shared_ptr<Cisco_IOS_XR_isis_act::ClearIsisRpc::Input> input;
        
}; // ClearIsisRpc


class ClearIsisRpc::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rt_type; //type: RtTypeEnum
        YLeaf route; //type: empty
        YLeaf topology; //type: string
        class Instance; //type: ClearIsisRpc::Input::Instance

        std::shared_ptr<Cisco_IOS_XR_isis_act::ClearIsisRpc::Input::Instance> instance;
                class RtTypeEnum;

}; // ClearIsisRpc::Input


class ClearIsisRpc::Input::Instance : public Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance_identifier; //type: string

}; // ClearIsisRpc::Input::Instance

class ClearIsisRpc::Input::RtTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf AFI_ALL_MULTICAST;
        static const Enum::YLeaf AFI_ALL_SAFI_ALL;
        static const Enum::YLeaf AFI_ALL_UNICAST;
        static const Enum::YLeaf IPv4_MULTICAST;
        static const Enum::YLeaf IPv4_SAFI_ALL;
        static const Enum::YLeaf IPv4_UNICAST;
        static const Enum::YLeaf IPv6_MULTICAST;
        static const Enum::YLeaf IPv6_SAFI_ALL;
        static const Enum::YLeaf IPv6_UNICAST;

};


}
}

#endif /* _CISCO_IOS_XR_ISIS_ACT_ */

