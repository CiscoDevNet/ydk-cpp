#ifndef _IETF_YANG_LIBRARY_
#define _IETF_YANG_LIBRARY_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace ietf_yang_library {

class ModulesState : public ydk::Entity
{
    public:
        ModulesState();
        ~ModulesState();

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

        ydk::YLeaf module_set_id; //type: string
        class Module; //type: ModulesState::Module

        std::vector<std::shared_ptr<ietf_yang_library::ModulesState::Module> > module;
        
}; // ModulesState


class ModulesState::Module : public ydk::Entity
{
    public:
        Module();
        ~Module();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf revision; //type: string
        ydk::YLeaf schema; //type: string
        ydk::YLeaf namespace_; //type: string
        ydk::YLeaf conformance_type; //type: ConformanceType
        ydk::YLeafList feature; //type: list of  string
        class Deviation; //type: ModulesState::Module::Deviation
        class Submodule; //type: ModulesState::Module::Submodule

        std::vector<std::shared_ptr<ietf_yang_library::ModulesState::Module::Deviation> > deviation;
        std::vector<std::shared_ptr<ietf_yang_library::ModulesState::Module::Submodule> > submodule;
                class ConformanceType;

}; // ModulesState::Module


class ModulesState::Module::Deviation : public ydk::Entity
{
    public:
        Deviation();
        ~Deviation();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf revision; //type: string

}; // ModulesState::Module::Deviation


class ModulesState::Module::Submodule : public ydk::Entity
{
    public:
        Submodule();
        ~Submodule();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf revision; //type: string
        ydk::YLeaf schema; //type: string

}; // ModulesState::Module::Submodule

class ModulesState::Module::ConformanceType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf implement;
        static const ydk::Enum::YLeaf import;

};


}
}

#endif /* _IETF_YANG_LIBRARY_ */

