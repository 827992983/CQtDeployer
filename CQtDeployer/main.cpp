/*
 * Copyright (C) 2018-2020 QuasarApp.
 * Distributed under the lgplv3 software license, see the accompanying
 * Everyone is permitted to copy and distribute verbatim copies
 * of this license document, but changing it is not allowed.
 */

#include "extracter.h"
#include "quasarapp.h"
#include "deploycore.h"
#include <QCoreApplication>
#include <QDir>
#include <QFileInfo>
#include <QList>
#include <deploy.h>


int main(int argc, char *argv[]) {

    QCoreApplication::setOrganizationName("QuasarApp");
    QCoreApplication::setOrganizationDomain("https://github.com/QuasarApp");
    QCoreApplication::setApplicationName("CQtDeployer");


    if (!QuasarAppUtils::Params::parseParams(argc, argv)) {
        qWarning() << "wrong parametrs";
        DeployCore::help();
        exit(0);
    }
    QuasarAppUtils::Params::setEnable("noWriteInFileLog", true);

    QCoreApplication app(argc, argv);

    Deploy deploy;
    if (deploy.run()) {
        app.exit(1);
    }

    return app.exec();

}
