#ifndef _CISCO_IOS_XR_INFRA_DUMPER_CFG_
#define _CISCO_IOS_XR_INFRA_DUMPER_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_infra_dumper_cfg {

class Exception : public Entity
{
    public:
        Exception();
        ~Exception();

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

        YLeaf sparse; //type: boolean
        YLeaf kernel_debugger; //type: empty
        YLeaf packet_memory; //type: boolean
        YLeaf sparse_size; //type: uint32
        class Choice1; //type: Exception::Choice1
        class Choice3; //type: Exception::Choice3
        class Choice2; //type: Exception::Choice2

        std::shared_ptr<Cisco_IOS_XR_infra_dumper_cfg::Exception::Choice1> choice1; // presence node
        std::shared_ptr<Cisco_IOS_XR_infra_dumper_cfg::Exception::Choice2> choice2; // presence node
        std::shared_ptr<Cisco_IOS_XR_infra_dumper_cfg::Exception::Choice3> choice3; // presence node
        
}; // Exception


class Exception::Choice1 : public Entity
{
    public:
        Choice1();
        ~Choice1();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf compress; //type: boolean
        YLeaf lower_limit; //type: uint32
        YLeaf higher_limit; //type: uint32
        YLeaf file_path; //type: string
        YLeaf filename; //type: string

}; // Exception::Choice1


class Exception::Choice3 : public Entity
{
    public:
        Choice3();
        ~Choice3();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf compress; //type: boolean
        YLeaf lower_limit; //type: uint32
        YLeaf higher_limit; //type: uint32
        YLeaf file_path; //type: string
        YLeaf filename; //type: string

}; // Exception::Choice3


class Exception::Choice2 : public Entity
{
    public:
        Choice2();
        ~Choice2();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf compress; //type: boolean
        YLeaf lower_limit; //type: uint32
        YLeaf higher_limit; //type: uint32
        YLeaf file_path; //type: string
        YLeaf filename; //type: string

}; // Exception::Choice2


}
}

#endif /* _CISCO_IOS_XR_INFRA_DUMPER_CFG_ */

