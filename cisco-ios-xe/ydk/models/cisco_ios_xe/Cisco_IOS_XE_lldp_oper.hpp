#ifndef _CISCO_IOS_XE_LLDP_OPER_
#define _CISCO_IOS_XE_LLDP_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_lldp_oper {

class LldpEntries : public ydk::Entity
{
    public:
        LldpEntries();
        ~LldpEntries();

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

        class LldpEntry; //type: LldpEntries::LldpEntry

        ydk::YList lldp_entry;
        
}; // LldpEntries


class LldpEntries::LldpEntry : public ydk::Entity
{
    public:
        LldpEntry();
        ~LldpEntry();

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

        ydk::YLeaf device_id; //type: string
        ydk::YLeaf local_interface; //type: string
        ydk::YLeaf connecting_interface; //type: string
        ydk::YLeaf ttl; //type: uint32
        class Capabilities; //type: LldpEntries::LldpEntry::Capabilities

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_lldp_oper::LldpEntries::LldpEntry::Capabilities> capabilities;
        
}; // LldpEntries::LldpEntry


class LldpEntries::LldpEntry::Capabilities : public ydk::Entity
{
    public:
        Capabilities();
        ~Capabilities();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf repeater; //type: empty
        ydk::YLeaf bridge; //type: empty
        ydk::YLeaf access_point; //type: empty
        ydk::YLeaf router; //type: empty
        ydk::YLeaf telephone; //type: empty
        ydk::YLeaf docsis; //type: empty
        ydk::YLeaf station; //type: empty
        ydk::YLeaf other; //type: empty

}; // LldpEntries::LldpEntry::Capabilities


}
}

#endif /* _CISCO_IOS_XE_LLDP_OPER_ */

