#ifndef _IETF_YANG_LIBRARY_
#define _IETF_YANG_LIBRARY_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace ietf_yang_library {

class ModulesState : public Entity
{
    public:
        ModulesState();
        ~ModulesState();

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

        YLeaf module_set_id; //type: string
        class Module; //type: ModulesState::Module

        std::vector<std::shared_ptr<ietf_yang_library::ModulesState::Module> > module;
        
}; // ModulesState


class ModulesState::Module : public Entity
{
    public:
        Module();
        ~Module();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf revision; //type: string
        YLeaf schema; //type: string
        YLeaf namespace_; //type: string
        YLeaf conformance_type; //type: ConformanceTypeEnum
        YLeafList feature; //type: list of  string
        class Deviation; //type: ModulesState::Module::Deviation
        class Submodule; //type: ModulesState::Module::Submodule

        std::vector<std::shared_ptr<ietf_yang_library::ModulesState::Module::Deviation> > deviation;
        std::vector<std::shared_ptr<ietf_yang_library::ModulesState::Module::Submodule> > submodule;
                class ConformanceTypeEnum;

}; // ModulesState::Module


class ModulesState::Module::Deviation : public Entity
{
    public:
        Deviation();
        ~Deviation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf revision; //type: string

}; // ModulesState::Module::Deviation


class ModulesState::Module::Submodule : public Entity
{
    public:
        Submodule();
        ~Submodule();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf revision; //type: string
        YLeaf schema; //type: string

}; // ModulesState::Module::Submodule

class ModulesState::Module::ConformanceTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf implement;
        static const Enum::YLeaf import;

};


}
}

#endif /* _IETF_YANG_LIBRARY_ */

