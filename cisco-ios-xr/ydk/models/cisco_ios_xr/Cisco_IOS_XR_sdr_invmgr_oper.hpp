#ifndef _CISCO_IOS_XR_SDR_INVMGR_OPER_
#define _CISCO_IOS_XR_SDR_INVMGR_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sdr_invmgr_oper {

class SdrInventory : public ydk::Entity
{
    public:
        SdrInventory();
        ~SdrInventory();

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

        class Racks; //type: SdrInventory::Racks

        std::shared_ptr<Cisco_IOS_XR_sdr_invmgr_oper::SdrInventory::Racks> racks;
        
}; // SdrInventory


class SdrInventory::Racks : public ydk::Entity
{
    public:
        Racks();
        ~Racks();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rack; //type: SdrInventory::Racks::Rack

        std::vector<std::shared_ptr<Cisco_IOS_XR_sdr_invmgr_oper::SdrInventory::Racks::Rack> > rack;
        
}; // SdrInventory::Racks


class SdrInventory::Racks::Rack : public ydk::Entity
{
    public:
        Rack();
        ~Rack();

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
        class Slot; //type: SdrInventory::Racks::Rack::Slot

        std::vector<std::shared_ptr<Cisco_IOS_XR_sdr_invmgr_oper::SdrInventory::Racks::Rack::Slot> > slot;
        
}; // SdrInventory::Racks::Rack


class SdrInventory::Racks::Rack::Slot : public ydk::Entity
{
    public:
        Slot();
        ~Slot();

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
        class Card; //type: SdrInventory::Racks::Rack::Slot::Card

        std::vector<std::shared_ptr<Cisco_IOS_XR_sdr_invmgr_oper::SdrInventory::Racks::Rack::Slot::Card> > card;
        
}; // SdrInventory::Racks::Rack::Slot


class SdrInventory::Racks::Rack::Slot::Card : public ydk::Entity
{
    public:
        Card();
        ~Card();

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
        class Attributes; //type: SdrInventory::Racks::Rack::Slot::Card::Attributes

        std::shared_ptr<Cisco_IOS_XR_sdr_invmgr_oper::SdrInventory::Racks::Rack::Slot::Card::Attributes> attributes;
        
}; // SdrInventory::Racks::Rack::Slot::Card


class SdrInventory::Racks::Rack::Slot::Card::Attributes : public ydk::Entity
{
    public:
        Attributes();
        ~Attributes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf config_state_string; //type: string
        ydk::YLeaf power; //type: int32
        ydk::YLeaf config_state; //type: int32
        ydk::YLeaf card_state; //type: int32
        ydk::YLeaf vm_state; //type: int32
        ydk::YLeaf card_admin_state; //type: int32
        ydk::YLeaf card_type; //type: int32
        ydk::YLeaf card_type_string; //type: string
        ydk::YLeaf node_name_string; //type: string
        ydk::YLeaf pi_slot_number; //type: int32
        ydk::YLeaf shutdown; //type: int32
        ydk::YLeaf ctype; //type: int32
        ydk::YLeaf card_state_string; //type: string
        ydk::YLeaf monitor; //type: int32

}; // SdrInventory::Racks::Rack::Slot::Card::Attributes


}
}

#endif /* _CISCO_IOS_XR_SDR_INVMGR_OPER_ */

