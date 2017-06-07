#ifndef _CISCO_IOS_XR_SDR_INVMGR_OPER_
#define _CISCO_IOS_XR_SDR_INVMGR_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_sdr_invmgr_oper {

class SdrInventory : public Entity
{
    public:
        SdrInventory();
        ~SdrInventory();

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

        class Racks; //type: SdrInventory::Racks

        std::shared_ptr<Cisco_IOS_XR_sdr_invmgr_oper::SdrInventory::Racks> racks;
        
}; // SdrInventory


class SdrInventory::Racks : public Entity
{
    public:
        Racks();
        ~Racks();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Rack; //type: SdrInventory::Racks::Rack

        std::vector<std::shared_ptr<Cisco_IOS_XR_sdr_invmgr_oper::SdrInventory::Racks::Rack> > rack;
        
}; // SdrInventory::Racks


class SdrInventory::Racks::Rack : public Entity
{
    public:
        Rack();
        ~Rack();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class Slot; //type: SdrInventory::Racks::Rack::Slot

        std::vector<std::shared_ptr<Cisco_IOS_XR_sdr_invmgr_oper::SdrInventory::Racks::Rack::Slot> > slot;
        
}; // SdrInventory::Racks::Rack


class SdrInventory::Racks::Rack::Slot : public Entity
{
    public:
        Slot();
        ~Slot();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class Card; //type: SdrInventory::Racks::Rack::Slot::Card

        std::vector<std::shared_ptr<Cisco_IOS_XR_sdr_invmgr_oper::SdrInventory::Racks::Rack::Slot::Card> > card;
        
}; // SdrInventory::Racks::Rack::Slot


class SdrInventory::Racks::Rack::Slot::Card : public Entity
{
    public:
        Card();
        ~Card();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class Attributes; //type: SdrInventory::Racks::Rack::Slot::Card::Attributes

        std::shared_ptr<Cisco_IOS_XR_sdr_invmgr_oper::SdrInventory::Racks::Rack::Slot::Card::Attributes> attributes;
        
}; // SdrInventory::Racks::Rack::Slot::Card


class SdrInventory::Racks::Rack::Slot::Card::Attributes : public Entity
{
    public:
        Attributes();
        ~Attributes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf config_state_string; //type: string
        YLeaf power; //type: int32
        YLeaf config_state; //type: int32
        YLeaf card_state; //type: int32
        YLeaf vm_state; //type: int32
        YLeaf card_admin_state; //type: int32
        YLeaf card_type; //type: int32
        YLeaf card_type_string; //type: string
        YLeaf node_name_string; //type: string
        YLeaf pi_slot_number; //type: int32
        YLeaf shutdown; //type: int32
        YLeaf ctype; //type: int32
        YLeaf card_state_string; //type: string
        YLeaf monitor; //type: int32

}; // SdrInventory::Racks::Rack::Slot::Card::Attributes


}
}

#endif /* _CISCO_IOS_XR_SDR_INVMGR_OPER_ */

