#ifndef _CISCO_IOS_XR_CRYPTO_MACSEC_MKA_OPER_
#define _CISCO_IOS_XR_CRYPTO_MACSEC_MKA_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_crypto_macsec_mka_oper {

class Macsec : public Entity
{
    public:
        Macsec();
        ~Macsec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;



    class Mka : public Entity
    {
        public:
            Mka();
            ~Mka();

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


                    YLeaf name; //type: string

                class Session : public Entity
                {
                    public:
                        Session();
                        ~Session();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class SessionSummary : public Entity
                    {
                        public:
                            SessionSummary();
                            ~SessionSummary();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf interface_name; //type: string
                            YLeaf inherited_policy; //type: boolean
                            YLeaf policy; //type: string
                            YLeaf priority; //type: uint32
                            YLeaf my_mac; //type: string
                            YLeaf delay_protect; //type: boolean
                            YLeaf replay_protect; //type: boolean
                            YLeaf window_size; //type: uint32
                            YLeaf confidentiality_offset; //type: uint32
                            YLeaf algo_agility; //type: uint32
                            YLeaf capability; //type: uint32
                            YLeaf cipher_str; //type: string
                            YLeaf mac_sec_desired; //type: boolean
                            YLeaf key_chain; //type: string

                        class OuterTag : public Entity
                        {
                            public:
                                OuterTag();
                                ~OuterTag();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf etype; //type: uint16
                                YLeaf priority; //type: uint8
                                YLeaf cfi; //type: uint8
                                YLeaf vlan_id; //type: uint16



                        }; // Macsec::Mka::Interfaces::Interface::Session::SessionSummary::OuterTag


                        class InnerTag : public Entity
                        {
                            public:
                                InnerTag();
                                ~InnerTag();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf etype; //type: uint16
                                YLeaf priority; //type: uint8
                                YLeaf cfi; //type: uint8
                                YLeaf vlan_id; //type: uint16



                        }; // Macsec::Mka::Interfaces::Interface::Session::SessionSummary::InnerTag


                            std::unique_ptr<Cisco_IOS_XR_crypto_macsec_mka_oper::Macsec::Mka::Interfaces::Interface::Session::SessionSummary::InnerTag> inner_tag;
                            std::unique_ptr<Cisco_IOS_XR_crypto_macsec_mka_oper::Macsec::Mka::Interfaces::Interface::Session::SessionSummary::OuterTag> outer_tag;


                    }; // Macsec::Mka::Interfaces::Interface::Session::SessionSummary


                    class Vp : public Entity
                    {
                        public:
                            Vp();
                            ~Vp();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf my_sci; //type: string
                            YLeaf virtual_port_id; //type: uint32
                            YLeaf latest_rx; //type: boolean
                            YLeaf latest_tx; //type: boolean
                            YLeaf latest_an; //type: uint32
                            YLeaf latest_ki; //type: string
                            YLeaf latest_kn; //type: uint32
                            YLeaf old_rx; //type: boolean
                            YLeaf old_tx; //type: boolean
                            YLeaf old_an; //type: uint32
                            YLeaf old_ki; //type: string
                            YLeaf old_kn; //type: uint32
                            YLeaf wait_time; //type: uint32
                            YLeaf retire_time; //type: uint32
                            YLeaf cipher_suite; //type: uint32
                            YLeaf ssci; //type: uint32



                    }; // Macsec::Mka::Interfaces::Interface::Session::Vp


                    class Ca : public Entity
                    {
                        public:
                            Ca();
                            ~Ca();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf is_key_server; //type: boolean
                            YLeaf status; //type: uint32
                            YLeaf num_live_peers; //type: uint32
                            YLeaf first_ca; //type: boolean
                            YLeaf peer_sci; //type: string
                            YLeaf num_live_peers_responded; //type: uint32
                            YLeaf ckn; //type: string
                            YLeaf my_mi; //type: string
                            YLeaf my_mn; //type: uint32
                            YLeaf authenticator; //type: boolean
                            YLeaf status_description; //type: string

                        class LivePeer : public Entity
                        {
                            public:
                                LivePeer();
                                ~LivePeer();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf mi; //type: string
                                YLeaf sci; //type: string
                                YLeaf mn; //type: uint32
                                YLeaf priority; //type: uint32
                                YLeaf ssci; //type: uint32



                        }; // Macsec::Mka::Interfaces::Interface::Session::Ca::LivePeer


                        class PotentialPeer : public Entity
                        {
                            public:
                                PotentialPeer();
                                ~PotentialPeer();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf mi; //type: string
                                YLeaf sci; //type: string
                                YLeaf mn; //type: uint32
                                YLeaf priority; //type: uint32
                                YLeaf ssci; //type: uint32



                        }; // Macsec::Mka::Interfaces::Interface::Session::Ca::PotentialPeer


                        class DormantPeer : public Entity
                        {
                            public:
                                DormantPeer();
                                ~DormantPeer();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf mi; //type: string
                                YLeaf sci; //type: string
                                YLeaf mn; //type: uint32
                                YLeaf priority; //type: uint32
                                YLeaf ssci; //type: uint32



                        }; // Macsec::Mka::Interfaces::Interface::Session::Ca::DormantPeer


                            std::vector<std::unique_ptr<Cisco_IOS_XR_crypto_macsec_mka_oper::Macsec::Mka::Interfaces::Interface::Session::Ca::DormantPeer> > dormant_peer;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_crypto_macsec_mka_oper::Macsec::Mka::Interfaces::Interface::Session::Ca::LivePeer> > live_peer;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_crypto_macsec_mka_oper::Macsec::Mka::Interfaces::Interface::Session::Ca::PotentialPeer> > potential_peer;


                    }; // Macsec::Mka::Interfaces::Interface::Session::Ca


                        std::vector<std::unique_ptr<Cisco_IOS_XR_crypto_macsec_mka_oper::Macsec::Mka::Interfaces::Interface::Session::Ca> > ca;
                        std::unique_ptr<Cisco_IOS_XR_crypto_macsec_mka_oper::Macsec::Mka::Interfaces::Interface::Session::SessionSummary> session_summary;
                        std::unique_ptr<Cisco_IOS_XR_crypto_macsec_mka_oper::Macsec::Mka::Interfaces::Interface::Session::Vp> vp;


                }; // Macsec::Mka::Interfaces::Interface::Session


                    std::unique_ptr<Cisco_IOS_XR_crypto_macsec_mka_oper::Macsec::Mka::Interfaces::Interface::Session> session;


            }; // Macsec::Mka::Interfaces::Interface


                std::vector<std::unique_ptr<Cisco_IOS_XR_crypto_macsec_mka_oper::Macsec::Mka::Interfaces::Interface> > interface;


        }; // Macsec::Mka::Interfaces


            std::unique_ptr<Cisco_IOS_XR_crypto_macsec_mka_oper::Macsec::Mka::Interfaces> interfaces;


    }; // Macsec::Mka


        std::unique_ptr<Cisco_IOS_XR_crypto_macsec_mka_oper::Macsec::Mka> mka;


}; // Macsec



}
}

#endif /* _CISCO_IOS_XR_CRYPTO_MACSEC_MKA_OPER_ */

