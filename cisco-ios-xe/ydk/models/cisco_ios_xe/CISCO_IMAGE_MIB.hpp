#ifndef _CISCO_IMAGE_MIB_
#define _CISCO_IMAGE_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace CISCO_IMAGE_MIB {

class CiscoImageMib : public Entity
{
    public:
        CiscoImageMib();
        ~CiscoImageMib();

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

        class Ciscoimagetable; //type: CiscoImageMib::Ciscoimagetable

        std::shared_ptr<CISCO_IMAGE_MIB::CiscoImageMib::Ciscoimagetable> ciscoimagetable_;
        
}; // CiscoImageMib


class CiscoImageMib::Ciscoimagetable : public Entity
{
    public:
        Ciscoimagetable();
        ~Ciscoimagetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ciscoimageentry; //type: CiscoImageMib::Ciscoimagetable::Ciscoimageentry

        std::vector<std::shared_ptr<CISCO_IMAGE_MIB::CiscoImageMib::Ciscoimagetable::Ciscoimageentry> > ciscoimageentry_;
        
}; // CiscoImageMib::Ciscoimagetable


class CiscoImageMib::Ciscoimagetable::Ciscoimageentry : public Entity
{
    public:
        Ciscoimageentry();
        ~Ciscoimageentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ciscoimageindex; //type: int32
        YLeaf ciscoimagestring; //type: string

}; // CiscoImageMib::Ciscoimagetable::Ciscoimageentry


}
}

#endif /* _CISCO_IMAGE_MIB_ */

