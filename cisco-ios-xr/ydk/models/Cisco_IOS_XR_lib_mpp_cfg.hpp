#ifndef _CISCO_IOS_XR_LIB_MPP_CFG_
#define _CISCO_IOS_XR_LIB_MPP_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_lib_mpp_cfg {

class ControlPlane : public Entity
{
    public:
        ControlPlane();
        ~ControlPlane();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;



    class ManagementPlaneProtection : public Entity
    {
        public:
            ManagementPlaneProtection();
            ~ManagementPlaneProtection();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class Outband : public Entity
        {
            public:
                Outband();
                ~Outband();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf outband_vrf; //type: string

            class InterfaceSelection : public Entity
            {
                public:
                    InterfaceSelection();
                    ~InterfaceSelection();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Interfaces : public Entity
                {
                    public:
                        Interfaces();
                        ~Interfaces();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Interface : public Entity
                    {
                        public:
                            Interface();
                            ~Interface();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf interface_name; //type: string

                        class HttpProtocol : public Entity
                        {
                            public:
                                HttpProtocol();
                                ~HttpProtocol();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class PeerClass : public Entity
                            {
                                public:
                                    PeerClass();
                                    ~PeerClass();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf peer_all; //type: empty

                                class PeerV4 : public Entity
                                {
                                    public:
                                        PeerV4();
                                        ~PeerV4();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class Peers : public Entity
                                    {
                                        public:
                                            Peers();
                                            ~Peers();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class Peer : public Entity
                                        {
                                            public:
                                                Peer();
                                                ~Peer();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf address; //type: string



                                        }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers::Peer


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers::Peer> > peer;


                                    }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers


                                    class PeerPrefixes : public Entity
                                    {
                                        public:
                                            PeerPrefixes();
                                            ~PeerPrefixes();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class PeerPrefix : public Entity
                                        {
                                            public:
                                                PeerPrefix();
                                                ~PeerPrefix();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf address_prefix; //type: string



                                        }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;


                                    }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes


                                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
                                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers> peers;


                                }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4


                                class PeerV6 : public Entity
                                {
                                    public:
                                        PeerV6();
                                        ~PeerV6();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class Peers : public Entity
                                    {
                                        public:
                                            Peers();
                                            ~Peers();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class Peer : public Entity
                                        {
                                            public:
                                                Peer();
                                                ~Peer();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf address; //type: string



                                        }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers::Peer


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers::Peer> > peer;


                                    }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers


                                    class PeerPrefixes : public Entity
                                    {
                                        public:
                                            PeerPrefixes();
                                            ~PeerPrefixes();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class PeerPrefix : public Entity
                                        {
                                            public:
                                                PeerPrefix();
                                                ~PeerPrefix();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf address_prefix; //type: string



                                        }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;


                                    }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes


                                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
                                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers> peers;


                                }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6


                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4> peer_v4;
                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6> peer_v6;


                            }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass


                                std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass> peer_class;


                        }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol


                        class TftpProtocol : public Entity
                        {
                            public:
                                TftpProtocol();
                                ~TftpProtocol();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class PeerClass : public Entity
                            {
                                public:
                                    PeerClass();
                                    ~PeerClass();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf peer_all; //type: empty

                                class PeerV4 : public Entity
                                {
                                    public:
                                        PeerV4();
                                        ~PeerV4();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class Peers : public Entity
                                    {
                                        public:
                                            Peers();
                                            ~Peers();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class Peer : public Entity
                                        {
                                            public:
                                                Peer();
                                                ~Peer();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf address; //type: string



                                        }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::Peer


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::Peer> > peer;


                                    }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers


                                    class PeerPrefixes : public Entity
                                    {
                                        public:
                                            PeerPrefixes();
                                            ~PeerPrefixes();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class PeerPrefix : public Entity
                                        {
                                            public:
                                                PeerPrefix();
                                                ~PeerPrefix();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf address_prefix; //type: string



                                        }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;


                                    }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes


                                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
                                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers> peers;


                                }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4


                                class PeerV6 : public Entity
                                {
                                    public:
                                        PeerV6();
                                        ~PeerV6();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class Peers : public Entity
                                    {
                                        public:
                                            Peers();
                                            ~Peers();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class Peer : public Entity
                                        {
                                            public:
                                                Peer();
                                                ~Peer();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf address; //type: string



                                        }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::Peer


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::Peer> > peer;


                                    }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers


                                    class PeerPrefixes : public Entity
                                    {
                                        public:
                                            PeerPrefixes();
                                            ~PeerPrefixes();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class PeerPrefix : public Entity
                                        {
                                            public:
                                                PeerPrefix();
                                                ~PeerPrefix();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf address_prefix; //type: string



                                        }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;


                                    }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes


                                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
                                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers> peers;


                                }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6


                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4> peer_v4;
                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6> peer_v6;


                            }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass


                                std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass> peer_class;


                        }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol


                        class NetconfProtocol : public Entity
                        {
                            public:
                                NetconfProtocol();
                                ~NetconfProtocol();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class PeerClass : public Entity
                            {
                                public:
                                    PeerClass();
                                    ~PeerClass();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf peer_all; //type: empty

                                class PeerV4 : public Entity
                                {
                                    public:
                                        PeerV4();
                                        ~PeerV4();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class Peers : public Entity
                                    {
                                        public:
                                            Peers();
                                            ~Peers();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class Peer : public Entity
                                        {
                                            public:
                                                Peer();
                                                ~Peer();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf address; //type: string



                                        }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers::Peer


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers::Peer> > peer;


                                    }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers


                                    class PeerPrefixes : public Entity
                                    {
                                        public:
                                            PeerPrefixes();
                                            ~PeerPrefixes();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class PeerPrefix : public Entity
                                        {
                                            public:
                                                PeerPrefix();
                                                ~PeerPrefix();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf address_prefix; //type: string



                                        }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;


                                    }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes


                                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
                                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers> peers;


                                }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4


                                class PeerV6 : public Entity
                                {
                                    public:
                                        PeerV6();
                                        ~PeerV6();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class Peers : public Entity
                                    {
                                        public:
                                            Peers();
                                            ~Peers();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class Peer : public Entity
                                        {
                                            public:
                                                Peer();
                                                ~Peer();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf address; //type: string



                                        }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers::Peer


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers::Peer> > peer;


                                    }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers


                                    class PeerPrefixes : public Entity
                                    {
                                        public:
                                            PeerPrefixes();
                                            ~PeerPrefixes();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class PeerPrefix : public Entity
                                        {
                                            public:
                                                PeerPrefix();
                                                ~PeerPrefix();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf address_prefix; //type: string



                                        }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;


                                    }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes


                                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
                                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers> peers;


                                }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6


                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4> peer_v4;
                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6> peer_v6;


                            }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass


                                std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass> peer_class;


                        }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol


                        class XrXml : public Entity
                        {
                            public:
                                XrXml();
                                ~XrXml();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class PeerClass : public Entity
                            {
                                public:
                                    PeerClass();
                                    ~PeerClass();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf peer_all; //type: empty

                                class PeerV4 : public Entity
                                {
                                    public:
                                        PeerV4();
                                        ~PeerV4();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class Peers : public Entity
                                    {
                                        public:
                                            Peers();
                                            ~Peers();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class Peer : public Entity
                                        {
                                            public:
                                                Peer();
                                                ~Peer();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf address; //type: string



                                        }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::Peer


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::Peer> > peer;


                                    }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers


                                    class PeerPrefixes : public Entity
                                    {
                                        public:
                                            PeerPrefixes();
                                            ~PeerPrefixes();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class PeerPrefix : public Entity
                                        {
                                            public:
                                                PeerPrefix();
                                                ~PeerPrefix();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf address_prefix; //type: string



                                        }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;


                                    }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes


                                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
                                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers> peers;


                                }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4


                                class PeerV6 : public Entity
                                {
                                    public:
                                        PeerV6();
                                        ~PeerV6();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class Peers : public Entity
                                    {
                                        public:
                                            Peers();
                                            ~Peers();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class Peer : public Entity
                                        {
                                            public:
                                                Peer();
                                                ~Peer();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf address; //type: string



                                        }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::Peer


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::Peer> > peer;


                                    }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers


                                    class PeerPrefixes : public Entity
                                    {
                                        public:
                                            PeerPrefixes();
                                            ~PeerPrefixes();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class PeerPrefix : public Entity
                                        {
                                            public:
                                                PeerPrefix();
                                                ~PeerPrefix();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf address_prefix; //type: string



                                        }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;


                                    }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes


                                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
                                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers> peers;


                                }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6


                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4> peer_v4;
                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6> peer_v6;


                            }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass


                                std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass> peer_class;


                        }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml


                        class SshProtocol : public Entity
                        {
                            public:
                                SshProtocol();
                                ~SshProtocol();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class PeerClass : public Entity
                            {
                                public:
                                    PeerClass();
                                    ~PeerClass();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf peer_all; //type: empty

                                class PeerV4 : public Entity
                                {
                                    public:
                                        PeerV4();
                                        ~PeerV4();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class Peers : public Entity
                                    {
                                        public:
                                            Peers();
                                            ~Peers();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class Peer : public Entity
                                        {
                                            public:
                                                Peer();
                                                ~Peer();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf address; //type: string



                                        }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::Peer


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::Peer> > peer;


                                    }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers


                                    class PeerPrefixes : public Entity
                                    {
                                        public:
                                            PeerPrefixes();
                                            ~PeerPrefixes();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class PeerPrefix : public Entity
                                        {
                                            public:
                                                PeerPrefix();
                                                ~PeerPrefix();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf address_prefix; //type: string



                                        }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;


                                    }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes


                                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
                                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers> peers;


                                }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4


                                class PeerV6 : public Entity
                                {
                                    public:
                                        PeerV6();
                                        ~PeerV6();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class Peers : public Entity
                                    {
                                        public:
                                            Peers();
                                            ~Peers();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class Peer : public Entity
                                        {
                                            public:
                                                Peer();
                                                ~Peer();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf address; //type: string



                                        }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::Peer


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::Peer> > peer;


                                    }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers


                                    class PeerPrefixes : public Entity
                                    {
                                        public:
                                            PeerPrefixes();
                                            ~PeerPrefixes();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class PeerPrefix : public Entity
                                        {
                                            public:
                                                PeerPrefix();
                                                ~PeerPrefix();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf address_prefix; //type: string



                                        }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;


                                    }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes


                                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
                                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers> peers;


                                }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6


                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4> peer_v4;
                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6> peer_v6;


                            }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass


                                std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass> peer_class;


                        }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol


                        class SnmpProtocol : public Entity
                        {
                            public:
                                SnmpProtocol();
                                ~SnmpProtocol();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class PeerClass : public Entity
                            {
                                public:
                                    PeerClass();
                                    ~PeerClass();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf peer_all; //type: empty

                                class PeerV4 : public Entity
                                {
                                    public:
                                        PeerV4();
                                        ~PeerV4();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class Peers : public Entity
                                    {
                                        public:
                                            Peers();
                                            ~Peers();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class Peer : public Entity
                                        {
                                            public:
                                                Peer();
                                                ~Peer();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf address; //type: string



                                        }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers::Peer


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers::Peer> > peer;


                                    }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers


                                    class PeerPrefixes : public Entity
                                    {
                                        public:
                                            PeerPrefixes();
                                            ~PeerPrefixes();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class PeerPrefix : public Entity
                                        {
                                            public:
                                                PeerPrefix();
                                                ~PeerPrefix();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf address_prefix; //type: string



                                        }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;


                                    }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes


                                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
                                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers> peers;


                                }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4


                                class PeerV6 : public Entity
                                {
                                    public:
                                        PeerV6();
                                        ~PeerV6();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class Peers : public Entity
                                    {
                                        public:
                                            Peers();
                                            ~Peers();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class Peer : public Entity
                                        {
                                            public:
                                                Peer();
                                                ~Peer();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf address; //type: string



                                        }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::Peer


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::Peer> > peer;


                                    }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers


                                    class PeerPrefixes : public Entity
                                    {
                                        public:
                                            PeerPrefixes();
                                            ~PeerPrefixes();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class PeerPrefix : public Entity
                                        {
                                            public:
                                                PeerPrefix();
                                                ~PeerPrefix();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf address_prefix; //type: string



                                        }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;


                                    }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes


                                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
                                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers> peers;


                                }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6


                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4> peer_v4;
                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6> peer_v6;


                            }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass


                                std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass> peer_class;


                        }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol


                        class TelnetProtocol : public Entity
                        {
                            public:
                                TelnetProtocol();
                                ~TelnetProtocol();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class PeerClass : public Entity
                            {
                                public:
                                    PeerClass();
                                    ~PeerClass();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf peer_all; //type: empty

                                class PeerV4 : public Entity
                                {
                                    public:
                                        PeerV4();
                                        ~PeerV4();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class Peers : public Entity
                                    {
                                        public:
                                            Peers();
                                            ~Peers();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class Peer : public Entity
                                        {
                                            public:
                                                Peer();
                                                ~Peer();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf address; //type: string



                                        }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::Peer


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::Peer> > peer;


                                    }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers


                                    class PeerPrefixes : public Entity
                                    {
                                        public:
                                            PeerPrefixes();
                                            ~PeerPrefixes();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class PeerPrefix : public Entity
                                        {
                                            public:
                                                PeerPrefix();
                                                ~PeerPrefix();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf address_prefix; //type: string



                                        }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;


                                    }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes


                                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
                                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers> peers;


                                }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4


                                class PeerV6 : public Entity
                                {
                                    public:
                                        PeerV6();
                                        ~PeerV6();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class Peers : public Entity
                                    {
                                        public:
                                            Peers();
                                            ~Peers();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class Peer : public Entity
                                        {
                                            public:
                                                Peer();
                                                ~Peer();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf address; //type: string



                                        }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::Peer


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::Peer> > peer;


                                    }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers


                                    class PeerPrefixes : public Entity
                                    {
                                        public:
                                            PeerPrefixes();
                                            ~PeerPrefixes();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class PeerPrefix : public Entity
                                        {
                                            public:
                                                PeerPrefix();
                                                ~PeerPrefix();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf address_prefix; //type: string



                                        }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;


                                    }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes


                                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
                                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers> peers;


                                }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6


                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4> peer_v4;
                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6> peer_v6;


                            }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass


                                std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass> peer_class;


                        }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol


                        class AllProtocols : public Entity
                        {
                            public:
                                AllProtocols();
                                ~AllProtocols();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class PeerClass : public Entity
                            {
                                public:
                                    PeerClass();
                                    ~PeerClass();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf peer_all; //type: empty

                                class PeerV4 : public Entity
                                {
                                    public:
                                        PeerV4();
                                        ~PeerV4();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class Peers : public Entity
                                    {
                                        public:
                                            Peers();
                                            ~Peers();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class Peer : public Entity
                                        {
                                            public:
                                                Peer();
                                                ~Peer();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf address; //type: string



                                        }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers::Peer


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers::Peer> > peer;


                                    }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers


                                    class PeerPrefixes : public Entity
                                    {
                                        public:
                                            PeerPrefixes();
                                            ~PeerPrefixes();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class PeerPrefix : public Entity
                                        {
                                            public:
                                                PeerPrefix();
                                                ~PeerPrefix();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf address_prefix; //type: string



                                        }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;


                                    }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes


                                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
                                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers> peers;


                                }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4


                                class PeerV6 : public Entity
                                {
                                    public:
                                        PeerV6();
                                        ~PeerV6();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class Peers : public Entity
                                    {
                                        public:
                                            Peers();
                                            ~Peers();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class Peer : public Entity
                                        {
                                            public:
                                                Peer();
                                                ~Peer();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf address; //type: string



                                        }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers::Peer


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers::Peer> > peer;


                                    }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers


                                    class PeerPrefixes : public Entity
                                    {
                                        public:
                                            PeerPrefixes();
                                            ~PeerPrefixes();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class PeerPrefix : public Entity
                                        {
                                            public:
                                                PeerPrefix();
                                                ~PeerPrefix();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf address_prefix; //type: string



                                        }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;


                                    }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes


                                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
                                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers> peers;


                                }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6


                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4> peer_v4;
                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6> peer_v6;


                            }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass


                                std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass> peer_class;


                        }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols


                            std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::AllProtocols> all_protocols;
                            std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::HttpProtocol> http_protocol;
                            std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::NetconfProtocol> netconf_protocol;
                            std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SnmpProtocol> snmp_protocol;
                            std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::SshProtocol> ssh_protocol;
                            std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TelnetProtocol> telnet_protocol;
                            std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::TftpProtocol> tftp_protocol;
                            std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface::XrXml> xr_xml;


                    }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface


                        std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces::Interface> > interface;


                }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces


                class AllInterfaces : public Entity
                {
                    public:
                        AllInterfaces();
                        ~AllInterfaces();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class HttpProtocol : public Entity
                    {
                        public:
                            HttpProtocol();
                            ~HttpProtocol();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class PeerClass : public Entity
                        {
                            public:
                                PeerClass();
                                ~PeerClass();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf peer_all; //type: empty

                            class PeerV4 : public Entity
                            {
                                public:
                                    PeerV4();
                                    ~PeerV4();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;



                                class Peers : public Entity
                                {
                                    public:
                                        Peers();
                                        ~Peers();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class Peer : public Entity
                                    {
                                        public:
                                            Peer();
                                            ~Peer();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf address; //type: string



                                    }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers::Peer


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers::Peer> > peer;


                                }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers


                                class PeerPrefixes : public Entity
                                {
                                    public:
                                        PeerPrefixes();
                                        ~PeerPrefixes();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class PeerPrefix : public Entity
                                    {
                                        public:
                                            PeerPrefix();
                                            ~PeerPrefix();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf address_prefix; //type: string



                                    }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;


                                }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes


                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers> peers;


                            }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4


                            class PeerV6 : public Entity
                            {
                                public:
                                    PeerV6();
                                    ~PeerV6();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;



                                class Peers : public Entity
                                {
                                    public:
                                        Peers();
                                        ~Peers();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class Peer : public Entity
                                    {
                                        public:
                                            Peer();
                                            ~Peer();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf address; //type: string



                                    }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers::Peer


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers::Peer> > peer;


                                }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers


                                class PeerPrefixes : public Entity
                                {
                                    public:
                                        PeerPrefixes();
                                        ~PeerPrefixes();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class PeerPrefix : public Entity
                                    {
                                        public:
                                            PeerPrefix();
                                            ~PeerPrefix();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf address_prefix; //type: string



                                    }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;


                                }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes


                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers> peers;


                            }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6


                                std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4> peer_v4;
                                std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6> peer_v6;


                        }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass


                            std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass> peer_class;


                    }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol


                    class TftpProtocol : public Entity
                    {
                        public:
                            TftpProtocol();
                            ~TftpProtocol();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class PeerClass : public Entity
                        {
                            public:
                                PeerClass();
                                ~PeerClass();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf peer_all; //type: empty

                            class PeerV4 : public Entity
                            {
                                public:
                                    PeerV4();
                                    ~PeerV4();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;



                                class Peers : public Entity
                                {
                                    public:
                                        Peers();
                                        ~Peers();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class Peer : public Entity
                                    {
                                        public:
                                            Peer();
                                            ~Peer();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf address; //type: string



                                    }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers::Peer


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers::Peer> > peer;


                                }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers


                                class PeerPrefixes : public Entity
                                {
                                    public:
                                        PeerPrefixes();
                                        ~PeerPrefixes();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class PeerPrefix : public Entity
                                    {
                                        public:
                                            PeerPrefix();
                                            ~PeerPrefix();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf address_prefix; //type: string



                                    }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;


                                }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes


                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers> peers;


                            }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4


                            class PeerV6 : public Entity
                            {
                                public:
                                    PeerV6();
                                    ~PeerV6();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;



                                class Peers : public Entity
                                {
                                    public:
                                        Peers();
                                        ~Peers();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class Peer : public Entity
                                    {
                                        public:
                                            Peer();
                                            ~Peer();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf address; //type: string



                                    }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers::Peer


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers::Peer> > peer;


                                }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers


                                class PeerPrefixes : public Entity
                                {
                                    public:
                                        PeerPrefixes();
                                        ~PeerPrefixes();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class PeerPrefix : public Entity
                                    {
                                        public:
                                            PeerPrefix();
                                            ~PeerPrefix();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf address_prefix; //type: string



                                    }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;


                                }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes


                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers> peers;


                            }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6


                                std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4> peer_v4;
                                std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6> peer_v6;


                        }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass


                            std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass> peer_class;


                    }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol


                    class NetconfProtocol : public Entity
                    {
                        public:
                            NetconfProtocol();
                            ~NetconfProtocol();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class PeerClass : public Entity
                        {
                            public:
                                PeerClass();
                                ~PeerClass();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf peer_all; //type: empty

                            class PeerV4 : public Entity
                            {
                                public:
                                    PeerV4();
                                    ~PeerV4();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;



                                class Peers : public Entity
                                {
                                    public:
                                        Peers();
                                        ~Peers();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class Peer : public Entity
                                    {
                                        public:
                                            Peer();
                                            ~Peer();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf address; //type: string



                                    }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers::Peer


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers::Peer> > peer;


                                }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers


                                class PeerPrefixes : public Entity
                                {
                                    public:
                                        PeerPrefixes();
                                        ~PeerPrefixes();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class PeerPrefix : public Entity
                                    {
                                        public:
                                            PeerPrefix();
                                            ~PeerPrefix();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf address_prefix; //type: string



                                    }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;


                                }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes


                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers> peers;


                            }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4


                            class PeerV6 : public Entity
                            {
                                public:
                                    PeerV6();
                                    ~PeerV6();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;



                                class Peers : public Entity
                                {
                                    public:
                                        Peers();
                                        ~Peers();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class Peer : public Entity
                                    {
                                        public:
                                            Peer();
                                            ~Peer();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf address; //type: string



                                    }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers::Peer


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers::Peer> > peer;


                                }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers


                                class PeerPrefixes : public Entity
                                {
                                    public:
                                        PeerPrefixes();
                                        ~PeerPrefixes();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class PeerPrefix : public Entity
                                    {
                                        public:
                                            PeerPrefix();
                                            ~PeerPrefix();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf address_prefix; //type: string



                                    }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;


                                }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes


                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers> peers;


                            }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6


                                std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4> peer_v4;
                                std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6> peer_v6;


                        }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass


                            std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass> peer_class;


                    }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol


                    class XrXml : public Entity
                    {
                        public:
                            XrXml();
                            ~XrXml();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class PeerClass : public Entity
                        {
                            public:
                                PeerClass();
                                ~PeerClass();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf peer_all; //type: empty

                            class PeerV4 : public Entity
                            {
                                public:
                                    PeerV4();
                                    ~PeerV4();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;



                                class Peers : public Entity
                                {
                                    public:
                                        Peers();
                                        ~Peers();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class Peer : public Entity
                                    {
                                        public:
                                            Peer();
                                            ~Peer();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf address; //type: string



                                    }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers::Peer


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers::Peer> > peer;


                                }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers


                                class PeerPrefixes : public Entity
                                {
                                    public:
                                        PeerPrefixes();
                                        ~PeerPrefixes();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class PeerPrefix : public Entity
                                    {
                                        public:
                                            PeerPrefix();
                                            ~PeerPrefix();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf address_prefix; //type: string



                                    }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;


                                }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes


                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers> peers;


                            }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4


                            class PeerV6 : public Entity
                            {
                                public:
                                    PeerV6();
                                    ~PeerV6();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;



                                class Peers : public Entity
                                {
                                    public:
                                        Peers();
                                        ~Peers();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class Peer : public Entity
                                    {
                                        public:
                                            Peer();
                                            ~Peer();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf address; //type: string



                                    }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers::Peer


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers::Peer> > peer;


                                }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers


                                class PeerPrefixes : public Entity
                                {
                                    public:
                                        PeerPrefixes();
                                        ~PeerPrefixes();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class PeerPrefix : public Entity
                                    {
                                        public:
                                            PeerPrefix();
                                            ~PeerPrefix();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf address_prefix; //type: string



                                    }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;


                                }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes


                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers> peers;


                            }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6


                                std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4> peer_v4;
                                std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6> peer_v6;


                        }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass


                            std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml::PeerClass> peer_class;


                    }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml


                    class SshProtocol : public Entity
                    {
                        public:
                            SshProtocol();
                            ~SshProtocol();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class PeerClass : public Entity
                        {
                            public:
                                PeerClass();
                                ~PeerClass();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf peer_all; //type: empty

                            class PeerV4 : public Entity
                            {
                                public:
                                    PeerV4();
                                    ~PeerV4();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;



                                class Peers : public Entity
                                {
                                    public:
                                        Peers();
                                        ~Peers();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class Peer : public Entity
                                    {
                                        public:
                                            Peer();
                                            ~Peer();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf address; //type: string



                                    }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::Peer


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::Peer> > peer;


                                }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers


                                class PeerPrefixes : public Entity
                                {
                                    public:
                                        PeerPrefixes();
                                        ~PeerPrefixes();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class PeerPrefix : public Entity
                                    {
                                        public:
                                            PeerPrefix();
                                            ~PeerPrefix();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf address_prefix; //type: string



                                    }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;


                                }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes


                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers> peers;


                            }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4


                            class PeerV6 : public Entity
                            {
                                public:
                                    PeerV6();
                                    ~PeerV6();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;



                                class Peers : public Entity
                                {
                                    public:
                                        Peers();
                                        ~Peers();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class Peer : public Entity
                                    {
                                        public:
                                            Peer();
                                            ~Peer();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf address; //type: string



                                    }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::Peer


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::Peer> > peer;


                                }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers


                                class PeerPrefixes : public Entity
                                {
                                    public:
                                        PeerPrefixes();
                                        ~PeerPrefixes();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class PeerPrefix : public Entity
                                    {
                                        public:
                                            PeerPrefix();
                                            ~PeerPrefix();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf address_prefix; //type: string



                                    }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;


                                }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes


                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers> peers;


                            }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6


                                std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4> peer_v4;
                                std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6> peer_v6;


                        }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass


                            std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass> peer_class;


                    }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol


                    class SnmpProtocol : public Entity
                    {
                        public:
                            SnmpProtocol();
                            ~SnmpProtocol();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class PeerClass : public Entity
                        {
                            public:
                                PeerClass();
                                ~PeerClass();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf peer_all; //type: empty

                            class PeerV4 : public Entity
                            {
                                public:
                                    PeerV4();
                                    ~PeerV4();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;



                                class Peers : public Entity
                                {
                                    public:
                                        Peers();
                                        ~Peers();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class Peer : public Entity
                                    {
                                        public:
                                            Peer();
                                            ~Peer();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf address; //type: string



                                    }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::Peer


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::Peer> > peer;


                                }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers


                                class PeerPrefixes : public Entity
                                {
                                    public:
                                        PeerPrefixes();
                                        ~PeerPrefixes();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class PeerPrefix : public Entity
                                    {
                                        public:
                                            PeerPrefix();
                                            ~PeerPrefix();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf address_prefix; //type: string



                                    }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;


                                }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes


                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers> peers;


                            }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4


                            class PeerV6 : public Entity
                            {
                                public:
                                    PeerV6();
                                    ~PeerV6();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;



                                class Peers : public Entity
                                {
                                    public:
                                        Peers();
                                        ~Peers();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class Peer : public Entity
                                    {
                                        public:
                                            Peer();
                                            ~Peer();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf address; //type: string



                                    }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::Peer


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::Peer> > peer;


                                }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers


                                class PeerPrefixes : public Entity
                                {
                                    public:
                                        PeerPrefixes();
                                        ~PeerPrefixes();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class PeerPrefix : public Entity
                                    {
                                        public:
                                            PeerPrefix();
                                            ~PeerPrefix();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf address_prefix; //type: string



                                    }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;


                                }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes


                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers> peers;


                            }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6


                                std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4> peer_v4;
                                std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6> peer_v6;


                        }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass


                            std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass> peer_class;


                    }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol


                    class TelnetProtocol : public Entity
                    {
                        public:
                            TelnetProtocol();
                            ~TelnetProtocol();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class PeerClass : public Entity
                        {
                            public:
                                PeerClass();
                                ~PeerClass();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf peer_all; //type: empty

                            class PeerV4 : public Entity
                            {
                                public:
                                    PeerV4();
                                    ~PeerV4();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;



                                class Peers : public Entity
                                {
                                    public:
                                        Peers();
                                        ~Peers();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class Peer : public Entity
                                    {
                                        public:
                                            Peer();
                                            ~Peer();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf address; //type: string



                                    }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::Peer


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::Peer> > peer;


                                }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers


                                class PeerPrefixes : public Entity
                                {
                                    public:
                                        PeerPrefixes();
                                        ~PeerPrefixes();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class PeerPrefix : public Entity
                                    {
                                        public:
                                            PeerPrefix();
                                            ~PeerPrefix();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf address_prefix; //type: string



                                    }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;


                                }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes


                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers> peers;


                            }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4


                            class PeerV6 : public Entity
                            {
                                public:
                                    PeerV6();
                                    ~PeerV6();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;



                                class Peers : public Entity
                                {
                                    public:
                                        Peers();
                                        ~Peers();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class Peer : public Entity
                                    {
                                        public:
                                            Peer();
                                            ~Peer();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf address; //type: string



                                    }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::Peer


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::Peer> > peer;


                                }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers


                                class PeerPrefixes : public Entity
                                {
                                    public:
                                        PeerPrefixes();
                                        ~PeerPrefixes();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class PeerPrefix : public Entity
                                    {
                                        public:
                                            PeerPrefix();
                                            ~PeerPrefix();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf address_prefix; //type: string



                                    }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;


                                }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes


                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers> peers;


                            }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6


                                std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4> peer_v4;
                                std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6> peer_v6;


                        }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass


                            std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass> peer_class;


                    }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol


                    class AllProtocols : public Entity
                    {
                        public:
                            AllProtocols();
                            ~AllProtocols();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class PeerClass : public Entity
                        {
                            public:
                                PeerClass();
                                ~PeerClass();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf peer_all; //type: empty

                            class PeerV4 : public Entity
                            {
                                public:
                                    PeerV4();
                                    ~PeerV4();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;



                                class Peers : public Entity
                                {
                                    public:
                                        Peers();
                                        ~Peers();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class Peer : public Entity
                                    {
                                        public:
                                            Peer();
                                            ~Peer();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf address; //type: string



                                    }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::Peer


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::Peer> > peer;


                                }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers


                                class PeerPrefixes : public Entity
                                {
                                    public:
                                        PeerPrefixes();
                                        ~PeerPrefixes();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class PeerPrefix : public Entity
                                    {
                                        public:
                                            PeerPrefix();
                                            ~PeerPrefix();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf address_prefix; //type: string



                                    }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;


                                }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes


                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers> peers;


                            }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4


                            class PeerV6 : public Entity
                            {
                                public:
                                    PeerV6();
                                    ~PeerV6();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;



                                class Peers : public Entity
                                {
                                    public:
                                        Peers();
                                        ~Peers();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class Peer : public Entity
                                    {
                                        public:
                                            Peer();
                                            ~Peer();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf address; //type: string



                                    }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::Peer


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::Peer> > peer;


                                }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers


                                class PeerPrefixes : public Entity
                                {
                                    public:
                                        PeerPrefixes();
                                        ~PeerPrefixes();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class PeerPrefix : public Entity
                                    {
                                        public:
                                            PeerPrefix();
                                            ~PeerPrefix();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf address_prefix; //type: string



                                    }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;


                                }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes


                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers> peers;


                            }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6


                                std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4> peer_v4;
                                std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6> peer_v6;


                        }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass


                            std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass> peer_class;


                    }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols


                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::AllProtocols> all_protocols;
                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::HttpProtocol> http_protocol;
                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::NetconfProtocol> netconf_protocol;
                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SnmpProtocol> snmp_protocol;
                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::SshProtocol> ssh_protocol;
                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TelnetProtocol> telnet_protocol;
                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::TftpProtocol> tftp_protocol;
                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces::XrXml> xr_xml;


                }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces


                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::AllInterfaces> all_interfaces;
                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection::Interfaces> interfaces;


            }; // ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection


                std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband::InterfaceSelection> interface_selection;


        }; // ControlPlane::ManagementPlaneProtection::Outband


