#pragma once

#include <boost/asio.hpp>

namespace Server
{
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class Session
{
public:
    Session(boost::asio::ip::tcp::socket socket);

    void Start();

private:
    boost::asio::ip::tcp::socket clientSocket;
};
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
} // namespace Server