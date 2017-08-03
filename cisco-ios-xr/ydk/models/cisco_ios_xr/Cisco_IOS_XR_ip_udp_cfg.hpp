#ifndef _CISCO_IOS_XR_IP_UDP_CFG_
#define _CISCO_IOS_XR_IP_UDP_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_udp_cfg {

class IpUdp : public ydk::Entity
{
    public:
        IpUdp();
        ~IpUdp();

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

        ydk::YLeaf receive_q; //type: uint32
        class NumThread; //type: IpUdp::NumThread
        class Directory; //type: IpUdp::Directory

        std::shared_ptr<Cisco_IOS_XR_ip_udp_cfg::IpUdp::Directory> directory; // presence node
        std::shared_ptr<Cisco_IOS_XR_ip_udp_cfg::IpUdp::NumThread> num_thread; // presence node
        
}; // IpUdp


class IpUdp::NumThread : public ydk::Entity
{
    public:
        NumThread();
        ~NumThread();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf udp_in_q_threads; //type: uint32
        ydk::YLeaf udp_out_q_threads; //type: uint32

}; // IpUdp::NumThread


class IpUdp::Directory : public ydk::Entity
{
    public:
        Directory();
        ~Directory();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf directoryname; //type: string
        ydk::YLeaf max_udp_debug_files; //type: uint32
        ydk::YLeaf max_file_size_files; //type: uint32

}; // IpUdp::Directory


}
}

#endif /* _CISCO_IOS_XR_IP_UDP_CFG_ */