        class Inband : public Entity
        {
            public:
                Inband();
                ~Inband();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class InterfaceSelection : public Entity
            {
                public:
                    InterfaceSelection();
                    ~InterfaceSelection();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Interfaces : public Entity
                {
                    public:
                        Interfaces();
                        ~Interfaces();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Interface : public Entity
                    {
                        public:
                            Interface();
                            ~Interface();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf interface_name; //type: string

                        class HttpProtocol : public Entity
                        {
                            public:
                                HttpProtocol();
                                ~HttpProtocol();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class PeerClass : public Entity
                            {
                                public:
                                    PeerClass();
                                    ~PeerClass();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf peer_all; //type: empty

                                class PeerV4 : public Entity
                                {
                                    public:
                                        PeerV4();
                                        ~PeerV4();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class Peers : public Entity
                                    {
                                        public:
                                            Peers();
                                            ~Peers();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class Peer : public Entity
                                        {
                                            public:
                                                Peer();
                                                ~Peer();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf address; //type: string



                                        }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers::Peer


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers::Peer> > peer;


                                    }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers


                                    class PeerPrefixes : public Entity
                                    {
                                        public:
                                            PeerPrefixes();
                                            ~PeerPrefixes();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class PeerPrefix : public Entity
                                        {
                                            public:
                                                PeerPrefix();
                                                ~PeerPrefix();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf address_prefix; //type: string



                                        }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;


                                    }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes


                                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
                                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4::Peers> peers;


                                }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4


                                class PeerV6 : public Entity
                                {
                                    public:
                                        PeerV6();
                                        ~PeerV6();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class Peers : public Entity
                                    {
                                        public:
                                            Peers();
                                            ~Peers();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class Peer : public Entity
                                        {
                                            public:
                                                Peer();
                                                ~Peer();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf address; //type: string



                                        }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers::Peer


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers::Peer> > peer;


                                    }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers


                                    class PeerPrefixes : public Entity
                                    {
                                        public:
                                            PeerPrefixes();
                                            ~PeerPrefixes();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class PeerPrefix : public Entity
                                        {
                                            public:
                                                PeerPrefix();
                                                ~PeerPrefix();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf address_prefix; //type: string



                                        }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;


                                    }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes


                                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
                                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6::Peers> peers;


                                }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6


                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV4> peer_v4;
                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass::PeerV6> peer_v6;


                            }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass


                                std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol::PeerClass> peer_class;


                        }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol


                        class TftpProtocol : public Entity
                        {
                            public:
                                TftpProtocol();
                                ~TftpProtocol();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class PeerClass : public Entity
                            {
                                public:
                                    PeerClass();
                                    ~PeerClass();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf peer_all; //type: empty

                                class PeerV4 : public Entity
                                {
                                    public:
                                        PeerV4();
                                        ~PeerV4();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class Peers : public Entity
                                    {
                                        public:
                                            Peers();
                                            ~Peers();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class Peer : public Entity
                                        {
                                            public:
                                                Peer();
                                                ~Peer();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf address; //type: string



                                        }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::Peer


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers::Peer> > peer;


                                    }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers


                                    class PeerPrefixes : public Entity
                                    {
                                        public:
                                            PeerPrefixes();
                                            ~PeerPrefixes();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class PeerPrefix : public Entity
                                        {
                                            public:
                                                PeerPrefix();
                                                ~PeerPrefix();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf address_prefix; //type: string



                                        }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;


                                    }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes


                                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
                                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4::Peers> peers;


                                }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4


                                class PeerV6 : public Entity
                                {
                                    public:
                                        PeerV6();
                                        ~PeerV6();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class Peers : public Entity
                                    {
                                        public:
                                            Peers();
                                            ~Peers();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class Peer : public Entity
                                        {
                                            public:
                                                Peer();
                                                ~Peer();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf address; //type: string



                                        }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::Peer


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers::Peer> > peer;


                                    }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers


                                    class PeerPrefixes : public Entity
                                    {
                                        public:
                                            PeerPrefixes();
                                            ~PeerPrefixes();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class PeerPrefix : public Entity
                                        {
                                            public:
                                                PeerPrefix();
                                                ~PeerPrefix();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf address_prefix; //type: string



                                        }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;


                                    }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes


                                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
                                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6::Peers> peers;


                                }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6


                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV4> peer_v4;
                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass::PeerV6> peer_v6;


                            }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass


                                std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol::PeerClass> peer_class;


                        }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol


                        class NetconfProtocol : public Entity
                        {
                            public:
                                NetconfProtocol();
                                ~NetconfProtocol();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class PeerClass : public Entity
                            {
                                public:
                                    PeerClass();
                                    ~PeerClass();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf peer_all; //type: empty

                                class PeerV4 : public Entity
                                {
                                    public:
                                        PeerV4();
                                        ~PeerV4();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class Peers : public Entity
                                    {
                                        public:
                                            Peers();
                                            ~Peers();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class Peer : public Entity
                                        {
                                            public:
                                                Peer();
                                                ~Peer();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf address; //type: string



                                        }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers::Peer


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers::Peer> > peer;


                                    }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers


                                    class PeerPrefixes : public Entity
                                    {
                                        public:
                                            PeerPrefixes();
                                            ~PeerPrefixes();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class PeerPrefix : public Entity
                                        {
                                            public:
                                                PeerPrefix();
                                                ~PeerPrefix();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf address_prefix; //type: string



                                        }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;


                                    }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes


                                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
                                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4::Peers> peers;


                                }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4


                                class PeerV6 : public Entity
                                {
                                    public:
                                        PeerV6();
                                        ~PeerV6();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class Peers : public Entity
                                    {
                                        public:
                                            Peers();
                                            ~Peers();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class Peer : public Entity
                                        {
                                            public:
                                                Peer();
                                                ~Peer();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf address; //type: string



                                        }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers::Peer


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers::Peer> > peer;


                                    }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers


                                    class PeerPrefixes : public Entity
                                    {
                                        public:
                                            PeerPrefixes();
                                            ~PeerPrefixes();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class PeerPrefix : public Entity
                                        {
                                            public:
                                                PeerPrefix();
                                                ~PeerPrefix();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf address_prefix; //type: string



                                        }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;


                                    }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes


                                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
                                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6::Peers> peers;


                                }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6


                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV4> peer_v4;
                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass::PeerV6> peer_v6;


                            }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass


                                std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol::PeerClass> peer_class;


                        }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol


                        class XrXml : public Entity
                        {
                            public:
                                XrXml();
                                ~XrXml();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class PeerClass : public Entity
                            {
                                public:
                                    PeerClass();
                                    ~PeerClass();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf peer_all; //type: empty

                                class PeerV4 : public Entity
                                {
                                    public:
                                        PeerV4();
                                        ~PeerV4();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class Peers : public Entity
                                    {
                                        public:
                                            Peers();
                                            ~Peers();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class Peer : public Entity
                                        {
                                            public:
                                                Peer();
                                                ~Peer();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf address; //type: string



                                        }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::Peer


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers::Peer> > peer;


                                    }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers


                                    class PeerPrefixes : public Entity
                                    {
                                        public:
                                            PeerPrefixes();
                                            ~PeerPrefixes();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class PeerPrefix : public Entity
                                        {
                                            public:
                                                PeerPrefix();
                                                ~PeerPrefix();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf address_prefix; //type: string



                                        }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;


                                    }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes


                                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
                                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4::Peers> peers;


                                }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4


                                class PeerV6 : public Entity
                                {
                                    public:
                                        PeerV6();
                                        ~PeerV6();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class Peers : public Entity
                                    {
                                        public:
                                            Peers();
                                            ~Peers();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class Peer : public Entity
                                        {
                                            public:
                                                Peer();
                                                ~Peer();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf address; //type: string



                                        }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::Peer


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers::Peer> > peer;


                                    }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers


                                    class PeerPrefixes : public Entity
                                    {
                                        public:
                                            PeerPrefixes();
                                            ~PeerPrefixes();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class PeerPrefix : public Entity
                                        {
                                            public:
                                                PeerPrefix();
                                                ~PeerPrefix();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf address_prefix; //type: string



                                        }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;


                                    }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes


                                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
                                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6::Peers> peers;


                                }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6


                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV4> peer_v4;
                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass::PeerV6> peer_v6;


                            }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass


                                std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml::PeerClass> peer_class;


                        }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml


                        class SshProtocol : public Entity
                        {
                            public:
                                SshProtocol();
                                ~SshProtocol();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class PeerClass : public Entity
                            {
                                public:
                                    PeerClass();
                                    ~PeerClass();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf peer_all; //type: empty

                                class PeerV4 : public Entity
                                {
                                    public:
                                        PeerV4();
                                        ~PeerV4();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class Peers : public Entity
                                    {
                                        public:
                                            Peers();
                                            ~Peers();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class Peer : public Entity
                                        {
                                            public:
                                                Peer();
                                                ~Peer();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf address; //type: string



                                        }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::Peer


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers::Peer> > peer;


                                    }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers


                                    class PeerPrefixes : public Entity
                                    {
                                        public:
                                            PeerPrefixes();
                                            ~PeerPrefixes();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class PeerPrefix : public Entity
                                        {
                                            public:
                                                PeerPrefix();
                                                ~PeerPrefix();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf address_prefix; //type: string



                                        }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;


                                    }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes


                                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
                                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4::Peers> peers;


                                }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4


                                class PeerV6 : public Entity
                                {
                                    public:
                                        PeerV6();
                                        ~PeerV6();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class Peers : public Entity
                                    {
                                        public:
                                            Peers();
                                            ~Peers();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class Peer : public Entity
                                        {
                                            public:
                                                Peer();
                                                ~Peer();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf address; //type: string



                                        }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::Peer


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers::Peer> > peer;


                                    }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers


                                    class PeerPrefixes : public Entity
                                    {
                                        public:
                                            PeerPrefixes();
                                            ~PeerPrefixes();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class PeerPrefix : public Entity
                                        {
                                            public:
                                                PeerPrefix();
                                                ~PeerPrefix();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf address_prefix; //type: string



                                        }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;


                                    }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes


                                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
                                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6::Peers> peers;


                                }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6


                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV4> peer_v4;
                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass::PeerV6> peer_v6;


                            }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass


                                std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol::PeerClass> peer_class;


                        }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol


                        class SnmpProtocol : public Entity
                        {
                            public:
                                SnmpProtocol();
                                ~SnmpProtocol();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class PeerClass : public Entity
                            {
                                public:
                                    PeerClass();
                                    ~PeerClass();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf peer_all; //type: empty

                                class PeerV4 : public Entity
                                {
                                    public:
                                        PeerV4();
                                        ~PeerV4();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class Peers : public Entity
                                    {
                                        public:
                                            Peers();
                                            ~Peers();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class Peer : public Entity
                                        {
                                            public:
                                                Peer();
                                                ~Peer();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf address; //type: string



                                        }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers::Peer


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers::Peer> > peer;


                                    }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers


                                    class PeerPrefixes : public Entity
                                    {
                                        public:
                                            PeerPrefixes();
                                            ~PeerPrefixes();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class PeerPrefix : public Entity
                                        {
                                            public:
                                                PeerPrefix();
                                                ~PeerPrefix();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf address_prefix; //type: string



                                        }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;


                                    }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes


                                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
                                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4::Peers> peers;


                                }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4


                                class PeerV6 : public Entity
                                {
                                    public:
                                        PeerV6();
                                        ~PeerV6();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class Peers : public Entity
                                    {
                                        public:
                                            Peers();
                                            ~Peers();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class Peer : public Entity
                                        {
                                            public:
                                                Peer();
                                                ~Peer();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf address; //type: string



                                        }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::Peer


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers::Peer> > peer;


                                    }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers


                                    class PeerPrefixes : public Entity
                                    {
                                        public:
                                            PeerPrefixes();
                                            ~PeerPrefixes();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class PeerPrefix : public Entity
                                        {
                                            public:
                                                PeerPrefix();
                                                ~PeerPrefix();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf address_prefix; //type: string



                                        }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;


                                    }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes


                                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
                                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6::Peers> peers;


                                }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6


                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV4> peer_v4;
                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass::PeerV6> peer_v6;


                            }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass


                                std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol::PeerClass> peer_class;


                        }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol


                        class TelnetProtocol : public Entity
                        {
                            public:
                                TelnetProtocol();
                                ~TelnetProtocol();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class PeerClass : public Entity
                            {
                                public:
                                    PeerClass();
                                    ~PeerClass();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf peer_all; //type: empty

                                class PeerV4 : public Entity
                                {
                                    public:
                                        PeerV4();
                                        ~PeerV4();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class Peers : public Entity
                                    {
                                        public:
                                            Peers();
                                            ~Peers();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class Peer : public Entity
                                        {
                                            public:
                                                Peer();
                                                ~Peer();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf address; //type: string



                                        }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::Peer


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers::Peer> > peer;


                                    }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers


                                    class PeerPrefixes : public Entity
                                    {
                                        public:
                                            PeerPrefixes();
                                            ~PeerPrefixes();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class PeerPrefix : public Entity
                                        {
                                            public:
                                                PeerPrefix();
                                                ~PeerPrefix();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf address_prefix; //type: string



                                        }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;


                                    }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes


                                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
                                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4::Peers> peers;


                                }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4


                                class PeerV6 : public Entity
                                {
                                    public:
                                        PeerV6();
                                        ~PeerV6();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class Peers : public Entity
                                    {
                                        public:
                                            Peers();
                                            ~Peers();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class Peer : public Entity
                                        {
                                            public:
                                                Peer();
                                                ~Peer();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf address; //type: string



                                        }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::Peer


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers::Peer> > peer;


                                    }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers


                                    class PeerPrefixes : public Entity
                                    {
                                        public:
                                            PeerPrefixes();
                                            ~PeerPrefixes();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class PeerPrefix : public Entity
                                        {
                                            public:
                                                PeerPrefix();
                                                ~PeerPrefix();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf address_prefix; //type: string



                                        }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;


                                    }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes


                                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
                                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6::Peers> peers;


                                }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6


                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV4> peer_v4;
                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass::PeerV6> peer_v6;


                            }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass


                                std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol::PeerClass> peer_class;


                        }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol


                        class AllProtocols : public Entity
                        {
                            public:
                                AllProtocols();
                                ~AllProtocols();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class PeerClass : public Entity
                            {
                                public:
                                    PeerClass();
                                    ~PeerClass();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf peer_all; //type: empty

                                class PeerV4 : public Entity
                                {
                                    public:
                                        PeerV4();
                                        ~PeerV4();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class Peers : public Entity
                                    {
                                        public:
                                            Peers();
                                            ~Peers();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class Peer : public Entity
                                        {
                                            public:
                                                Peer();
                                                ~Peer();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf address; //type: string



                                        }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers::Peer


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers::Peer> > peer;


                                    }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers


                                    class PeerPrefixes : public Entity
                                    {
                                        public:
                                            PeerPrefixes();
                                            ~PeerPrefixes();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class PeerPrefix : public Entity
                                        {
                                            public:
                                                PeerPrefix();
                                                ~PeerPrefix();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf address_prefix; //type: string



                                        }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;


                                    }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes


                                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
                                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4::Peers> peers;


                                }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4


                                class PeerV6 : public Entity
                                {
                                    public:
                                        PeerV6();
                                        ~PeerV6();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class Peers : public Entity
                                    {
                                        public:
                                            Peers();
                                            ~Peers();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class Peer : public Entity
                                        {
                                            public:
                                                Peer();
                                                ~Peer();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf address; //type: string



                                        }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers::Peer


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers::Peer> > peer;


                                    }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers


                                    class PeerPrefixes : public Entity
                                    {
                                        public:
                                            PeerPrefixes();
                                            ~PeerPrefixes();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;



                                        class PeerPrefix : public Entity
                                        {
                                            public:
                                                PeerPrefix();
                                                ~PeerPrefix();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;


                                                YLeaf address_prefix; //type: string



                                        }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;


                                    }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes


                                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
                                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6::Peers> peers;


                                }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6


                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV4> peer_v4;
                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass::PeerV6> peer_v6;


                            }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass


                                std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols::PeerClass> peer_class;


                        }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols


                            std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::AllProtocols> all_protocols;
                            std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::HttpProtocol> http_protocol;
                            std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::NetconfProtocol> netconf_protocol;
                            std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SnmpProtocol> snmp_protocol;
                            std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::SshProtocol> ssh_protocol;
                            std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TelnetProtocol> telnet_protocol;
                            std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::TftpProtocol> tftp_protocol;
                            std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface::XrXml> xr_xml;


                    }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface


                        std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces::Interface> > interface;


                }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces


                class AllInterfaces : public Entity
                {
                    public:
                        AllInterfaces();
                        ~AllInterfaces();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class HttpProtocol : public Entity
                    {
                        public:
                            HttpProtocol();
                            ~HttpProtocol();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class PeerClass : public Entity
                        {
                            public:
                                PeerClass();
                                ~PeerClass();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf peer_all; //type: empty

                            class PeerV4 : public Entity
                            {
                                public:
                                    PeerV4();
                                    ~PeerV4();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;



                                class Peers : public Entity
                                {
                                    public:
                                        Peers();
                                        ~Peers();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class Peer : public Entity
                                    {
                                        public:
                                            Peer();
                                            ~Peer();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf address; //type: string



                                    }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers::Peer


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers::Peer> > peer;


                                }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers


                                class PeerPrefixes : public Entity
                                {
                                    public:
                                        PeerPrefixes();
                                        ~PeerPrefixes();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class PeerPrefix : public Entity
                                    {
                                        public:
                                            PeerPrefix();
                                            ~PeerPrefix();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf address_prefix; //type: string



                                    }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;


                                }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes


                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4::Peers> peers;


                            }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4


                            class PeerV6 : public Entity
                            {
                                public:
                                    PeerV6();
                                    ~PeerV6();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;



                                class Peers : public Entity
                                {
                                    public:
                                        Peers();
                                        ~Peers();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class Peer : public Entity
                                    {
                                        public:
                                            Peer();
                                            ~Peer();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf address; //type: string



                                    }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers::Peer


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers::Peer> > peer;


                                }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers


                                class PeerPrefixes : public Entity
                                {
                                    public:
                                        PeerPrefixes();
                                        ~PeerPrefixes();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class PeerPrefix : public Entity
                                    {
                                        public:
                                            PeerPrefix();
                                            ~PeerPrefix();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf address_prefix; //type: string



                                    }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;


                                }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes


                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6::Peers> peers;


                            }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6


                                std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV4> peer_v4;
                                std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass::PeerV6> peer_v6;


                        }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass


                            std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol::PeerClass> peer_class;


                    }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol


                    class TftpProtocol : public Entity
                    {
                        public:
                            TftpProtocol();
                            ~TftpProtocol();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class PeerClass : public Entity
                        {
                            public:
                                PeerClass();
                                ~PeerClass();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf peer_all; //type: empty

                            class PeerV4 : public Entity
                            {
                                public:
                                    PeerV4();
                                    ~PeerV4();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;



                                class Peers : public Entity
                                {
                                    public:
                                        Peers();
                                        ~Peers();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class Peer : public Entity
                                    {
                                        public:
                                            Peer();
                                            ~Peer();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf address; //type: string



                                    }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers::Peer


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers::Peer> > peer;


                                }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers


                                class PeerPrefixes : public Entity
                                {
                                    public:
                                        PeerPrefixes();
                                        ~PeerPrefixes();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class PeerPrefix : public Entity
                                    {
                                        public:
                                            PeerPrefix();
                                            ~PeerPrefix();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf address_prefix; //type: string



                                    }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;


                                }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes


                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4::Peers> peers;


                            }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4


                            class PeerV6 : public Entity
                            {
                                public:
                                    PeerV6();
                                    ~PeerV6();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;



                                class Peers : public Entity
                                {
                                    public:
                                        Peers();
                                        ~Peers();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class Peer : public Entity
                                    {
                                        public:
                                            Peer();
                                            ~Peer();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf address; //type: string



                                    }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers::Peer


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers::Peer> > peer;


                                }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers


                                class PeerPrefixes : public Entity
                                {
                                    public:
                                        PeerPrefixes();
                                        ~PeerPrefixes();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class PeerPrefix : public Entity
                                    {
                                        public:
                                            PeerPrefix();
                                            ~PeerPrefix();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf address_prefix; //type: string



                                    }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;


                                }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes


                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6::Peers> peers;


                            }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6


                                std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV4> peer_v4;
                                std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass::PeerV6> peer_v6;


                        }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass


                            std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol::PeerClass> peer_class;


                    }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol


                    class NetconfProtocol : public Entity
                    {
                        public:
                            NetconfProtocol();
                            ~NetconfProtocol();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class PeerClass : public Entity
                        {
                            public:
                                PeerClass();
                                ~PeerClass();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf peer_all; //type: empty

                            class PeerV4 : public Entity
                            {
                                public:
                                    PeerV4();
                                    ~PeerV4();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;



                                class Peers : public Entity
                                {
                                    public:
                                        Peers();
                                        ~Peers();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class Peer : public Entity
                                    {
                                        public:
                                            Peer();
                                            ~Peer();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf address; //type: string



                                    }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers::Peer


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers::Peer> > peer;


                                }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers


                                class PeerPrefixes : public Entity
                                {
                                    public:
                                        PeerPrefixes();
                                        ~PeerPrefixes();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class PeerPrefix : public Entity
                                    {
                                        public:
                                            PeerPrefix();
                                            ~PeerPrefix();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf address_prefix; //type: string



                                    }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;


                                }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes


                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4::Peers> peers;


                            }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4


                            class PeerV6 : public Entity
                            {
                                public:
                                    PeerV6();
                                    ~PeerV6();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;



                                class Peers : public Entity
                                {
                                    public:
                                        Peers();
                                        ~Peers();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class Peer : public Entity
                                    {
                                        public:
                                            Peer();
                                            ~Peer();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf address; //type: string



                                    }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers::Peer


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers::Peer> > peer;


                                }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers


                                class PeerPrefixes : public Entity
                                {
                                    public:
                                        PeerPrefixes();
                                        ~PeerPrefixes();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class PeerPrefix : public Entity
                                    {
                                        public:
                                            PeerPrefix();
                                            ~PeerPrefix();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf address_prefix; //type: string



                                    }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;


                                }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes


                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6::Peers> peers;


                            }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6


                                std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV4> peer_v4;
                                std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass::PeerV6> peer_v6;


                        }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass


                            std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol::PeerClass> peer_class;


                    }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol


                    class XrXml : public Entity
                    {
                        public:
                            XrXml();
                            ~XrXml();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class PeerClass : public Entity
                        {
                            public:
                                PeerClass();
                                ~PeerClass();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf peer_all; //type: empty

                            class PeerV4 : public Entity
                            {
                                public:
                                    PeerV4();
                                    ~PeerV4();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;



                                class Peers : public Entity
                                {
                                    public:
                                        Peers();
                                        ~Peers();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class Peer : public Entity
                                    {
                                        public:
                                            Peer();
                                            ~Peer();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf address; //type: string



                                    }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers::Peer


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers::Peer> > peer;


                                }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers


                                class PeerPrefixes : public Entity
                                {
                                    public:
                                        PeerPrefixes();
                                        ~PeerPrefixes();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class PeerPrefix : public Entity
                                    {
                                        public:
                                            PeerPrefix();
                                            ~PeerPrefix();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf address_prefix; //type: string



                                    }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;


                                }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes


                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4::Peers> peers;


                            }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4


                            class PeerV6 : public Entity
                            {
                                public:
                                    PeerV6();
                                    ~PeerV6();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;



                                class Peers : public Entity
                                {
                                    public:
                                        Peers();
                                        ~Peers();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class Peer : public Entity
                                    {
                                        public:
                                            Peer();
                                            ~Peer();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf address; //type: string



                                    }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers::Peer


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers::Peer> > peer;


                                }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers


                                class PeerPrefixes : public Entity
                                {
                                    public:
                                        PeerPrefixes();
                                        ~PeerPrefixes();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class PeerPrefix : public Entity
                                    {
                                        public:
                                            PeerPrefix();
                                            ~PeerPrefix();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf address_prefix; //type: string



                                    }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;


                                }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes


                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6::Peers> peers;


                            }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6


                                std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV4> peer_v4;
                                std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass::PeerV6> peer_v6;


                        }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass


                            std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml::PeerClass> peer_class;


                    }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml


                    class SshProtocol : public Entity
                    {
                        public:
                            SshProtocol();
                            ~SshProtocol();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class PeerClass : public Entity
                        {
                            public:
                                PeerClass();
                                ~PeerClass();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf peer_all; //type: empty

                            class PeerV4 : public Entity
                            {
                                public:
                                    PeerV4();
                                    ~PeerV4();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;



                                class Peers : public Entity
                                {
                                    public:
                                        Peers();
                                        ~Peers();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class Peer : public Entity
                                    {
                                        public:
                                            Peer();
                                            ~Peer();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf address; //type: string



                                    }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::Peer


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers::Peer> > peer;


                                }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers


                                class PeerPrefixes : public Entity
                                {
                                    public:
                                        PeerPrefixes();
                                        ~PeerPrefixes();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class PeerPrefix : public Entity
                                    {
                                        public:
                                            PeerPrefix();
                                            ~PeerPrefix();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf address_prefix; //type: string



                                    }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;


                                }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes


                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4::Peers> peers;


                            }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4


                            class PeerV6 : public Entity
                            {
                                public:
                                    PeerV6();
                                    ~PeerV6();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;



                                class Peers : public Entity
                                {
                                    public:
                                        Peers();
                                        ~Peers();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class Peer : public Entity
                                    {
                                        public:
                                            Peer();
                                            ~Peer();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf address; //type: string



                                    }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::Peer


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers::Peer> > peer;


                                }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers


                                class PeerPrefixes : public Entity
                                {
                                    public:
                                        PeerPrefixes();
                                        ~PeerPrefixes();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class PeerPrefix : public Entity
                                    {
                                        public:
                                            PeerPrefix();
                                            ~PeerPrefix();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf address_prefix; //type: string



                                    }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;


                                }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes


                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6::Peers> peers;


                            }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6


                                std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV4> peer_v4;
                                std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass::PeerV6> peer_v6;


                        }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass


                            std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol::PeerClass> peer_class;


                    }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol


                    class SnmpProtocol : public Entity
                    {
                        public:
                            SnmpProtocol();
                            ~SnmpProtocol();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class PeerClass : public Entity
                        {
                            public:
                                PeerClass();
                                ~PeerClass();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf peer_all; //type: empty

                            class PeerV4 : public Entity
                            {
                                public:
                                    PeerV4();
                                    ~PeerV4();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;



                                class Peers : public Entity
                                {
                                    public:
                                        Peers();
                                        ~Peers();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class Peer : public Entity
                                    {
                                        public:
                                            Peer();
                                            ~Peer();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf address; //type: string



                                    }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::Peer


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers::Peer> > peer;


                                }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers


                                class PeerPrefixes : public Entity
                                {
                                    public:
                                        PeerPrefixes();
                                        ~PeerPrefixes();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class PeerPrefix : public Entity
                                    {
                                        public:
                                            PeerPrefix();
                                            ~PeerPrefix();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf address_prefix; //type: string



                                    }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;


                                }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes


                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4::Peers> peers;


                            }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4


                            class PeerV6 : public Entity
                            {
                                public:
                                    PeerV6();
                                    ~PeerV6();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;



                                class Peers : public Entity
                                {
                                    public:
                                        Peers();
                                        ~Peers();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class Peer : public Entity
                                    {
                                        public:
                                            Peer();
                                            ~Peer();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf address; //type: string



                                    }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::Peer


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers::Peer> > peer;


                                }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers


                                class PeerPrefixes : public Entity
                                {
                                    public:
                                        PeerPrefixes();
                                        ~PeerPrefixes();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class PeerPrefix : public Entity
                                    {
                                        public:
                                            PeerPrefix();
                                            ~PeerPrefix();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf address_prefix; //type: string



                                    }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;


                                }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes


                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6::Peers> peers;


                            }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6


                                std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV4> peer_v4;
                                std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass::PeerV6> peer_v6;


                        }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass


                            std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol::PeerClass> peer_class;


                    }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol


                    class TelnetProtocol : public Entity
                    {
                        public:
                            TelnetProtocol();
                            ~TelnetProtocol();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class PeerClass : public Entity
                        {
                            public:
                                PeerClass();
                                ~PeerClass();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf peer_all; //type: empty

                            class PeerV4 : public Entity
                            {
                                public:
                                    PeerV4();
                                    ~PeerV4();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;



                                class Peers : public Entity
                                {
                                    public:
                                        Peers();
                                        ~Peers();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class Peer : public Entity
                                    {
                                        public:
                                            Peer();
                                            ~Peer();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf address; //type: string



                                    }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::Peer


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers::Peer> > peer;


                                }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers


                                class PeerPrefixes : public Entity
                                {
                                    public:
                                        PeerPrefixes();
                                        ~PeerPrefixes();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class PeerPrefix : public Entity
                                    {
                                        public:
                                            PeerPrefix();
                                            ~PeerPrefix();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf address_prefix; //type: string



                                    }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;


                                }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes


                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4::Peers> peers;


                            }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4


                            class PeerV6 : public Entity
                            {
                                public:
                                    PeerV6();
                                    ~PeerV6();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;



                                class Peers : public Entity
                                {
                                    public:
                                        Peers();
                                        ~Peers();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class Peer : public Entity
                                    {
                                        public:
                                            Peer();
                                            ~Peer();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf address; //type: string



                                    }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::Peer


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers::Peer> > peer;


                                }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers


                                class PeerPrefixes : public Entity
                                {
                                    public:
                                        PeerPrefixes();
                                        ~PeerPrefixes();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class PeerPrefix : public Entity
                                    {
                                        public:
                                            PeerPrefix();
                                            ~PeerPrefix();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf address_prefix; //type: string



                                    }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;


                                }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes


                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6::Peers> peers;


                            }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6


                                std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV4> peer_v4;
                                std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass::PeerV6> peer_v6;


                        }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass


                            std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol::PeerClass> peer_class;


                    }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol


                    class AllProtocols : public Entity
                    {
                        public:
                            AllProtocols();
                            ~AllProtocols();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class PeerClass : public Entity
                        {
                            public:
                                PeerClass();
                                ~PeerClass();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf peer_all; //type: empty

                            class PeerV4 : public Entity
                            {
                                public:
                                    PeerV4();
                                    ~PeerV4();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;



                                class Peers : public Entity
                                {
                                    public:
                                        Peers();
                                        ~Peers();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class Peer : public Entity
                                    {
                                        public:
                                            Peer();
                                            ~Peer();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf address; //type: string



                                    }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::Peer


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers::Peer> > peer;


                                }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers


                                class PeerPrefixes : public Entity
                                {
                                    public:
                                        PeerPrefixes();
                                        ~PeerPrefixes();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class PeerPrefix : public Entity
                                    {
                                        public:
                                            PeerPrefix();
                                            ~PeerPrefix();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf address_prefix; //type: string



                                    }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes::PeerPrefix> > peer_prefix;


                                }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes


                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::PeerPrefixes> peer_prefixes;
                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4::Peers> peers;


                            }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4


                            class PeerV6 : public Entity
                            {
                                public:
                                    PeerV6();
                                    ~PeerV6();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;



                                class Peers : public Entity
                                {
                                    public:
                                        Peers();
                                        ~Peers();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class Peer : public Entity
                                    {
                                        public:
                                            Peer();
                                            ~Peer();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf address; //type: string



                                    }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::Peer


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers::Peer> > peer;


                                }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers


                                class PeerPrefixes : public Entity
                                {
                                    public:
                                        PeerPrefixes();
                                        ~PeerPrefixes();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;



                                    class PeerPrefix : public Entity
                                    {
                                        public:
                                            PeerPrefix();
                                            ~PeerPrefix();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                            YLeaf address_prefix; //type: string



                                    }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes::PeerPrefix> > peer_prefix;


                                }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes


                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::PeerPrefixes> peer_prefixes;
                                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6::Peers> peers;


                            }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6


                                std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV4> peer_v4;
                                std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass::PeerV6> peer_v6;


                        }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass


                            std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols::PeerClass> peer_class;


                    }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols


                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::AllProtocols> all_protocols;
                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::HttpProtocol> http_protocol;
                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::NetconfProtocol> netconf_protocol;
                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SnmpProtocol> snmp_protocol;
                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::SshProtocol> ssh_protocol;
                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TelnetProtocol> telnet_protocol;
                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::TftpProtocol> tftp_protocol;
                        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces::XrXml> xr_xml;


                }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces


                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::AllInterfaces> all_interfaces;
                    std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection::Interfaces> interfaces;


            }; // ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection


                std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband::InterfaceSelection> interface_selection;


        }; // ControlPlane::ManagementPlaneProtection::Inband


            std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Inband> inband;
            std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection::Outband> outband;


    }; // ControlPlane::ManagementPlaneProtection


        std::unique_ptr<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane::ManagementPlaneProtection> management_plane_protection;


}; // ControlPlane



}
}

#endif /* _CISCO_IOS_XR_LIB_MPP_CFG_ */

