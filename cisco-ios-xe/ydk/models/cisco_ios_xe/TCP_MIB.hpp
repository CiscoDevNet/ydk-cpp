#ifndef _TCP_MIB_
#define _TCP_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace TCP_MIB {

class TcpMib : public Entity
{
    public:
        TcpMib();
        ~TcpMib();

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

        class Tcp; //type: TcpMib::Tcp
        class Tcpconntable; //type: TcpMib::Tcpconntable
        class Tcpconnectiontable; //type: TcpMib::Tcpconnectiontable
        class Tcplistenertable; //type: TcpMib::Tcplistenertable

        std::shared_ptr<TCP_MIB::TcpMib::Tcp> tcp;
        std::shared_ptr<TCP_MIB::TcpMib::Tcpconnectiontable> tcpconnectiontable;
        std::shared_ptr<TCP_MIB::TcpMib::Tcpconntable> tcpconntable;
        std::shared_ptr<TCP_MIB::TcpMib::Tcplistenertable> tcplistenertable;
        
}; // TcpMib


class TcpMib::Tcp : public Entity
{
    public:
        Tcp();
        ~Tcp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tcprtoalgorithm; //type: TcprtoalgorithmEnum
        YLeaf tcprtomin; //type: int32
        YLeaf tcprtomax; //type: int32
        YLeaf tcpmaxconn; //type: int32
        YLeaf tcpactiveopens; //type: uint32
        YLeaf tcppassiveopens; //type: uint32
        YLeaf tcpattemptfails; //type: uint32
        YLeaf tcpestabresets; //type: uint32
        YLeaf tcpcurrestab; //type: uint32
        YLeaf tcpinsegs; //type: uint32
        YLeaf tcpoutsegs; //type: uint32
        YLeaf tcpretranssegs; //type: uint32
        YLeaf tcpinerrs; //type: uint32
        YLeaf tcpoutrsts; //type: uint32
        YLeaf tcphcinsegs; //type: uint64
        YLeaf tcphcoutsegs; //type: uint64
        class TcprtoalgorithmEnum;

}; // TcpMib::Tcp


class TcpMib::Tcpconntable : public Entity
{
    public:
        Tcpconntable();
        ~Tcpconntable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Tcpconnentry; //type: TcpMib::Tcpconntable::Tcpconnentry

        std::vector<std::shared_ptr<TCP_MIB::TcpMib::Tcpconntable::Tcpconnentry> > tcpconnentry;
        
}; // TcpMib::Tcpconntable


class TcpMib::Tcpconntable::Tcpconnentry : public Entity
{
    public:
        Tcpconnentry();
        ~Tcpconnentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tcpconnlocaladdress; //type: string
        YLeaf tcpconnlocalport; //type: int32
        YLeaf tcpconnremaddress; //type: string
        YLeaf tcpconnremport; //type: int32
        YLeaf tcpconnstate; //type: TcpconnstateEnum
        class TcpconnstateEnum;

}; // TcpMib::Tcpconntable::Tcpconnentry


class TcpMib::Tcpconnectiontable : public Entity
{
    public:
        Tcpconnectiontable();
        ~Tcpconnectiontable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Tcpconnectionentry; //type: TcpMib::Tcpconnectiontable::Tcpconnectionentry

        std::vector<std::shared_ptr<TCP_MIB::TcpMib::Tcpconnectiontable::Tcpconnectionentry> > tcpconnectionentry;
        
}; // TcpMib::Tcpconnectiontable


class TcpMib::Tcpconnectiontable::Tcpconnectionentry : public Entity
{
    public:
        Tcpconnectionentry();
        ~Tcpconnectionentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tcpconnectionlocaladdresstype; //type: InetaddresstypeEnum
        YLeaf tcpconnectionlocaladdress; //type: binary
        YLeaf tcpconnectionlocalport; //type: uint16
        YLeaf tcpconnectionremaddresstype; //type: InetaddresstypeEnum
        YLeaf tcpconnectionremaddress; //type: binary
        YLeaf tcpconnectionremport; //type: uint16
        YLeaf tcpconnectionstate; //type: TcpconnectionstateEnum
        YLeaf tcpconnectionprocess; //type: uint32
        class TcpconnectionstateEnum;

}; // TcpMib::Tcpconnectiontable::Tcpconnectionentry


class TcpMib::Tcplistenertable : public Entity
{
    public:
        Tcplistenertable();
        ~Tcplistenertable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Tcplistenerentry; //type: TcpMib::Tcplistenertable::Tcplistenerentry

        std::vector<std::shared_ptr<TCP_MIB::TcpMib::Tcplistenertable::Tcplistenerentry> > tcplistenerentry;
        
}; // TcpMib::Tcplistenertable


class TcpMib::Tcplistenertable::Tcplistenerentry : public Entity
{
    public:
        Tcplistenerentry();
        ~Tcplistenerentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tcplistenerlocaladdresstype; //type: InetaddresstypeEnum
        YLeaf tcplistenerlocaladdress; //type: binary
        YLeaf tcplistenerlocalport; //type: uint16
        YLeaf tcplistenerprocess; //type: uint32

}; // TcpMib::Tcplistenertable::Tcplistenerentry

class TcpMib::Tcp::TcprtoalgorithmEnum : public Enum
{
    public:
        static const Enum::YLeaf other;
        static const Enum::YLeaf constant;
        static const Enum::YLeaf rsre;
        static const Enum::YLeaf vanj;
        static const Enum::YLeaf rfc2988;

};

class TcpMib::Tcpconntable::Tcpconnentry::TcpconnstateEnum : public Enum
{
    public:
        static const Enum::YLeaf closed;
        static const Enum::YLeaf listen;
        static const Enum::YLeaf synSent;
        static const Enum::YLeaf synReceived;
        static const Enum::YLeaf established;
        static const Enum::YLeaf finWait1;
        static const Enum::YLeaf finWait2;
        static const Enum::YLeaf closeWait;
        static const Enum::YLeaf lastAck;
        static const Enum::YLeaf closing;
        static const Enum::YLeaf timeWait;
        static const Enum::YLeaf deleteTCB;

};

class TcpMib::Tcpconnectiontable::Tcpconnectionentry::TcpconnectionstateEnum : public Enum
{
    public:
        static const Enum::YLeaf closed;
        static const Enum::YLeaf listen;
        static const Enum::YLeaf synSent;
        static const Enum::YLeaf synReceived;
        static const Enum::YLeaf established;
        static const Enum::YLeaf finWait1;
        static const Enum::YLeaf finWait2;
        static const Enum::YLeaf closeWait;
        static const Enum::YLeaf lastAck;
        static const Enum::YLeaf closing;
        static const Enum::YLeaf timeWait;
        static const Enum::YLeaf deleteTCB;

};


}
}

#endif /* _TCP_MIB_ */

