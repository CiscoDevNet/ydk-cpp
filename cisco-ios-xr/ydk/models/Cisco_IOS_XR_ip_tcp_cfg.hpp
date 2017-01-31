#ifndef _CISCO_IOS_XR_IP_TCP_CFG_
#define _CISCO_IOS_XR_IP_TCP_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ip_tcp_cfg {

class IpTcp : public Entity
{
    public:
        IpTcp();
        ~IpTcp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


        YLeaf accept_rate; //type: uint32
        YLeaf selective_ack; //type: empty
        YLeaf window_size; //type: uint32
        YLeaf receive_q; //type: uint32
        YLeaf maximum_segment_size; //type: uint32
        YLeaf syn_wait_time; //type: uint32
        YLeaf timestamp; //type: empty
        YLeaf path_mtu_discovery; //type: int32

    class Directory : public Entity
    {
        public:
            Directory();
            ~Directory();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


            YLeaf directoryname; //type: string
            YLeaf max_debug_files; //type: uint32
            YLeaf max_file_size_files; //type: uint32



    }; // IpTcp::Directory


    class Throttle : public Entity
    {
        public:
            Throttle();
            ~Throttle();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


            YLeaf tcpmin_throttle; //type: uint32
            YLeaf tcpmaxthrottle; //type: uint32



    }; // IpTcp::Throttle


    class NumThread : public Entity
    {
        public:
            NumThread();
            ~NumThread();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


            YLeaf tcp_in_q_threads; //type: uint32
            YLeaf tcp_out_q_threads; //type: uint32



    }; // IpTcp::NumThread


        std::unique_ptr<Cisco_IOS_XR_ip_tcp_cfg::IpTcp::Directory> directory; // presence node
        std::unique_ptr<Cisco_IOS_XR_ip_tcp_cfg::IpTcp::NumThread> num_thread; // presence node
        std::unique_ptr<Cisco_IOS_XR_ip_tcp_cfg::IpTcp::Throttle> throttle; // presence node


}; // IpTcp

