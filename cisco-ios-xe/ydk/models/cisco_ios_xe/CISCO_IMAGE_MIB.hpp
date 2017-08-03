#ifndef _CISCO_IMAGE_MIB_
#define _CISCO_IMAGE_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_IMAGE_MIB {

class CiscoImageMib : public ydk::Entity
{
    public:
        CiscoImageMib();
        ~CiscoImageMib();

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

        class Ciscoimagetable; //type: CiscoImageMib::Ciscoimagetable

        std::shared_ptr<CISCO_IMAGE_MIB::CiscoImageMib::Ciscoimagetable> ciscoimagetable;
        
}; // CiscoImageMib


class CiscoImageMib::Ciscoimagetable : public ydk::Entity
{
    public:
        Ciscoimagetable();
        ~Ciscoimagetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ciscoimageentry; //type: CiscoImageMib::Ciscoimagetable::Ciscoimageentry

        std::vector<std::shared_ptr<CISCO_IMAGE_MIB::CiscoImageMib::Ciscoimagetable::Ciscoimageentry> > ciscoimageentry;
        
}; // CiscoImageMib::Ciscoimagetable


class CiscoImageMib::Ciscoimagetable::Ciscoimageentry : public ydk::Entity
{
    public:
        Ciscoimageentry();
        ~Ciscoimageentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ciscoimageindex; //type: int32
        ydk::YLeaf ciscoimagestring; //type: string

}; // CiscoImageMib::Ciscoimagetable::Ciscoimageentry


}
}

#endif /* _CISCO_IMAGE_MIB_ */

