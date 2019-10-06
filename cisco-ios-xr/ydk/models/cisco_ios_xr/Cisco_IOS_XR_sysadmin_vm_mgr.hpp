#ifndef _CISCO_IOS_XR_SYSADMIN_VM_MGR_
#define _CISCO_IOS_XR_SYSADMIN_VM_MGR_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_vm_mgr {

class VM : public ydk::Entity
{
    public:
        VM();
        ~VM();

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

        class AllLocations; //type: VM::AllLocations

        ydk::YList all_locations;
        
}; // VM


class VM::AllLocations : public ydk::Entity
{
    public:
        AllLocations();
        ~AllLocations();

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

        ydk::YLeaf location; //type: string
        class AllUiids; //type: VM::AllLocations::AllUiids

        ydk::YList all_uiids;
        
}; // VM::AllLocations


class VM::AllLocations::AllUiids : public ydk::Entity
{
    public:
        AllUiids();
        ~AllUiids();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf uiid; //type: string
        ydk::YLeaf id; //type: string
        ydk::YLeaf status; //type: string
        ydk::YLeaf ipaddr; //type: string
        ydk::YLeaf hb_interval_s; //type: string
        ydk::YLeaf hb_interval_ns; //type: string
        ydk::YLeaf last_hb_sent; //type: string
        ydk::YLeaf last_hb_rec; //type: string
        ydk::YLeaf role; //type: string

}; // VM::AllLocations::AllUiids


}
}

#endif /* _CISCO_IOS_XR_SYSADMIN_VM_MGR_ */