class Ip : public Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;



    class Cinetd : public Entity
    {
        public:
            Cinetd();
            ~Cinetd();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class Services : public Entity
        {
            public:
                Services();
                ~Services();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class Ipv4 : public Entity
            {
                public:
                    Ipv4();
                    ~Ipv4();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class SmallServers : public Entity
                {
                    public:
                        SmallServers();
                        ~SmallServers();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class TcpSmallServers : public Entity
                    {
                        public:
                            TcpSmallServers();
                            ~TcpSmallServers();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf access_control_list_name; //type: string
                            YLeaf small_server; //type: int32



                    }; // Ip::Cinetd::Services::Ipv4::SmallServers::TcpSmallServers


                    class UdpSmallServers : public Entity
                    {
                        public:
                            UdpSmallServers();
                            ~UdpSmallServers();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf access_control_list_name; //type: string
                            YLeaf small_server; //type: uint32



                    }; // Ip::Cinetd::Services::Ipv4::SmallServers::UdpSmallServers


                        std::unique_ptr<Cisco_IOS_XR_ip_tcp_cfg::Ip::Cinetd::Services::Ipv4::SmallServers::TcpSmallServers> tcp_small_servers; // presence node
                        std::unique_ptr<Cisco_IOS_XR_ip_tcp_cfg::Ip::Cinetd::Services::Ipv4::SmallServers::UdpSmallServers> udp_small_servers; // presence node


                }; // Ip::Cinetd::Services::Ipv4::SmallServers


                    std::unique_ptr<Cisco_IOS_XR_ip_tcp_cfg::Ip::Cinetd::Services::Ipv4::SmallServers> small_servers;


            }; // Ip::Cinetd::Services::Ipv4


            class Vrfs : public Entity
            {
                public:
                    Vrfs();
                    ~Vrfs();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Vrf : public Entity
                {
                    public:
                        Vrf();
                        ~Vrf();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf vrf_name; //type: string

                    class Ipv6 : public Entity
                    {
                        public:
                            Ipv6();
                            ~Ipv6();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Telnet : public Entity
                        {
                            public:
                                Telnet();
                                ~Telnet();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class Tcp : public Entity
                            {
                                public:
                                    Tcp();
                                    ~Tcp();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf access_list_name; //type: string
                                    YLeaf maximum_server; //type: uint32



                            }; // Ip::Cinetd::Services::Vrfs::Vrf::Ipv6::Telnet::Tcp


                                std::unique_ptr<Cisco_IOS_XR_ip_tcp_cfg::Ip::Cinetd::Services::Vrfs::Vrf::Ipv6::Telnet::Tcp> tcp; // presence node


                        }; // Ip::Cinetd::Services::Vrfs::Vrf::Ipv6::Telnet


                        class Tftp : public Entity
                        {
                            public:
                                Tftp();
                                ~Tftp();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class Udp : public Entity
                            {
                                public:
                                    Udp();
                                    ~Udp();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf access_list_name; //type: string
                                    YLeaf maximum_server; //type: uint32
                                    YLeaf home_directory; //type: string
                                    YLeaf dscp_value; //type: int32



                            }; // Ip::Cinetd::Services::Vrfs::Vrf::Ipv6::Tftp::Udp


                                std::unique_ptr<Cisco_IOS_XR_ip_tcp_cfg::Ip::Cinetd::Services::Vrfs::Vrf::Ipv6::Tftp::Udp> udp; // presence node


                        }; // Ip::Cinetd::Services::Vrfs::Vrf::Ipv6::Tftp


                            std::unique_ptr<Cisco_IOS_XR_ip_tcp_cfg::Ip::Cinetd::Services::Vrfs::Vrf::Ipv6::Telnet> telnet;
                            std::unique_ptr<Cisco_IOS_XR_ip_tcp_cfg::Ip::Cinetd::Services::Vrfs::Vrf::Ipv6::Tftp> tftp;


                    }; // Ip::Cinetd::Services::Vrfs::Vrf::Ipv6


                    class Ipv4 : public Entity
                    {
                        public:
                            Ipv4();
                            ~Ipv4();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Telnet : public Entity
                        {
                            public:
                                Telnet();
                                ~Telnet();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class Tcp : public Entity
                            {
                                public:
                                    Tcp();
                                    ~Tcp();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf access_list_name; //type: string
                                    YLeaf maximum_server; //type: uint32



                            }; // Ip::Cinetd::Services::Vrfs::Vrf::Ipv4::Telnet::Tcp


                                std::unique_ptr<Cisco_IOS_XR_ip_tcp_cfg::Ip::Cinetd::Services::Vrfs::Vrf::Ipv4::Telnet::Tcp> tcp; // presence node


                        }; // Ip::Cinetd::Services::Vrfs::Vrf::Ipv4::Telnet


                        class Tftp : public Entity
                        {
                            public:
                                Tftp();
                                ~Tftp();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class Udp : public Entity
                            {
                                public:
                                    Udp();
                                    ~Udp();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf access_list_name; //type: string
                                    YLeaf maximum_server; //type: uint32
                                    YLeaf home_directory; //type: string
                                    YLeaf dscp_value; //type: int32



                            }; // Ip::Cinetd::Services::Vrfs::Vrf::Ipv4::Tftp::Udp


                                std::unique_ptr<Cisco_IOS_XR_ip_tcp_cfg::Ip::Cinetd::Services::Vrfs::Vrf::Ipv4::Tftp::Udp> udp; // presence node


                        }; // Ip::Cinetd::Services::Vrfs::Vrf::Ipv4::Tftp


                            std::unique_ptr<Cisco_IOS_XR_ip_tcp_cfg::Ip::Cinetd::Services::Vrfs::Vrf::Ipv4::Telnet> telnet;
                            std::unique_ptr<Cisco_IOS_XR_ip_tcp_cfg::Ip::Cinetd::Services::Vrfs::Vrf::Ipv4::Tftp> tftp;


                    }; // Ip::Cinetd::Services::Vrfs::Vrf::Ipv4


                        std::unique_ptr<Cisco_IOS_XR_ip_tcp_cfg::Ip::Cinetd::Services::Vrfs::Vrf::Ipv4> ipv4;
                        std::unique_ptr<Cisco_IOS_XR_ip_tcp_cfg::Ip::Cinetd::Services::Vrfs::Vrf::Ipv6> ipv6;


                }; // Ip::Cinetd::Services::Vrfs::Vrf


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ip_tcp_cfg::Ip::Cinetd::Services::Vrfs::Vrf> > vrf;


            }; // Ip::Cinetd::Services::Vrfs


            class Ipv6 : public Entity
            {
                public:
                    Ipv6();
                    ~Ipv6();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class SmallServers : public Entity
                {
                    public:
                        SmallServers();
                        ~SmallServers();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class TcpSmallServers : public Entity
                    {
                        public:
                            TcpSmallServers();
                            ~TcpSmallServers();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf access_control_list_name; //type: string
                            YLeaf small_server; //type: int32



                    }; // Ip::Cinetd::Services::Ipv6::SmallServers::TcpSmallServers


                        std::unique_ptr<Cisco_IOS_XR_ip_tcp_cfg::Ip::Cinetd::Services::Ipv6::SmallServers::TcpSmallServers> tcp_small_servers; // presence node


                }; // Ip::Cinetd::Services::Ipv6::SmallServers


                    std::unique_ptr<Cisco_IOS_XR_ip_tcp_cfg::Ip::Cinetd::Services::Ipv6::SmallServers> small_servers;


            }; // Ip::Cinetd::Services::Ipv6


                std::unique_ptr<Cisco_IOS_XR_ip_tcp_cfg::Ip::Cinetd::Services::Ipv4> ipv4;
                std::unique_ptr<Cisco_IOS_XR_ip_tcp_cfg::Ip::Cinetd::Services::Ipv6> ipv6;
                std::unique_ptr<Cisco_IOS_XR_ip_tcp_cfg::Ip::Cinetd::Services::Vrfs> vrfs;


        }; // Ip::Cinetd::Services


            std::unique_ptr<Cisco_IOS_XR_ip_tcp_cfg::Ip::Cinetd::Services> services;


    }; // Ip::Cinetd


    class ForwardProtocol : public Entity
    {
        public:
            ForwardProtocol();
            ~ForwardProtocol();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class Udp : public Entity
        {
            public:
                Udp();
                ~Udp();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf disable; //type: empty

            class Ports : public Entity
            {
                public:
                    Ports();
                    ~Ports();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Port : public Entity
                {
                    public:
                        Port();
                        ~Port();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf port_id; //type: uint16
                        YLeaf enable; //type: boolean



                }; // Ip::ForwardProtocol::Udp::Ports::Port


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ip_tcp_cfg::Ip::ForwardProtocol::Udp::Ports::Port> > port;


            }; // Ip::ForwardProtocol::Udp::Ports


                std::unique_ptr<Cisco_IOS_XR_ip_tcp_cfg::Ip::ForwardProtocol::Udp::Ports> ports;


        }; // Ip::ForwardProtocol::Udp


            std::unique_ptr<Cisco_IOS_XR_ip_tcp_cfg::Ip::ForwardProtocol::Udp> udp;


    }; // Ip::ForwardProtocol


        std::unique_ptr<Cisco_IOS_XR_ip_tcp_cfg::Ip::Cinetd> cinetd;
        std::unique_ptr<Cisco_IOS_XR_ip_tcp_cfg::Ip::ForwardProtocol> forward_protocol;


}; // Ip



}
}

#endif /* _CISCO_IOS_XR_IP_TCP_CFG_ */

