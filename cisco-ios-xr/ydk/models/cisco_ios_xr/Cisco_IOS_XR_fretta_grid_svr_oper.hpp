#ifndef _CISCO_IOS_XR_FRETTA_GRID_SVR_OPER_
#define _CISCO_IOS_XR_FRETTA_GRID_SVR_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_fretta_grid_svr_oper {

class Grid : public Entity
{
    public:
        Grid();
        ~Grid();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Nodes; //type: Grid::Nodes

        std::shared_ptr<Cisco_IOS_XR_fretta_grid_svr_oper::Grid::Nodes> nodes;
        
}; // Grid


class Grid::Nodes : public Entity
{
    public:
        Nodes();
        ~Nodes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Node; //type: Grid::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_fretta_grid_svr_oper::Grid::Nodes::Node> > node;
        
}; // Grid::Nodes


class Grid::Nodes::Node : public Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf node_name; //type: string
        class ClientXr; //type: Grid::Nodes::Node::ClientXr
        class Clients; //type: Grid::Nodes::Node::Clients

        std::shared_ptr<Cisco_IOS_XR_fretta_grid_svr_oper::Grid::Nodes::Node::ClientXr> client_xr;
        std::shared_ptr<Cisco_IOS_XR_fretta_grid_svr_oper::Grid::Nodes::Node::Clients> clients;
        
}; // Grid::Nodes::Node


class Grid::Nodes::Node::ClientXr : public Entity
{
    public:
        ClientXr();
        ~ClientXr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Client; //type: Grid::Nodes::Node::ClientXr::Client

        std::vector<std::shared_ptr<Cisco_IOS_XR_fretta_grid_svr_oper::Grid::Nodes::Node::ClientXr::Client> > client;
        
}; // Grid::Nodes::Node::ClientXr


class Grid::Nodes::Node::ClientXr::Client : public Entity
{
    public:
        Client();
        ~Client();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf client_name; //type: string
        class ClientData; //type: Grid::Nodes::Node::ClientXr::Client::ClientData

        std::vector<std::shared_ptr<Cisco_IOS_XR_fretta_grid_svr_oper::Grid::Nodes::Node::ClientXr::Client::ClientData> > client_data;
        
}; // Grid::Nodes::Node::ClientXr::Client


class Grid::Nodes::Node::ClientXr::Client::ClientData : public Entity
{
    public:
        ClientData();
        ~ClientData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf res_id; //type: uint32

}; // Grid::Nodes::Node::ClientXr::Client::ClientData


class Grid::Nodes::Node::Clients : public Entity
{
    public:
        Clients();
        ~Clients();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Client; //type: Grid::Nodes::Node::Clients::Client

        std::vector<std::shared_ptr<Cisco_IOS_XR_fretta_grid_svr_oper::Grid::Nodes::Node::Clients::Client> > client;
        
}; // Grid::Nodes::Node::Clients


class Grid::Nodes::Node::Clients::Client : public Entity
{
    public:
        Client();
        ~Client();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf client_name; //type: string
        class ClientData; //type: Grid::Nodes::Node::Clients::Client::ClientData

        std::vector<std::shared_ptr<Cisco_IOS_XR_fretta_grid_svr_oper::Grid::Nodes::Node::Clients::Client::ClientData> > client_data;
        
}; // Grid::Nodes::Node::Clients::Client


class Grid::Nodes::Node::Clients::Client::ClientData : public Entity
{
    public:
        ClientData();
        ~ClientData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf res_id; //type: uint32

}; // Grid::Nodes::Node::Clients::Client::ClientData


}
}

#endif /* _CISCO_IOS_XR_FRETTA_GRID_SVR_OPER_ */

