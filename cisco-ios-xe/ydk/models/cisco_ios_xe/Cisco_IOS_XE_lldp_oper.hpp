#ifndef _CISCO_IOS_XE_LLDP_OPER_
#define _CISCO_IOS_XE_LLDP_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XE_lldp_oper {

class LldpEntries : public Entity
{
    public:
        LldpEntries();
        ~LldpEntries();

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

        class LldpEntry; //type: LldpEntries::LldpEntry

        std::vector<std::shared_ptr<Cisco_IOS_XE_lldp_oper::LldpEntries::LldpEntry> > lldp_entry_;
        
}; // LldpEntries


class LldpEntries::LldpEntry : public Entity
{
    public:
        LldpEntry();
        ~LldpEntry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf device_id; //type: string
        YLeaf local_interface; //type: string
        YLeaf connecting_interface; //type: string
        YLeaf ttl; //type: uint32
        class Capabilities; //type: LldpEntries::LldpEntry::Capabilities

        std::shared_ptr<Cisco_IOS_XE_lldp_oper::LldpEntries::LldpEntry::Capabilities> capabilities_;
        
}; // LldpEntries::LldpEntry


class LldpEntries::LldpEntry::Capabilities : public Entity
{
    public:
        Capabilities();
        ~Capabilities();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf repeater; //type: empty
        YLeaf bridge; //type: empty
        YLeaf access_point; //type: empty
        YLeaf router; //type: empty
        YLeaf telephone; //type: empty
        YLeaf docsis; //type: empty
        YLeaf station; //type: empty
        YLeaf other; //type: empty

}; // LldpEntries::LldpEntry::Capabilities


}
}

#endif /* _CISCO_IOS_XE_LLDP_OPER_ */

