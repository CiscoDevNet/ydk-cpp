#ifndef _CISCO_IOS_XR_MAN_EMS_CFG_
#define _CISCO_IOS_XR_MAN_EMS_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_man_ems_cfg {

class Grpc : public ydk::Entity
{
    public:
        Grpc();
        ~Grpc();

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

        ydk::YLeaf port; //type: uint32
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf max_request_per_user; //type: uint32
        ydk::YLeaf no_tls; //type: empty
        ydk::YLeaf tls_trustpoint; //type: string
        ydk::YLeaf address_family; //type: string
        ydk::YLeaf tls_mutual; //type: empty
        ydk::YLeaf max_request_total; //type: uint32
        class ServiceLayer; //type: Grpc::ServiceLayer

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ems_cfg::Grpc::ServiceLayer> service_layer;
        
}; // Grpc


class Grpc::ServiceLayer : public ydk::Entity
{
    public:
        ServiceLayer();
        ~ServiceLayer();

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

        ydk::YLeaf enable; //type: empty

}; // Grpc::ServiceLayer


}
}

#endif /* _CISCO_IOS_XR_MAN_EMS_CFG_ */

