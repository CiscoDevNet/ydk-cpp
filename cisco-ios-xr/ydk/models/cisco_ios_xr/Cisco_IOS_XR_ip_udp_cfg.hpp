#ifndef _CISCO_IOS_XR_IP_UDP_CFG_
#define _CISCO_IOS_XR_IP_UDP_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_ip_udp_cfg {

class IpUdp : public Entity
{
    public:
        IpUdp();
        ~IpUdp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf receive_q; //type: uint32

        class NumThread; //type: IpUdp::NumThread
        class Directory; //type: IpUdp::Directory

        std::shared_ptr<Cisco_IOS_XR_ip_udp_cfg::IpUdp::Directory> directory; // presence node
        std::shared_ptr<Cisco_IOS_XR_ip_udp_cfg::IpUdp::NumThread> num_thread; // presence node


}; // IpUdp


class IpUdp::NumThread : public Entity
{
    public:
        NumThread();
        ~NumThread();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf udp_in_q_threads; //type: uint32
        YLeaf udp_out_q_threads; //type: uint32



}; // IpUdp::NumThread


class IpUdp::Directory : public Entity
{
    public:
        Directory();
        ~Directory();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf directoryname; //type: string
        YLeaf max_udp_debug_files; //type: uint32
        YLeaf max_file_size_files; //type: uint32



}; // IpUdp::Directory


}
}

#endif /* _CISCO_IOS_XR_IP_UDP_CFG_ */

