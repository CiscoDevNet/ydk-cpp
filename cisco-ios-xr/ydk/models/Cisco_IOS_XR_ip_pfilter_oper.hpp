#ifndef _CISCO_IOS_XR_IP_PFILTER_OPER_
#define _CISCO_IOS_XR_IP_PFILTER_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ip_pfilter_oper {

class PfilterMa : public Entity
{
    public:
        PfilterMa();
        ~PfilterMa();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class Nodes : public Entity
    {
        public:
            Nodes();
            ~Nodes();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Node : public Entity
        {
            public:
                Node();
                ~Node();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value node_name; //type: string


            class Process : public Entity
            {
                public:
                    Process();
                    ~Process();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


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


                    class AclInfoTable : public Entity
                    {
                        public:
                            AclInfoTable();
                            ~AclInfoTable();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class InterfaceInfos : public Entity
                        {
                            public:
                                InterfaceInfos();
                                ~InterfaceInfos();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class InterfaceInfo : public Entity
                            {
                                public:
                                    InterfaceInfo();
                                    ~InterfaceInfo();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value interface_name; //type: string
                                    Value acl_info; //type: string




                            }; // PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::InterfaceInfos::InterfaceInfo


                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_pfilter_oper::PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::InterfaceInfos::InterfaceInfo> > interface_info;


                        }; // PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::InterfaceInfos


                            std::unique_ptr<Cisco_IOS_XR_ip_pfilter_oper::PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable::InterfaceInfos> interface_infos;


                    }; // PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable


                        std::unique_ptr<Cisco_IOS_XR_ip_pfilter_oper::PfilterMa::Nodes::Node::Process::Ipv6::AclInfoTable> acl_info_table;


                }; // PfilterMa::Nodes::Node::Process::Ipv6


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


                    class AclInfoTable : public Entity
                    {
                        public:
                            AclInfoTable();
                            ~AclInfoTable();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class InterfaceInfos : public Entity
                        {
                            public:
                                InterfaceInfos();
                                ~InterfaceInfos();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class InterfaceInfo : public Entity
                            {
                                public:
                                    InterfaceInfo();
                                    ~InterfaceInfo();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value interface_name; //type: string
                                    Value acl_info; //type: string




                            }; // PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::InterfaceInfos::InterfaceInfo


                                std::vector<std::unique_ptr<Cisco_IOS_XR_ip_pfilter_oper::PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::InterfaceInfos::InterfaceInfo> > interface_info;


                        }; // PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::InterfaceInfos


                            std::unique_ptr<Cisco_IOS_XR_ip_pfilter_oper::PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable::InterfaceInfos> interface_infos;


                    }; // PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable


                        std::unique_ptr<Cisco_IOS_XR_ip_pfilter_oper::PfilterMa::Nodes::Node::Process::Ipv4::AclInfoTable> acl_info_table;


                }; // PfilterMa::Nodes::Node::Process::Ipv4


                    std::unique_ptr<Cisco_IOS_XR_ip_pfilter_oper::PfilterMa::Nodes::Node::Process::Ipv4> ipv4;
                    std::unique_ptr<Cisco_IOS_XR_ip_pfilter_oper::PfilterMa::Nodes::Node::Process::Ipv6> ipv6;


            }; // PfilterMa::Nodes::Node::Process


                std::unique_ptr<Cisco_IOS_XR_ip_pfilter_oper::PfilterMa::Nodes::Node::Process> process;


        }; // PfilterMa::Nodes::Node


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_pfilter_oper::PfilterMa::Nodes::Node> > node;


    }; // PfilterMa::Nodes


        std::unique_ptr<Cisco_IOS_XR_ip_pfilter_oper::PfilterMa::Nodes> nodes;


}; // PfilterMa



}
}

#endif /* _CISCO_IOS_XR_IP_PFILTER_OPER_ */

