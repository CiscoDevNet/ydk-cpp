#ifndef _CISCO_IOS_XE_MDT_CFG_
#define _CISCO_IOS_XE_MDT_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_mdt_cfg {

class MdtSubscriptions : public ydk::Entity
{
    public:
        MdtSubscriptions();
        ~MdtSubscriptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

        class MdtSubscription; //type: MdtSubscriptions::MdtSubscription

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mdt_cfg::MdtSubscriptions::MdtSubscription> > mdt_subscription;
        
}; // MdtSubscriptions


class MdtSubscriptions::MdtSubscription : public ydk::Entity
{
    public:
        MdtSubscription();
        ~MdtSubscription();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf subscription_id; //type: uint32
        class Base; //type: MdtSubscriptions::MdtSubscription::Base
        class MdtReceivers; //type: MdtSubscriptions::MdtSubscription::MdtReceivers

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mdt_cfg::MdtSubscriptions::MdtSubscription::Base> base;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_mdt_cfg::MdtSubscriptions::MdtSubscription::MdtReceivers> > mdt_receivers;
        
}; // MdtSubscriptions::MdtSubscription


class MdtSubscriptions::MdtSubscription::Base : public ydk::Entity
{
    public:
        Base();
        ~Base();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf stream; //type: string
        ydk::YLeaf encoding; //type: string
        ydk::YLeaf source_vrf; //type: string
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf no_trigger; //type: uint32
        ydk::YLeaf period; //type: uint32
        ydk::YLeaf no_synch_on_start; //type: boolean
        ydk::YLeaf no_filter; //type: uint32
        ydk::YLeaf xpath; //type: string
        ydk::YLeaf tdl_uri; //type: string

}; // MdtSubscriptions::MdtSubscription::Base


class MdtSubscriptions::MdtSubscription::MdtReceivers : public ydk::Entity
{
    public:
        MdtReceivers();
        ~MdtReceivers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf port; //type: uint16
        ydk::YLeaf protocol; //type: string

}; // MdtSubscriptions::MdtSubscription::MdtReceivers


}
}

#endif /* _CISCO_IOS_XE_MDT_CFG_ */

